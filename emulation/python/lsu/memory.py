import random
from collections import deque

class Memory:
    def __init__(self, size, transaction_generator, grant_delay=(1, 1), valid_delay=(1, 1)):
        """
        Initialize the memory with structured entries and protocol parameters.

        :param size: Number of 64-bit entries in memory.
        :param grant_delay: (min, max) delay from request to grant.
        :param valid_delay: (min, max) delay from grant to valid.
        """
        self.size = size
        self.memory = [
            {
                "value": 0,
                "requested": False,
                "grant_cycle": 0,
                "granted": False,
                "valid_cycle": 0,
                "completed": False
            }
            for _ in range(size)
        ]

        self.grant_delay = grant_delay
        self.valid_delay = valid_delay

        # Protocol inputs
        self.req = False
        self.addr = 0

        # Protocol outputs (pulses)
        self.gnt = False
        self.valid = False
        self.data = 0

        # Track previous state
        self._prev_req = False
        self._prev_addr = 0

        # Track last assigned cycles to enforce strict ordering
        self._last_grant_cycle = 0
        self._last_valid_cycle = 0

        # IDMAP
        self.idmap = self._build_idmap(transaction_generator)

    def _random_delay(self, min_val, max_val):
        """
        Generate a bounded random delay using a Gaussian distribution.

        :param min_val: Minimum delay
        :param max_val: Maximum delay
        :return: Integer delay within [min_val, max_val]
        """
        mu = (min_val + max_val) / 2
        sigma = (max_val - min_val) / 6
        val = int(random.gauss(mu, sigma))
        return max(min_val, min(max_val, val))
    
    def _build_idmap(self, txgen):
        """
        Build a mapping from transaction.addr → internal memory line index.
        """
        idmap = {}
        unique_addrs = sorted({txn.spa for txn in txgen.transactions})
        for idx, addr in enumerate(unique_addrs):
            idmap[addr] = idx
        return idmap

    def write(self, addr, data):
        """
        Write a 64-bit value directly into the memory at the given address.

        :param addr: Memory index
        :param data: 64-bit integer data
        """
        if not (0 <= addr < self.size):
            raise IndexError(f"Address {addr} out of bounds (0..{self.size - 1})")
        if not (0 <= data < (1 << 64)):
            raise ValueError("Data must fit in 64 bits")
        self.memory[addr]["value"] = data

    def read(self, addr):
        """
        Read the raw 64-bit content of the memory at the given address.

        :param addr: Memory index
        :return: 64-bit integer value
        """
        if not (0 <= addr < self.size):
            raise IndexError(f"Address {addr} out of bounds (0..{self.size - 1})")
        return self.memory[addr]["value"]

    def setup_cache(self, plb_hit_rate):
        """
        Randomly pre-fill memory entries with 0x1, simulating a PLB cache.

        :param plb_hit_rate: Probability [0.0–1.0] of filling each entry
        """
        for addr in range(self.size):
            if random.random() < plb_hit_rate:
                self.write(addr, 0x1)

    def setup_page_size(self, page_size_prob):
        """
        Pre-fill memory with page size simulation: 0x2 for valid leaves, 0x0 otherwise.

        :param page_size_prob: Probability [0.0–1.0] of a valid leaf at each entry
        """
        for addr in range(self.size):
            self.write(addr, 0x2 if random.random() < page_size_prob else 0x0)

    def cycle(self, clock_cycle, verbose=False):
        """
        Simulate a single clock cycle of memory protocol.

        - Mark entries as requested if REQ is high and address matches.
        - Assign strictly ordered grant cycles using random delay.
        - At the grant cycle, assert grant if REQ is still valid.
        - If REQ drops or address changes before grant, abort it.
        - When grant is issued, compute valid cycle similarly.
        - Assert VALID when valid cycle is reached.

        :param clock_cycle: Current simulation clock cycle
        :param verbose: If True, prints protocol state for debugging
        """
        self.gnt = True
        self.valid = False
        self.data = 0
        # Ensure GNT and VALID stay high for 1 clock cycle per transaction
        if self.gnt:
            # Pulse lasts only one cycle
            self.gnt = True if self.grant_delay[0] == 0 else False 

        if self.valid:
            # Pulse lasts only one cycle
            self.valid = False

        for addr, entry in enumerate(self.memory):
            delay = 0
            # Convert Address on ID
            if self.addr in self.idmap:
                mem_index = self.idmap[self.addr]
            else:
                mem_index = -1

            # Register request
            if self.req and mem_index == addr and not entry["requested"]:
                entry["requested"] = True
                delay = self._random_delay(*self.grant_delay) - 1
                entry["grant_cycle"] = clock_cycle if self.grant_delay[0] == 0 else max(clock_cycle + delay, self._last_grant_cycle)
                #print("Clk is " + str(clock_cycle) + " grant at " + str(clock_cycle + delay))
                self._last_grant_cycle = entry["grant_cycle"]

            # Abort grant if REQ is lost or addr changes before grant issued
            if entry["requested"] and not entry["granted"]:
                if (not self.req or mem_index != addr) and clock_cycle < entry["grant_cycle"]:
                    entry["requested"] = False
                    entry["grant_cycle"] = 0

            # Grant processing
            if clock_cycle == entry["grant_cycle"]:
                if self.req and mem_index == addr:
                    entry["granted"] = True
                    self.gnt = True
                    delay = self._random_delay(*self.valid_delay)
                    entry["valid_cycle"] = max(clock_cycle + delay, self._last_valid_cycle)
                    self._last_valid_cycle = entry["valid_cycle"]
                else:
                    entry["requested"] = False
                    entry["grant_cycle"] = 0

            # Valid processing
            if clock_cycle == entry["valid_cycle"] and entry["granted"]:
                self.valid = True
                self.data = entry["value"]
                entry["completed"] = True

            if verbose:
                print(f"{str(entry)}")

        self._prev_req = self.req
        self._prev_addr = mem_index

        if verbose:
            print(
                f"[{clock_cycle:03}] REQ={int(self.req)} ADDR=0x{self.addr:04x} | ID={mem_index:04} | "
                f"GNT={int(self.gnt)} | VALID={int(self.valid)} DATA=0x{self.data:016x}"
            )

    def dump(self):
        """
        Print the full state of memory including protocol metadata for each entry.
        """
        print("Memory dump:")
        for addr, entry in enumerate(self.memory):
            print(
                f"0x{addr:04x}: 0x{entry['value']:016x} | "
                f"requested={entry['requested']} granted={entry['granted']} "
                f"completed={entry['completed']} grant_cycle={entry['grant_cycle']} "
                f"valid_cycle={entry['valid_cycle']}"
            )
