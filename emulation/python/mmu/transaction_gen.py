import random
from dataclasses import dataclass
from collections import deque

@dataclass
class Transaction:
    id: int
    idi: int
    spa: int
    mmpt: int
    access_type: int
    delay: int
    result_data: int = 0

    schedule_clock: int = 0
    issued_clock: int = 0
    complete_clock: int = 0
    efficiency: float = 0.0

    g_complete: bool = False                        # Global complete flag
    h_complete: list = None                         # Hierarchical complete flags
    p_complete: list = None                         # Partial complete flags
    h_queued:   bool = False


PTW_ID = 0
MPTW_ID = 1

class TransactionGenerator:
    def __init__(self, num_transactions, delay_range=(1, 3), locality_parameter=0.5, levels=1):
        self.delay_range = delay_range
        self.transactions = []
        self.levels = levels
        self.locality_parameter = max(0.0, min(1.0, locality_parameter))  # Clamp to [0, 1]

        txn_addresses = self.generate_transaction_locality(num_transactions, locality_parameter)

        clock = 0
        for i in range(num_transactions):
            delay = self._random_delay(*delay_range)
            addr = txn_addresses[i]
            txn = Transaction(
                id=i,
                idi=addr,
                spa=addr,
                mmpt=0x2000000000000000,
                access_type=0x3,
                delay=delay,
                schedule_clock=clock + delay,
                result_data=addr,
                g_complete=False,
                h_complete=[False] * levels,
                p_complete=[False] * (levels+1),
                h_queued=False
            )
            self.transactions.append(txn)
            clock = txn.schedule_clock

        # --------------------------
        # Interface/Queue Structures
        # --------------------------

        ## G-PTW queue (For all transactions that has to go into the GPTW)
        self.hQUEUE = deque()             # Queue structure for page-level entries
        self.hqueue_data_out = 0          # Output data from queue
        self.hqueue_valid = False         # Whether output is valid

        ## Permission queue (For all transactions that has to go into the MPTW)
        self.pQUEUE = deque()             # Queue structure for page-level entries
        self.pqueue_data_out = 0          # Output data from queue
        self.pqueue_valid = False         # Whether output is valid

        ## Global hit signal
        self.g_hit_valid = False
        self.g_hit_data = 0

        ## Page Table Walker (PTW) and Main PTW (MPTW) interfaces
        self.ready = [False, False]       # ready[0] for PTW, ready[1] for MPTW
        self.valid = [False, False]       # valid[0] for PTW, valid[1] for MPTW

        ## Completion/results from both PTWs
        self.result_valid = [False, False]      # result_valid[0] for PTW, [1] for MPTW
        self.result_data = [0, 0]               # result_data[0] for PTW, [1] for MPTW

        ## Output fields for issued transactions (for hardware interface)
        self.spa = 0
        self.mmpt = 0
        self.access_type = 0
        self.result_data_out = 0

        ## Internal progress tracking
        self._current_idx = 0
        self._complete_idx = 0


    def _random_delay(self, min_val, max_val):
        mu = (min_val + max_val) / 2
        sigma = (max_val - min_val) / 6
        return max(min_val, min(max_val, int(random.gauss(mu, sigma))))

    def generate_transaction_locality(self, num_transactions, locality_parameter):
        """
        Generate a list of transaction addresses using the locality parameter.
        """
        addresses = []
        # Determine number of pages
        if locality_parameter >= 0.99:
            num_pages = 1
        elif locality_parameter <= 0.01:
            num_pages = num_transactions
        else:
            # More locality = fewer pages
            num_pages = int((1.0 - locality_parameter) * num_transactions)
            num_pages = max(1, num_pages)

        pages = list(range(num_pages))
        txn_per_page = [0] * num_pages

        # Distribute transactions over pages
        for _ in range(num_transactions):
            page = random.choices(pages, weights=[1.0 / (i + 1) for i in range(num_pages)])[0]
            offset = txn_per_page[page] * 0x20 + random.randint(0, 7)  # Some offset within page
            addr = (page * 4096 * 16) + offset  # The extra 16 is because Leaf MPTE can pack 16 pages
            addresses.append(addr)
            txn_per_page[page] += 1

        random.shuffle(addresses)
        #addresses.sort()
        return addresses

    def cycle(self, clock_cycle, verbose=False):
        """
        One simulation cycle: checks for global hits, issues transactions, and handles completions.
        """

        ##############
        # Defaulting #
        ##############

        self.pqueue_valid = False  # Default to invalid unless fired this cycle
        self.valid[PTW_ID] = False

        # Search the first available 3D Walking transaction (i.e. not G-checked yet, not walked)
        txn = next(
                (t for t in self.transactions
                if t.issued_clock == 0 and t.g_complete == False and not t.h_queued),
                None
            )
        
        if txn:
            self.spa = txn.spa
        else:
            self.spa = 0

        ######################
        # Global Hit Check   #
        ######################

        if self.g_hit_valid and txn and txn.schedule_clock <= clock_cycle:
            if not txn.g_complete: #txn.spa == self.g_hit_data and 
                txn.g_complete = True
                txn.issued_clock = clock_cycle
                self.pQUEUE.append(txn)
                if verbose:
                    print(f"[TXGEN][PQUEUE][gTLB] txn ID={txn.id} @cycle {clock_cycle} (SPA=0x{txn.spa:x}) added to pQUEUE")


        #####################
        # hQUEUE push Logic #
        #####################  
        
        if txn != None and not txn.g_complete and not txn.h_queued and txn.schedule_clock <= clock_cycle:
            # Either scheduled now or previously, and ready just became high
            txn.h_queued = True
            self.hQUEUE.append(txn)
            if verbose:
                    print(f"[TXGEN][HQUEUE] Adding ID={txn.id} @cycle {clock_cycle} (SPA=0x{txn.spa:x}) added to hQUEUE")
                        
        ####################
        # GPTW Issue Logic #
        ####################

        # The request missed the gTLB and has to go into GPTW

        # --- Issue logic ---
        if self.hQUEUE:
            txn = next(
                (t for t in self.transactions
                if t == self.hQUEUE[0]),
                None
            )

            # Either scheduled now or previously, and ready just became high
            if txn.schedule_clock <= clock_cycle and self.ready[PTW_ID]:
                # Pop from hQUEUE
                self.hQUEUE.popleft()
                txn.h_queued = False
                # Issue transaction
                self.spa = txn.spa
                self.mmpt = txn.mmpt
                self.access_type = txn.access_type
                self.valid[PTW_ID] = True

                txn.issued_clock = clock_cycle
                if verbose:
                    print(f"[TXGEN][GPTW] Issued txn ID={txn.id} @cycle {clock_cycle} (sched={txn.schedule_clock})")

        # --- Handle G-Stage Completion ---
        if self.result_valid[PTW_ID]:
            txn = next(
                (t for t in self.transactions
                if t.result_data == self.result_data[0] and t.complete_clock == 0 and t.g_complete == 0 ),
                None
            )
            if txn:
                current_level = sum(txn.h_complete)
                txn.h_complete[current_level] = True
                self.pQUEUE.append(txn)
                if verbose:
                    print(f"[TXGEN][GPTW] Complete G-Stage Walking LEVEL={current_level} for txn ID={txn.id} @cycle {clock_cycle}")
                
        
        ############################
        # MPTW Queue Output Logic  #
        ############################

        if self.ready[MPTW_ID] and self.pQUEUE:
            txn = self.pQUEUE.popleft()
            self.pqueue_data_out = txn
            self.pqueue_valid = True
            if verbose:
                print(f"[TXGEN] Issued from pQUEUE txn ID={txn.id} @cycle {clock_cycle} (SPA=0x{txn.spa:x})")

        self.valid[MPTW_ID] = self.pqueue_valid

                    
    '''
    def cycle(self, clock_cycle, verbose=False):

        ######################
        # Guest Access Check #
        ######################

        #####################
        # Host Access Check #
        #####################

        #####################
        # Permission Checks #
        #####################

        self.valid = False

        # --- Issue logic ---
        if self._current_idx < len(self.transactions):
            txn = self.transactions[self._current_idx]

            # Either scheduled now or previously, and ready just became high
            if txn.schedule_clock <= clock_cycle and self.ready:
                # Issue transaction
                self.spa = txn.spa
                self.mmpt = txn.mmpt
                self.access_type = txn.access_type
                self.valid = True

                txn.issued_clock = clock_cycle
                if verbose:
                    print(f"[TXGEN] Issued txn ID={txn.id} @cycle {clock_cycle} (sched={txn.schedule_clock})")

                self._current_idx += 1

        # --- Handle result completion ---
        if self.valid_result:
            txn = next(
                (t for t in self.transactions
                if t.result_data == self.result_data and t.complete_clock == 0),
                None
            )
            if txn:
                txn.complete_clock = clock_cycle
                if verbose:
                    print(f"[TXGEN] Complete txn ID={txn.id} @cycle {clock_cycle}")
    '''

    def is_done(self):
        """Returns True when all transactions are issued and completed."""
        return self._complete_idx >= len(self.transactions)

    def get_efficiency_stats(self):
        """
        Compute (min, avg, max) of valid efficiencies (excluding 0th and negatives).
        """
        effs = [txn.efficiency for txn in self.transactions[1:] if txn.efficiency > 0]
        if not effs:
            return 0.0, 0.0, 0.0

        return min(effs), sum(effs) / len(effs), max(effs)

    def print_results(self):
        """
        Print per-transaction efficiency values in order.
        """
        print("\nTransaction Efficiencies:")
        for txn in self.transactions:
            print(
                f"ID={txn.id:08} | IDI=0x{txn.idi:08x} | Sched={txn.schedule_clock:4} | Issued={txn.issued_clock:4} | "
                f"Complete={txn.complete_clock:4}"
            )

    def print_efficiency_stats(self):
        # Filter out zero and negative efficiencies
        effs = [txn.efficiency for txn in self.transactions if txn.efficiency > 0.0]

        print("\nEfficiency Statistics:")
        if not effs:
            print("  No valid efficiency values.")
        else:
            min_eff = min(effs)  # Guaranteed to be > 0
            avg_eff = sum(effs) / len(effs)
            max_eff = max(effs)

            print(f"  Minimum Efficiency : {min_eff:.2f}")
            print(f"  Average Efficiency : {avg_eff:.2f}")
            print(f"  Maximum Efficiency : {max_eff:.2f}")

    def return_overhead(self, plb_hit_rate):
        completed_txns = [t for t in self.transactions if t.complete_clock > 0]
        if not completed_txns:
            print("\nOverhead: No completed transactions.")
            return

        last_txn = max(completed_txns, key=lambda t: t.id)
        sched = last_txn.schedule_clock
        comp = last_txn.complete_clock

        if comp == 0:
            print("\nOverhead: Last transaction has no completion time.")
            return

        overhead = (comp / sched) #/ (1 + plb_hit_rate/1.7 )# Further divide by two because of sim problems
        print(f"\nOverhead: {overhead:.4f}x")
        return overhead


    def dump_transactions(self):
        """
        Dumps the content of all transactions in a structured table format.
        """
        print("\n=== Transaction Dump ===")
        header = (
            f"{'ID':>4} | {'IDI':>12} | {'SPA':>12} | {'Sched':>5} | "
            f"{'Issued':>6} | {'Complete':>8} | {'Delay':>5} | {'Eff.':>6} | "
            f"{'G_C':>4} | {'H_C':>4} | {'P_C':>4}"
        )
        print(header)
        print("-" * len(header))

        for txn in self.transactions:
            h_count = sum(txn.h_complete) if txn.h_complete else 0
            p_count = sum(txn.p_complete) if txn.p_complete else 0

            print(
                f"{txn.id:>4} | "
                f"0x{txn.idi:010x} | "
                f"0x{txn.spa:010x} | "
                f"{txn.schedule_clock:5} | "
                f"{txn.issued_clock:6} | "
                f"{txn.complete_clock:8} | "
                f"{txn.delay:5} | "
                f"{txn.efficiency:6.2f} | "
                f"{'Y' if txn.g_complete else 'N':>4} | "
                f"{str(txn.h_complete)} | "
                f"{str(txn.p_complete)}"
            )

    def dump_pqueue(self):
        """
        Print the contents of the current pQUEUE in a structured format.
        """
        print("\n=== pQUEUE Contents ===")

        if not self.pQUEUE:
            print("  (empty)")
            return

        header = (
            f"{'ID':>4} | {'IDI':>12} | {'SPA':>12} | {'Sched':>5} | "
            f"{'Issued':>6} | {'Complete':>8} | {'Delay':>5} | {'g_comp':>7}"
        )
        print(header)
        print("-" * len(header))

        for txn in list(self.pQUEUE):  # Copy to avoid mutation while printing
            print(
                f"{txn.id:>4} | "
                f"0x{txn.idi:010x} | "
                f"0x{txn.spa:010x} | "
                f"{txn.schedule_clock:5} | "
                f"{txn.issued_clock:6} | "
                f"{txn.complete_clock:8} | "
                f"{txn.delay:5} | "
                f"{str(txn.g_complete):>7}"
            )
