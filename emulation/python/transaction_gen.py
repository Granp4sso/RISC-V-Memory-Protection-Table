import random
from dataclasses import dataclass

@dataclass
class Transaction:
    id: int
    spa: int
    mmpt: int
    access_type: int
    delay: int
    result_data: int = 0

    schedule_clock: int = 0     # New: when eligible for issuing
    issued_clock: int = 0       # When valid is asserted
    complete_clock: int = 0     # When valid_result matches this transaction
    efficiency: float = 0.0     # Calculated at completion


class TransactionGenerator:
    def __init__(self, num_transactions, delay_range=(1, 3)):
        self.delay_range = delay_range
        self.transactions = []
        clock = 0

        # Precompute schedule clocks using delays
        for i in range(num_transactions):
            delay = self._random_delay(*delay_range)
            txn = Transaction(
                id=i,
                spa=i,
                mmpt=i,
                access_type=0x3,
                delay=delay,
                schedule_clock=clock + delay,  # Assign schedule time
                result_data=i
            )
            self.transactions.append(txn)
            clock = txn.schedule_clock  # Next txn scheduled after this one

        self.ready = False
        self.valid_result = False
        self.valid = False

        self.spa = 0
        self.mmpt = 0
        self.access_type = 0
        self.result_data = 0

        self._current_idx = 0
        self._complete_idx = 0

    def _random_delay(self, min_val, max_val):
        mu = (min_val + max_val) / 2
        sigma = (max_val - min_val) / 6
        return max(min_val, min(max_val, int(random.gauss(mu, sigma))))

    def cycle(self, clock_cycle, verbose=False):
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
                f"ID={txn.id:2} | Sched={txn.schedule_clock:4} | Issued={txn.issued_clock:4} | "
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

    def print_overhead_percentage(self, plb_hit_rate):
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


