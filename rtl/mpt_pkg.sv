// Author: Stefano Mercogliano <stefano.mercogliano@unina.it>
// Author: Valerio Di Domenico <didomenico.valerio@virgilio.it>

// Description: 
// This package defines structures, parameters, and state machines for managing 
// Memory Protection Tables (MPT) in systems with 64-bit architectures. 
// It includes types for MPT entries, access permissions, error handling, and PLB entries.
// The package supports different memory protection modes and lookup levels, 
// adapting to various system configurations based on the XLEN (architecture width).

`ifndef MPT_PKG
`define MPT_PKG

    package mpt_pkg;
        
        // Define lengths for various fields based on XLEN
        localparam int MPTL2_INFO_LEN = (XLEN == 32) ? 22 : 44;
        localparam int MMPT_PPN_LEN   = (XLEN == 32) ? 22: 44;
        localparam int MMPT_MODE_LEN  = (XLEN == 32) ? 2 : 4;
        localparam int WPRI_BITS_LEN  = (XLEN == 32) ? 2 : 10;
        localparam int PLB_ENTRY_LEN  = (XLEN == 32) ? 4 : 64;
        
        localparam int SDID_LEN = 6; 

        localparam logic [MMPT_MODE_LEN-1:0] BARE_MODE  = 0; 

        // State machine states for MPT operations
        typedef enum logic [2:0] {
            IDLE             = 3'b000, // Waiting for ptw_enable and valid address 
            VALIDATE_ADDRESS = 3'b001, // Validate the received physical address against the maximum addressable address for the current MPT mode. If the address is invalid, generate a format_fault error
            WAIT_FOR_GRANT   = 3'b010, // Hold state until memory responds with grant signal
            WAIT_FOR_RVALID  = 3'b011, // Hold state until memory responds with rvalid signal   
            MPT_LOOKUP       = 3'b100, // Lookup process to obtain perissions associated with PA
            FLUSH            = 3'b101, // If flush signal received 
            ERROR            = 3'b110, // If a format_error or an access_fault occurrs 
            COMMIT           = 3'b111  // Valid entry found
        } mpt_state_e;

        // Lookup levels for MPT
        typedef enum logic [1:0] {
                MPTL3_LOOKUP = 2'b00, // Used only in RV64 when physical address width is >= 46 bits
                MPTL2_LOOKUP = 2'b01, // Used in RV32, or in RV64 when physical address width is <= 46 bits
                MPTL1_LOOKUP = 2'b10  // Used to fetch permissions from MPTL1
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
            NO_ERROR                   = 3'b000, // No error 
            RESERVED_BITS_USED         = 3'b001, // Any of the reserved bits are used
            `ifdef ARCH_rv64
                NOT_VALID_MPTL3_ENTRY  = 3'b010, // MPTLE valid bit is set to 0 
            `endif
            NOT_VALID_ADDR             = 3'b011, // Validate the received physical address against the maximum addressable address for the current MPT mode
            UNDEFINED_MPTL2_TYPE       = 3'b100, // Not valid MPTL2 info field
            INVALID_MPTL2_INFO         = 3'b101, // Undefined mpt lookup state
            UNDEFINED_MPT_LOOKUP_STATE = 3'b110  // Undefined mpt lookup state
        } page_format_fault_e;

        // PLB entry permissions
        typedef enum logic [1:0] {
                    DISALLOWED = 2'b00, // Access not allowed
                    ALLOW_RX   = 2'b01, // Read and execute (but no write) access allowed
                    ALLOW_RW   = 2'b10, // Read and write (but no execute) access allowed
                    ALLOW_RWX  = 2'b11  // Read, write and execute access is allowed
        } mpt_permissions_e;
         
        // PLB entry structure
        typedef struct packed {
                    logic [SDID_LEN-1:0]  SDID;        // Supervisor domain identifier
                    logic [PLEN-1:0]      SPA;         // Supervisor physical address 
                    mpt_permissions_e     PERMISSIONS; // Permissions associated with SPA
        } plb_entry_t;
       

        typedef enum logic [2:0] {
            TYPE_1G_DISALLOW  = 3'b000, // Read, write or execute is not allowed to this 1 GiB address range for the domain
            TYPE_1G_ALLOW_RX  = 3'b001, // Read and execute (but no write) is allowed to this 1 GiB address range for the domain
            TYPE_1G_ALLOW_RW  = 3'b010, // Read and write (but no execute) is allowed to this 1 GiB address range for the domain
            TYPE_1G_ALLOW_RWX = 3'b011, // Read, write and execute is allowed to this 1 GiB address range for the domain
            TYPE_MPT_L1_DIR   = 3'b100, // In this case the INFO field provides the PPN of the MPTL1 page
            `ifdef ARCH_rv32
                TYPE_4M_PAGES = 3'b101  // The 32 MiB range of address space is partitioned into 8 4 MiB pages where each page has read/write/execute access specified via the INFO field
            `elsif ARCH_rv64
                TYPE_2M_PAGES = 3'b101  // The 32 MiB range of address space is partitioned into 16 2 MiB pages where each page has read/write/execute access specified via the INFO field
            `endif
        } mptl2_type_e;

        `ifdef ARCH_rv32
            localparam int PLEN = 34;
            localparam int XLEN = 32;
            localparam logic [MMPT_MODE_LEN-1:0] SMMPT34_MODE = 2'b01;
            
            typedef struct packed {
                logic [8:0]  PN2; 
                logic [9:0]  PN1;
                logic [2:0]  PN0;  
                logic [11:0] PAGE_OFFSET;     
            } spa_t;

            // MPTL2 entry structure for 32-bit systems
            typedef struct packed {
                logic [6:0]                 RESERVED; // Reserved (must be zero)
                mptl2_type_e                TYPE;     // Entry type field
                logic [MPTL2_INFO_LEN-1:0]  INFO;     // Contains additional information: 0 if TYPE refers to 1G pages, PPN of MPTL1 if TYPE is TYPE_MPT_L1_DIR, or permissions for 4M pages otherwise                 
            } mptl2_entry_t;

            // MPTL1 entry structure for 32-bit systems
            // The mptl1_entry_t is XLEN bits wide and contains XLEN/4 number of 2-bit fields, 
            // each specifying the access permissions for a 4 KiB page. The bits from XLEN-1 to XLEN/2 
            // are reserved for future use. The entry is selected by page.pn[1], and the 2-bit field for 
            // access permissions is selected using page.pn[0].
            typedef struct packed {
                logic [15:0] RESERVED;
                mpt_permissions_e [7:0] PAGE_PERM;                    
            } mptl1_entry_t;

            // MPT operational modes for 32-bit systems
            typedef enum logic [1:0] {
                MPT_BARE        = 2'b00, // No supervisor domain protection
                MPT_34          = 2'b01 // Page-based supervisor domain protection up to 34-bit physical addresses
            } mpt_mode_e;

        `elsif ARCH_rv64
            localparam int PLEN = 56;
            localparam int XLEN = 64;
            localparam int MPTL2_PPN_LEN  = 44;
            localparam logic [MMPT_MODE_LEN-1:0] SMMPT46_MODE = 4'b0001;
            localparam logic [MMPT_MODE_LEN-1:0] SMMPT56_MODE = 4'b0010;
            
            typedef struct packed {
                logic [9:0]  PN3;
                logic [20:0] PN2;
                logic [8:0]  PN1;
                logic [3:0]  PN0;  
                logic [11:0] PAGE_OFFSET;  
            } spa_t;

            typedef struct packed {
                logic [18:0]              RESERVED;  // Reserved (must be zero)
                logic                     VALID;     // If the entry is valid thib bit is set to 1 and MPTL2_PPN holds the next level of the MPT
                logic [MPTL2_PPN_LEN-1:0] MPTL2_PPN; // Holds the next level of the MPT                    
            } mptl3_entry_t;

            typedef struct packed {
                logic [16:0]               RESERVED; // Reserved (must be zero)
                mptl2_type_e               TYPE;     // Entry type
                logic [MPTL2_INFO_LEN-1:0] INFO;     // May be 0 if TYPE refers to 1G pages or may contain the PPN of MPTL1 if TYPE is TYPE_MPT_L1_DIR or may contain permissions associated to 4M pages
            } mptl2_entry_t;

            // MPTL1 entry structure for 64-bit systems
            // The mptl1_entry_t is XLEN bits wide and contains XLEN/4 number of 2-bit fields, 
            // each specifying the access permissions for a 4 KiB page. The bits from XLEN-1 to XLEN/2 
            // are reserved for future use. The entry is selected by page.pn[1], and the 2-bit field for 
            // access permissions is selected using page.pn[0].
            typedef struct packed {
                logic [31:0] RESERVED;
                mpt_permissions_e [15:0] PAGE_PERM;
            } mptl1_entry_t;

            // MPT operational modes for 64-bit systems
            typedef enum logic [3:0] {
                MPT_BARE    = 4'b0000, // No supervisor domain protection
                MPT_46      = 4'b0001, // Page-based supervisor domain protection up to 46-bit physical addresses
                MPT_56      = 4'b0010  // Page-based supervisor domain protection up to 56-bit physical addresses
            } mpt_mode_e;
        `endif

        typedef struct packed{
            mpt_mode_e                MODE;      // Address protection scheme (MPT Mode to be enforced) for physical addresses
            logic [SDID_LEN-1:0]      SDID;      // Supervisor domain identifier. Must be set to 0 if mode = BARE
            logic [WPRI_BITS_LEN-1:0] WPRI_BITS; // Write-preserved, read-ignored bits
            logic [MMPT_PPN_LEN-1:0]  PPN;       // Physical page number (PPN) of the root page of the memory protection tables. Must be set to 0 if mode = BARE
        } mmpt_reg_t;
        
    endpackage;
`endif