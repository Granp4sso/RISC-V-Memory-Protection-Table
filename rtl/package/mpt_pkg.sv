// Author: Stefano Mercogliano <stefano.mercogliano@unina.it>
// Author: Valerio Di Domenico <didomenico.valerio@virgilio.it>

// Description: 
//  This package defines structures, parameters, and state machines for managing 
//  Memory Protection Tables (MPT) in systems with 64-bit architectures. 
//  It includes types for MPT entries, access permissions, error handling, and PLB entries.
//  The package supports different memory protection modes and lookup levels, 
//  adapting to various system configurations based on the XLEN (architecture width).

`ifndef MPT_PKG
`define MPT_PKG

    package mpt_pkg;
        
        //////////////////////////////////////////////////////
        //    ___                         _                 //
        //   | _ \__ _ _ _ __ _ _ __  ___| |_ ___ _ _ ___   //
        //   |  _/ _` | '_/ _` | '  \/ -_)  _/ -_) '_(_-<   //
        //   |_| \__,_|_| \__,_|_|_|_\___|\__\___|_| /__/   //
        //                                                  //
        //////////////////////////////////////////////////////

        ///////////////////
        // Specification //
        ///////////////////

        localparam int PPN_LEN       = (XLEN == 32) ? 22: 52;
        localparam int MMPT_MODE_LEN = (XLEN == 32) ? 2 : 4;
        localparam int MPTESIZE      = (XLEN == 32) ? 4 : 8;
        localparam int NUMPGINRANGE  = (XLEN == 32) ? 3 : 4;
        localparam int SDID_LEN      = 6;
        localparam int WPRI_BITS_LEN = 2; 
        localparam int PAGESIZE      = 4096;
        localparam logic [MMPT_MODE_LEN-1:0] BARE_MODE = 0; 

        localparam int SMMPT43_WALKING_LEVELS = 3;
        localparam int SMMPT52_WALKING_LEVELS = 4;
        localparam int SMMPT64_WALKING_LEVELS = 5;

        ///////////////////////
        // Microarchitecture //
        ///////////////////////

        // Specify the maximum size for the ROB
        // the ID '1 (sizeof ROB_ID_SIZE) is the unvalid one
        localparam unsigned ROB_ID_SIZE = 12; 

        //////////////////////////////////////////////////////////
        //      _          _      ___              _  __ _      //
        //     /_\  _ _ __| |_   / __|_ __  ___ __(_)/ _(_)__   //
        //    / _ \| '_/ _| ' \  \__ \ '_ \/ -_) _| |  _| / _|  //
        //   /_/ \_\_| \__|_||_| |___/ .__/\___\__|_|_| |_\__|  //
        //                           |_|                        //
        //////////////////////////////////////////////////////////

        ///////////////////
        // Specification //
        ///////////////////

        // MPT access types
        typedef enum logic [1:0] {
            ACCESS_NONE  = 2'b00,
            ACCESS_READ  = 2'b01,
            ACCESS_WRITE = 2'b10,
            ACCESS_EXEC  = 2'b11
        } mpt_access_e;

        // MPT leaf-entry permissions
        typedef enum logic [2:0] {
            ALLOW_R   = 3'b001,
            ALLOW_RW  = 3'b011,
            ALLOW_X   = 3'b100,
            ALLOW_RX  = 3'b101,
            ALLOW_RWX = 3'b111
        } mpt_permissions_e;

        // Format error that may occur in page table lookups
        typedef enum logic [2:0] {
            NO_ERROR           = 3'b000, // No error 
            RESERVED_BITS_USED = 3'b001, // Any of the reserved bits are used
            NOT_VALID_ENTRY    = 3'b010, // MPTLE valid bit is set to 0 
            NOT_VALID_ADDR     = 3'b011, // If the received physical address ais larger then the maximum addressable address for the current MPT mode
            LEVEL_UNDERFLOW    = 3'b100, // If we arrived to the last MPT level and the entry is not a leaf
            INVALID_LEVEL      = 3'b101, // Unsupported lookup level
            UNSUPPORTED_MODE   = 3'b110  // Unsupported MPT reg MODE
        } page_format_fault_e;
    
        `ifdef ARCH_rv32
            localparam int XLEN = 32;
            localparam logic [MMPT_MODE_LEN-1:0] SMMPT34_MODE = 2'b01;
            
            // Supervisor physical addresses up to 34-bit 
            typedef struct packed {
                logic [8:0]  PN1; 
                logic [9:0]  PN0;  
                logic [14:0] RANGE_OFFSET;     
            } spa_t;

            // MPT non-leaf entry
            typedef struct packed {
                logic [21:0] PPN;       // Physical page number of the next level of the memory protection table
                logic [8:0]  RESERVED;  // Reserved bits
            } mpt_nl_entry_t;

            // MPT leaf entry
            typedef struct packed {
                logic                   N;         // Naturally aligned power-of-two bit
                mpt_permissions_e [7:0] PERMS;     // Page permissions
                logic [4:0]             RESERVED;  // Reserved bits
            } mpt_l_entry_t;
            
            // The MPT payload contains bits that differentiate between a leaf entry and a non-leaf entry
            typedef union packed {
                mpt_nl_entry_t non_leaf;
                mpt_l_entry_t  leaf;
            } mpt_payload_u;

            // An mpt_entry_t mpt_entry could be a leaf entry or non-leaf entry depenging on mpt_payload
            typedef struct packed {
                mpt_payload_u mpt_payload;
                logic         L;            // This bit is set to 1 if mpte is a leaf entry
                logic         V;            // This bit is set to 0 if mpte is valid   
            } mpt_entry_t;

            // MPT operational modes for 32-bit systems
            typedef enum logic [1:0] {
                MPT_BARE = 2'b00, // No supervisor domain protection
                MPT_34   = 2'b01  // Page-based supervisor domain protection up to 34-bit physical addresses
            } mpt_mode_e;

        `elsif ARCH_rv64
            localparam int XLEN = 64;
            localparam logic [MMPT_MODE_LEN-1:0] SMMPT43_MODE = 4'b0001;
            localparam logic [MMPT_MODE_LEN-1:0] SMMPT52_MODE = 4'b0010;
            localparam logic [MMPT_MODE_LEN-1:0] SMMPT64_MODE = 4'b0011;

            // Supervisor physical addresses up to 43-bit 
            typedef struct packed {
                logic [20:0] ZERO; 
                logic [8:0]  PN2;
                logic [8:0]  PN1;
                logic [8:0]  PN0;  
                logic [15:0] RANGE_OFFSET;  
            } spa43_t;

            // Supervisor physical addresses up to 52-bit 
            typedef struct packed {
                logic [11:0] ZERO;
                logic [8:0]  PN3;
                logic [8:0]  PN2;
                logic [8:0]  PN1;
                logic [8:0]  PN0;  
                logic [15:0] RANGE_OFFSET;  
            } spa52_t;

            // Supervisor physical addresses up to 64-bit 
            typedef struct packed {
                logic [11:0] PN4;
                logic [8:0]  PN3;
                logic [8:0]  PN2;
                logic [8:0]  PN1;
                logic [8:0]  PN0;  
                logic [15:0] RANGE_OFFSET;  
            } spa64_t;

            // Depending on the MPT MODE, a SPA could be a spa43, spa52 or spa64
            typedef union packed {
                logic [63:0] raw;
                spa43_t      spa43;
                spa52_t      spa52;
                spa64_t      spa64;
            } spa_t_u;
            
            // MPT non-leaf entry
            typedef struct packed {
                logic        RESERVED; // Reserved bits
                logic [51:0] PPN;      // Physical page number of the next level of the memory protection table
            } mpt_nl_entry_t;
            
            // MPT leaf entry
            typedef struct packed {
                logic [4:0]              RESERVED; // Reserved bits
                mpt_permissions_e [15:0] PERMS;    // Page permissions
            } mpt_l_entry_t;

            // The MPT payload contains bits that differentiate between a leaf entry and a non-leaf entry
            typedef union packed {
                mpt_nl_entry_t non_leaf;
                mpt_l_entry_t  leaf;
            } mpt_payload_u;

            // An mpt_entry could be a leaf entry or non-leaf entry depenging on mpt_payload
            typedef struct packed {
                logic         N;           // Naturally aligned power-of-two bit  
                mpt_payload_u mpt_payload;
                logic [7:0]   RESERVED;    // Reserved bits
                logic         L;           // This bit is set to 0 if mpte is a leaf entry
                logic         V;           // This bit is set to 0 if mpte is valid   
            } mpt_entry_t;

            // MPT operational modes for 64-bit systems
            typedef enum logic [3:0] {
                MPT_BARE = 4'b0000, // No supervisor domain protection
                MPT_43   = 4'b0001, // Page-based supervisor domain protection up to 43-bit physical addresses
                MPT_52   = 4'b0010, // Page-based supervisor domain protection up to 52-bit physical addresses
                MPT_64   = 4'b0011  // Page-based supervisor domain protection up to 64-bit physical addresses
            } mpt_mode_e;
            
        `endif

        typedef struct packed{
            mpt_mode_e                MODE; // Address protection scheme (MPT Mode to be enforced) for physical addresses
            logic [SDID_LEN-1:0]      SDID; // Supervisor domain identifier. Must be set to 0 if mode = BARE
            logic [WPRI_BITS_LEN-1:0] WPRI; // Write-preserved, read-ignored bits
            logic [PPN_LEN-1:0]       PPN;  // Physical page number (PPN) of the root page of the memory protection tables. Must be set to 0 if mode = BARE
        } mmpt_reg_t;

        //////////////////////////////////
        //    _____                     //
        //   |_   _|  _ _ __  ___ ___   //
        //     | || || | '_ \/ -_|_-<   //
        //     |_| \_, | .__/\___/__/   //
        //         |__/|_|              //
        //////////////////////////////////

        typedef logic[ ROB_ID_SIZE - 1: 0 ] rob_id_size_t;

        ///////////////////////
        // Microarchitecture //
        ///////////////////////

        // Walking Status for a Transaction
        typedef enum logic [1:0] {
            MPT_WALKING_DO      = 2'b00,    // Perform walking for the current transaction
            MPT_WALKING_FWD     = 2'b01,    // Do not perform walking as a match in the forward buffer happened
            MPT_WALKING_SKIP    = 2'b10,    // Skip walking for this transaction (it is either completed, plb hit or failed)
            MPT_WALKING_UNUSED  = 2'b11     // Unused
        } mpt_walking_e;

        // Flush type 
        typedef enum logic [1:0] {
            MPT_FLUSH_NONE      = 2'b00,    // Do not flush
            MPT_FLUSH_ALL       = 2'b01,    // Flush the stage     
            MPT_FLUSH_SPEC      = 2'b10,    // Flush only speculative transactions
            MPT_FLUSH_UNUSED    = 2'b11     // Unused
        } mptw_flush_ctrl_e;

        typedef enum logic [1:0] {
            MPT_FLUSHED_NONE        = 2'b00,    // No flush requested
            MPT_FLUSHED_ONGOING     = 2'b01,    // Flush acknowledged and ongoing
            MPT_FLUSHED_UNUSED      = 2'b10,    // Unused
            MPT_FLUSHED_COMPLETED   = 2'b11     // Flush completed (high for one clock cycle)
        } mptw_flush_status_e;

        // Forwarding buffer entry 
        typedef struct packed {
            spa_t_u             mpte_tag;
            mpt_entry_t         mpte_content;
        } mptw_fwd_buff_entry_t;

        // Pipeline transaction
        typedef struct packed {
            rob_id_size_t       id;             // Transaction assigned ID (in the Issue Stage)
            logic               speculative;    // Transaction is running from speculative execution
            logic               completed;      // Transaction is ready to retire
            logic               valid;          // Transaction is valid (in the Fetch Stage)
            logic               access_error;   // Permissions match fail
            page_format_fault_e format_error;   // Format error in transaction or MPT entries
            logic               plb_hit;        // This transaction hit on the PLB
            mpt_entry_t         mpte;           // Last MPT Entry retrieved for this transaction
            spa_t_u             mpte_ptr;       // Address to the last MPT Entry retrieved
            mpt_walking_e       walking;        // If the transaction should perform the walking or not
            mpt_access_e        access_type;    // Input transaction access typre (RXW)
            spa_t_u             spa;            // Input transaction phyisical address
            mmpt_reg_t          mmpt;           // Input transaction mmpt CSR value
        } mptw_transaction_t;

        ///////////
        // Cache //
        ///////////
         
        // Currently Unused
        // PLB entry structure
        typedef struct packed {
            logic [SDID_LEN-1:0] SDID;  // Supervisor domain identifier
            logic [XLEN-1:0]     SPA;   // Supervisor physical address 
            mpt_permissions_e    PERMS; // Permissions associated with SPA
        } plb_entry_t;

        typedef struct packed {
            logic [SDID_LEN-1:0]    SDID;
            spa_t_u                 spa;
            mpt_access_e            access_type;
        } plb_lookup_req_t;

    endpackage;
    
`endif