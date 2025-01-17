// Author: Stefano Mercogliano <stefano.mercogliano@unina.it>
// Description: TBD
import mpt_pkg::*;

module mtt_top #(
    parameter int unsigned ADDR_LEN = 56,
    parameter int unsigned XLEN = 64
) (
    // Control Port
    input logic  clk_i,
    input logic  rst_ni,
    input logic  flush_i,
    input logic  ptw_enable_i,
    input logic  [ADDR_LEN-1:0] paddr_i,
    input logic  addr_valid_i,

    // CSR Port
    input mmpt_reg_t mmpt_reg_i, // Register content

    // Error Port
    output logic access_page_fault_o,
    output page_format_fault_e format_error_o,

    // Memory Port TODO mem uninasoc_mem.svh
    output logic   mem_master_req,
    output logic   [ADDR_LEN-1:0] mem_master_addr,
    input  logic   mem_master_valid,

    // Status Port
    output logic   ptw_busy_o,
    output logic   ptw_valid_o,

    input mpt_access_e access_type_i,

    // Output Port
    output logic [63:0] TLB_entry_o, // TLB entry (SDID, paddr, permissions)
    output logic   allow_o
);

    // State Registers
    mpt_state_e curr_state, next_state;
    mpt_lookup_state_e curr_lookup_state, next_lookup_state;

    // Internal Signals
    logic [3:0] mode;                 // Mode extracted from mmpt_reg
    logic [1:0] permissions;          // Permissions from MPT
    logic [5:0] sdid;                 // Supervisor Domain ID
    logic [ADDR_LEN-1:0] lookup_addr; // Current lookup address
    logic valid_address;              // Address validation signal for VALIDATE_ADDRESS state
    logic [2:0] error_code;           // Error code
    logic [XLEN-1:0] padd;              //
 
    // Assign Outputs
    assign ptw_busy_o = (curr_state != IDLE);
    assign format_error_o = error_code;
    assign ptw_valid_o = (curr_state == COMMIT); //inserire in COMMIT
    assign allow_o = (curr_state == COMMIT);     //inserire  

    // Extract mode from mmpt_reg
    assign mode = mmpt_reg_i.MODE; 
    assign sdid = (mode == 4'b0000) ? 6'b000000 : (mmpt_reg_i & MTTP64_SDID) >> 54;

    always_comb begin
        // Default values
        next_state = curr_state;
        next_lookup_state = curr_lookup_state;
        mem_master_req = 0;
        mem_master_addr = 0;
        access_page_fault_o = 0;
        allow_o = 0;
        error_code = NO_ERROR;

        case (curr_state)
            IDLE: begin
                access_page_fault_o = 0;
                if (ptw_enable_i && addr_valid_i) begin
                    next_state = VALIDATE_ADDRESS;
                end
            end

            VALIDATE_ADDRESS: begin
                // Validate physical address length based on mode
                case (mode)
                    4'b0000: begin
                        // Bare mode: no translation, accept all addresses
                        valid_address = 1;
                        mmpt_reg_i[59:54] = 6'b0;      // SDID set to 0
                        mmpt_reg_i[43:0]  = 44'b0;     // PPN set to 0
                        permissions = 2'b11;
                        TLB_entry_o = {sdid, paddr_i, permissions}; 
                        next_state = COMMIT;
                    end
                    4'b0001: begin
                        // Mode 1: Address must be <= 46 bits
                        valid_address = (paddr_i < (1 << 46));
                        lookup_addr = (paddr_i & SPA_PN2) + (mmpt_reg_i & MTTP64_PPN);
                    end
                    4'b0010: begin
                        // Mode 2: Address must be <= 56 bits
                        valid_address = (paddr_i < (1 << 56));
                        lookup_addr = ((paddr_i & SPA_PN3) + (mmpt_reg_i & MTTP64_PPN));
                    end
                    default: begin
                        // Unsupported mode
                        valid_address = 0;
                    end
                endcase

                if (!valid_address) begin
                    next_state = ERROR;
                    error_code = NOT_VALID_ADDR;
                end else if (valid_address && mode != 4'b0000) begin
                    next_state = WAIT_FOR_MEM;
                end
            end

            WAIT_FOR_MEM: begin
                mem_master_req=1;
                mem_master_addr = lookup_addr;

                if(mem_grant)begin
                    next_state = MPT_LOOKUP;
                end
                else begin
                    next_state = WAIT_FOR_MEM;
                end
            end
            
            MPT_LOOKUP: begin
                // we wait for the valid signal
                if (data_rvalid_q) begin
                    case (curr_lookup_state)
                        MPTL3_LOOKUP: begin
                            //If MODE is SMMTT_46 go to MPTL2_LOOKUP else check if entry is valid or not
                            if (mode == 4'b0001) begin 
                                next_state = WAIT_FOR_MEM; //Maybe not necessary since I computed lookup_addr for MPTL2 in VALIDATE_ADDRESS state
                                next_lookup_state = MPTL2_LOOKUP;

                            end
                            // Perform L3 lookup
                            else if (!mptl3_entry.valid/* entry not valid */) begin
                                next_state = ERROR;
                                error_code = NOT_VALID_MPTL3_ENTRY;
                            end else if ( mptl3_entry.reserved!=0/*reserved_bit used*/ ) begin
                                next_state = ERROR;
                                error_code = RESERVED_BITS_USED;
                            end else begin
                                //Compute next MPT pointer
                                //paddr_i.PPN[2]+MPTL3.PPN
                                lookup_addr = ((paddr_i & SPA_PN2) + (mptl3_entry.mttl2_ppn));
                                next_state = WAIT_FOR_MEM;
                                next_lookup_state = MPTL2_LOOKUP; 
                            end
                        end

                        MPTL2_LOOKUP: begin
                        // check reserved bits
                        if (mptl2_entry.reserved != 0) begin
                            next_state = ERROR;
                            error_code = RESERVED_BITS_USED;  
                        end else begin
                            case (mptl2_entry.type)
                                SMMTT_TYPE_1G_DISALLOW: begin  // 1G_disallow
                                    if (mptl2_entry.info != 0) begin
                                        next_state = ERROR;
                                        error_code = INVALID_MPTL2_INFO;
                                    end else begin
                                        permissions = 2'b00;  
                                        next_state = COMMIT;////////////////////////////////////////////////////////////////////
                                        access_page_fault_o = 1;
                                        TLB_entry_o = {sdid, paddr_i, permissions};  
                                    end
                                end

                                SMMTT_TYPE_1G_ALLOW_RX: begin  // 1G_allow_rx
                                    if (mptl2_entry.info != 0) begin
                                        next_state = ERROR;
                                        error_code = INVALID_MPTL2_INFO; 
                                    end else begin
                                        permissions = 2'b01; 
                                        if (access_type_i == permissions) begin 
                                            next_state = COMMIT;
                                            TLB_entry_o = {sdid, paddr_i, permissions};  
                                        end else begin
                                            next_state = ERROR;//////////////////////////////////////////////////////////////
                                            access_page_fault_o = 1;
                                        end
                                    end
                                end

                                SMMTT_TYPE_1G_ALLOW_RW: begin  // 1G_allow_rw
                                    if (mptl2_entry.info != 0) begin
                                        next_state = ERROR;
                                        error_code = INVALID_MPTL2_INFO;  
                                    end else begin
                                        permissions = 2'b10;  
                                        if (access_type_i == permissions) begin 
                                            next_state = COMMIT;
                                            TLB_entry_o = {sdid, paddr_i, permissions};  
                                        end else begin
                                            next_state = ERROR;/////////////////////////////////////////////////////////////////
                                            access_page_fault_o = 1;
                                        end
                                    end
                                end

                                SMMTT_TYPE_1G_ALLOW_RWX: begin  // 1G_allow_rwx
                                    if (mptl2_entry.info != 0) begin
                                        next_state = ERROR;
                                        error_code = INVALID_MPTL2_INFO;  
                                    end else begin
                                        permissions = 2'b11;  
                                        next_state = COMMIT;
                                        TLB_entry_o = {sdid, paddr_i, permissions};
                                    end
                                end

                                SMMTT_TYPE_MTT_L1_DIR: begin  // MPT_L1_DIR
                                    //The info field contains the PPN of the L1 page
                                    lookup_addr = ((mptl2_entry.info) + (paddr_i & SPA_PN1)) ;  // Compute next MPT address
                                    next_state = WAIT_FOR_MEM;  
                                    next_lookup_state = MPTL1_LOOKUP; 
                                end

                                /*TODO 
                                SMMTT_TYPE_4M_PAGES: begin  // 4M_PAGES o 2M_PAGES
                                    // Per RV32: 32 MiB divisi in 8 pagine da 4 MiB         quindi ho 8  campi da 2 bit ciascuno che occupano i bit 15:0
                                    // Per RV64: 32 MiB divisi in 16 pagine da 2 MiB        quindi ho 16 campi da 2 bit ciascuno che occupano i bit 31:0
                                    // INFO contiene i permessi per ogni pagina
                                    permissions = mptl2_entry.info[15:0];  // Prendi i permessi per ciascun range
                                    next_state = COMMIT;
                                    TLB_entry_o = {sdid, paddr_i, permissions};  // Finalizza l'entry nel TLB
                                end
                                */
                                /*TODO 
                                SMMTT_TYPE_2M_PAGES: begin  // 2M_PAGES
                                    // Verifica che i bit riservati siano zero
                                    if (mptl2_entry.info[43:32] != 0) begin
                                        next_state = ERROR;
                                        error_code = RESERVED_BITS_USED;  // I bit riservati non devono essere usati
                                    end else begin
                                        // Estrarre i permessi per ogni pagina da 2 MiB (16 permessi da 2 bit)
                                        // info[31:0] contiene i permessi
                                        permissions = 0;  // Inizializza i permessi

                                        // Ciclo per ogni pagina (16 pagine da 2 MiB)
                                        for (int i = 0; i < 16; i++) begin
                                            logic [1:0] page_perm = mptl2_entry.info[2*i+:2];  // Estrai i permessi per ciascuna pagina

                                            // Aggiungi i permessi per la pagina (esempio di codifica dei permessi)
                                            case (page_perm)
                                                2'b00: permissions[i*2+:2] = 2'b00;  // No access
                                                2'b01: permissions[i*2+:2] = 2'b01;  // Read/Execute allowed
                                                2'b10: permissions[i*2+:2] = 2'b10;  // Read/Write allowed
                                                2'b11: permissions[i*2+:2] = 2'b11;  // Read/Write/Execute allowed
                                                default: begin
                                                    next_state = ERROR;
                                                    error_code = INVALID_PERMISSIONS;  // Permessi non validi
                                                end
                                            endcase
                                        end

                                        // Una volta completato, finalizza l'entry TLB
                                        next_state = COMMIT;
                                        TLB_entry_o = {sdid, paddr_i, permissions};  // Finalizza l'entry nel TLB
                                    end
                                end
                                */
                                default: begin
                                    next_state = ERROR;
                                    error_code = UNDEFINED_MPTL2_TYPE;  // Tipo non definito
                                end
                            endcase
                        end
                    end                 

                    MPTL1_LOOKUP: begin
                    // Check reserved bits
                    if (mptl1_entry.reserved != 0) begin
                        next_state = ERROR;
                        error_code = RESERVED_BITS_USED;  
                    end else begin
                        // Extract PN0 from SPA
                        logic [3:0] page_index;
                        page_index = (paddr_i & SPA_PN0) >> 12; 

                        case (page_index) 
                            4'd0: permissions = mptl1_entry.perm_page_0;
                            4'd1: permissions = mptl1_entry.perm_page_1;
                            4'd2: permissions = mptl1_entry.perm_page_2;
                            4'd3: permissions = mptl1_entry.perm_page_3;
                            4'd4: permissions = mptl1_entry.perm_page_4;
                            4'd5: permissions = mptl1_entry.perm_page_5;
                            4'd6: permissions = mptl1_entry.perm_page_6;
                            4'd7: permissions = mptl1_entry.perm_page_7;
                            4'd8: permissions = mptl1_entry.perm_page_8;
                            4'd9: permissions = mptl1_entry.perm_page_9;
                            4'd10: permissions = mptl1_entry.perm_page_10;
                            4'd11: permissions = mptl1_entry.perm_page_11;
                            4'd12: permissions = mptl1_entry.perm_page_12;
                            4'd13: permissions = mptl1_entry.perm_page_13;
                            4'd14: permissions = mptl1_entry.perm_page_14;
                            4'd15: permissions = mptl1_entry.perm_page_15;
                            default: begin
                                next_state = ERROR;
                                error_code = INVALID_PAGE_INDEX;  
                            end
                        endcase
                        if (access_type_i == permissions) begin
                            next_state = COMMIT;
                            TLB_entry_o = {sdid, paddr_i, permissions};
                        end else begin
                            next_state = ERROR;
                            access_page_fault_o = 1;
                        end 
                    end
                end
                    endcase
                end
            end

            FLUSH: begin
                // Handle flush logic
                next_state = IDLE;
            end

            ERROR: begin
                //access_page_fault_o = 1;
                next_state = IDLE;
            end

            COMMIT: begin
                next_state = IDLE;
            end

            default: next_state = IDLE;

            if (flush_i) begin 
                next_state = FLUSH;
            end
        endcase
    end

// State Transition Logic
    always_ff @(posedge clk_i) begin
        if (!rst_ni) begin
            curr_state <= IDLE;
            curr_lookup_state <= MPTL3_LOOKUP;
        end else begin
            //case etc if (state = IDLE) begin 
            curr_state <= next_state;
            curr_lookup_state <= next_lookup_state;
            case (curr_state) begin 
                IDLE: begin
                    if(addr_valid_i) begin
                        paddr<=paddr_i; 
                end
            end
            endcase

        end
    end

endmodule