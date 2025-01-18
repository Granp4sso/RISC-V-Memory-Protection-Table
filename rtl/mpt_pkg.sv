// Author: Stefano Mercogliano <stefano.mercogliano@unina.it>
// Author: Valerio Di Domenico <valer.didomenico@studenti.unina.it>

// Description: 
// This package defines structures, parameters, and state machines for managing 
// Memory Protection Tables (MPT) in systems with 32-bit and 64-bit architectures. 
// It includes types for MPT entries, access permissions, error handling, and TLB entries.
// The package supports different memory protection modes and lookup levels, 
// adapting to various system configurations based on the XLEN (architecture width).

`ifndef MPT_PKG
`define MPT_PKG

    package mpt_pkg;
        
        `ifndef XLEN
            `define XLEN 64  
        `endif

        
        // 64-bit or 32-bit architecture
        parameter int XLEN = 64;
        

        // Physical address length (PLEN) based on XLEN
        localparam int PLEN = (XLEN == 32) ? 34 : 56;

        // Define lengths for various fields based on XLEN
        localparam int MPTL2_INFO_LEN = (XLEN == 32) ? 22 : 44;
        localparam int MMPT_PPN_LEN = (XLEN == 32) ? 22: 44;
        localparam int MMPT_MODE_LEN = (XLEN == 32) ? 2: 4;
        localparam int WPRI_BITS_LEN = (XLEN == 32) ? 2 : 10;
        localparam int TLB_ENTRY_LEN = (XLEN == 32) ? 42 : 64;
        localparam int MPTL2_PPN_LEN = 44;                      // PPN_LEN used only in RV64 MPTL3_entry
        localparam int SDID_LEN = 6;                                

        // State machine states for MPT operations
        typedef enum logic [2:0] {
            IDLE             = 3'b000, // Waiting for ptw_enable and valid address 
            VALIDATE_ADDRESS = 3'b001, // Validate the received physical address against the maximum addressable address for the current MPT mode. If the address is invalid, generate a format_fault error
            MPT_LOOKUP       = 3'b011, // Lookup process to obtain perissions associated with PA
            FLUSH            = 3'b100, // If flush signal received 
            ERROR            = 3'b101, // If a format_error or an access_fault occurrs 
            COMMIT           = 3'b110  // Valid entry found
        } mpt_state_e;

        // Lookup levels for MPT
        typedef enum logic [1:0] {
            MPTL3_LOOKUP = 2'b00, // Used only in RV64 and physical address widths => 46
            MPTL2_LOOKUP = 2'b01, 
            MPTL1_LOOKUP = 2'b10
        } mpt_lookup_state_e;

        // MPT access types
        typedef enum logic [1:0] {
            ACCESS_NONE  = 2'b00,
            ACCESS_READ  = 2'b01,
            ACCESS_WRITE = 2'b10,
            ACCESS_EXEC  = 2'b11
        } mpt_access_e;

        // Format error that may occur in page table lookups
        typedef enum logic [2:0] {
            NO_ERROR              = 3'b000, 
            RESERVED_BITS_USED    = 3'b001, // Any of the reserved bits are used
            NOT_VALID_MPTL3_ENTRY = 3'b010, // MPTLE valid bit is set to 0 
            NOT_VALID_ADDR        = 3'b011, // // Validate the received physical address against the maximum addressable address for the current MPT mode. If the address is invalid, generate a format_fault error
            INVALID_MPTL2_INFO    = 3'b100, // Not valid MPTL2 info field
            INVALID_PAGE_INDEX    = 3'b101, // Not valid PA_PPN[0]
            UNDEFINED_MPTL2_TYPE  = 3'b110  // Undefined MPTL2_TYPE
        } page_format_fault_e;

        // Memory translation table level 1 entry type
        // The mptl1_entry_t is XLEN bits wide and contains XLEN/4 number of 2-bit fields, 
        // each specifying the access permissions for a 4 KiB page. The bits from XLEN-1 to XLEN/2 
        // are reserved for future use. The entry is selected by page.pn[1], and the 2-bit field for 
        // access permissions is selected using page.pn[0].
        typedef logic [XLEN-1:0] mptl1_entry_t;

        // TLB entry permissions
        typedef enum logic [1:0] {
                    DISALLOWED = 2'b00, // Access not allowed
                    ALLOW_RX   = 2'b01, // Read and execute (but no write) access allowed
                    ALLOW_RW   = 2'b10, // Read and write (but no execute) access allowed
                    ALLOW_RWX  = 2'b11  // Read, write and execute access is allowed
        } mpt_permissions_e;

        // TLB entry structure
        typedef struct packed {
                    mpt_permissions_e     PERMISSIONS; // Permissions associated with PADDR
                    logic [PLEN-1:0]      PADDR;       // Physical address 
                    logic [SDID_LEN-1:0]  SDID;        // Supervisor domain identifier
        } tlb_entry_t;
        
            `ifdef XLEN_32
                // MPTL2 entry types for 32-bit systems
                typedef enum logic [2:0] {
                    TYPE_1G_DISALLOW  = 3'b000, // Read, write or execute is not allowed to this 1 GiB address range for the domain
                    TYPE_1G_ALLOW_RX  = 3'b001, // Read and execute (but no write) is allowed to this 1 GiB address range for the domain
                    TYPE_1G_ALLOW_RW  = 3'b010, // Read and write (but no execute) is allowed to this 1 GiB address range for the domain
                    TYPE_1G_ALLOW_RWX = 3'b011, // Read, write and execute is allowed to this 1 GiB address range for the domain
                    TYPE_MPT_L1_DIR   = 3'b100, // In this case the INFO field provides the PPN of the MPTL1 page.
                    TYPE_4M_PAGES     = 3'b101, // The 32 MiB range of address space is partitioned into 8 4 MiB pages where each page has read/write/execute access specified via the INFO field
                    TYPE_RESERVED_0   = 3'b110, // Reserved
                    TYPE_RESERVED_1   = 3'b111  // Reserved 
                } mptl2_type_e;

                // MPTL2 entry structure for 32-bit systems
                typedef struct packed {
                    logic [MPTL2_INFO_LEN-1:0]  INFO; // May be 0 if TYPE refers to 1G pages or may contain the PPN of MPTL1 if TYPE is TYPE_MPT_L1_DIR or may contain permissions associated to 4M pages  
                    mptl2_type_e                TYPE; // Entry type
                    logic [6:0]                 RESERVED; // Reserved
                } mptl2_entry_t;

                // MPT operational modes for 32-bit systems
                typedef enum logic [1:0] {
                    MPT_BARE        = 2'b00, // No supervisor domain protection
                    MPT_34          = 2'b01, // Page-based supervisor domain protection up to 34-bit physical addresses
                    RESERVED_0      = 2'b10, // Reserved
                    RESERVED_1      = 2'b11  // Reserved
                } mpt_mode_e;

                // MMPT register structure for 32-bit systems
                typedef struct packed{
                    logic [MMPT_PPN_LEN-1:0]  PPN;       // Physical page number (PPN) of the root page of the memory protection tables. Must be set to 0 if mode = BARE
                    logic [WPRI_BITS_LEN-1:0] WPRI_BITS; // Write-preserved, read-ignored bits
                    logic [SDID_LEN-1:0]      SDID;      // Supervisor domain identifier. Must be set to 0 if mode = BARE
                    mpt_mode_e                MODE;      // Address protection scheme (MPT Mode to be enforced) for physical addresses
                } mmpt_reg_t;

            `else  // XLEN assumed to be 64
                typedef struct packed {
                    logic [MPTL2_PPN_LEN-1:0] MPTL2_PPN; // Holds the next level of the MPT
                    logic        VALID;                  // If the entry is valid thib bit is set to 1 and MPTL2_PPN holds the next level of the MPT
                    logic [18:0] RESERVED;               // Reserved
                } mptl3_entry_t;

                typedef enum logic [2:0] {
                    TYPE_1G_DISALLOW  = 3'b000, // Read, write or execute is not allowed to this 1 GiB address range for the domain
                    TYPE_1G_ALLOW_RX  = 3'b001, // Read and execute (but no write) is allowed to this 1 GiB address range for the domain
                    TYPE_1G_ALLOW_RW  = 3'b010, // Read and write (but no execute) is allowed to this 1 GiB address range for the domain
                    TYPE_1G_ALLOW_RWX = 3'b011, // Read, write and execute is allowed to this 1 GiB address range for the domain
                    TYPE_MPT_L1_DIR   = 3'b100, // In this case the INFO field provides the PPN of the MPTL1 page.
                    TYPE_2M_PAGES     = 3'b101, // The 32 MiB range of address space is partitioned into 16 2 MiB pages where each page has read/write/execute access specified via the INFO field.
                    TYPE_RESERVED_0   = 3'b110, // Reserved
                    TYPE_RESERVED_1   = 3'b111  // Reserved
                } mptl2_type_e;

                typedef struct packed {
                    logic [MPTL2_INFO_LEN-1:0] INFO;     // May be 0 if TYPE refers to 1G pages or may contain the PPN of MPTL1 if TYPE is TYPE_MPT_L1_DIR or may contain permissions associated to 4M pages
                    mptl2_type_e               TYPE;     // Entry type
                    logic [16:0]               RESERVED; // Reserved
                } mptl2_entry_t;

                typedef enum logic [3:0] {
                    MPT_BARE = 4'b0000,    // No supervisor domain protection
                    MPT_46   = 4'b0001,    // Page-based supervisor domain protection up to 46-bit physical addresses
                    MPT_56   = 4'b0010,    // Page-based supervisor domain protection up to 56-bit physical addresses
                    RESERVED_0 = 4'b0011,  // Reserved
                    RESERVED_1 = 4'b0100,  // Reserved
                    RESERVED_2 = 4'b0101,  // Reserved
                    RESERVED_3 = 4'b0110,  // Reserved
                    RESERVED_4 = 4'b0111,  // Reserved
                    RESERVED_5 = 4'b1000,  // Reserved
                    RESERVED_6 = 4'b1001,  // Reserved
                    RESERVED_7 = 4'b1010,  // Reserved
                    RESERVED_8 = 4'b1011,  // Reserved
                    RESERVED_9 = 4'b1100,  // Reserved
                    RESERVED_10 = 4'b1101, // Reserved
                    RESERVED_11 = 4'b1110, // Reserved
                    RESERVED_12 = 4'b1111  // Reserved
                } mpt_mode_e;

                typedef struct packed{
                    logic [MMPT_PPN_LEN-1:0]  PPN;       // Physical page number (PPN) of the root page of the memory protection tables. Must be set to 0 if mode = BARE
                    logic [WPRI_BITS_LEN-1:0] WPRI_BITS; // Write-preserved, read-ignored bits
                    logic [SDID_LEN-1:0]      SDID;      // Supervisor domain identifier. Must be set to 0 if mode = BARE
                    mpt_mode_e                MODE;      // Address protection scheme (MPT Mode to be enforced) for physical addresses
                } mmpt_reg_t;
        `endif
    endpackage;
`endif