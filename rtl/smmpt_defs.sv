package smmpt_defs;

// Parametrizzazione in base all'architettura
parameter int XLEN = 64; // Cambia a 32 per un'architettura a 32 bit

// Macro per maschere
localparam logic [31:0] MTTP32_MODE = 32'hC0000000;
localparam logic [31:0] MTTP32_SDID = 32'h3F000000;
localparam logic [31:0] MTTP32_PPN  = 32'h003FFFFF;

localparam logic [63:0] MTTP64_MODE = 64'hF000000000000000;
localparam logic [63:0] MTTP64_SDID = 64'h0FC0000000000000;
localparam logic [63:0] MTTP64_PPN  = 64'h00000FFFFFFFFFFF;

localparam logic [XLEN-1:0] MTTP_MODE = (XLEN == 32) ? MTTP32_MODE : MTTP64_MODE;
localparam logic [XLEN-1:0] MTTP_SDID = (XLEN == 32) ? MTTP32_SDID : MTTP64_SDID;
localparam logic [XLEN-1:0] MTTP_PPN  = (XLEN == 32) ? MTTP32_PPN  : MTTP64_PPN;

typedef enum logic [1:0] {
    NO_ERROR           = 2'b00, // Nessun errore
    RESERVED_BITS_USED = 2'b01, // Uso di bit riservati
    NOT_VALID_MPTL3E   = 2'b10, // Entry MPTL3 non valida
    NOT_VALID_ADDR     = 2'b11  // Indirizzo in ingresso maggiore del massimo indirizzo utilizzabile per la corrente modalità
} error_t;

// Modalità SMMTT
typedef enum logic [2:0] {
    SMMTT_BARE = 3'b000,
    SMMTT_34   = 3'b001, // Solo per 32 bit
    SMMTT_46   = 3'b010, // Solo per 64 bit
    SMMTT_56   = 3'b011, // Solo per 64 bit
    //SMMTT_MAX  = 3'b100
} smmtt_mode_t;

// Maschere per le tabelle (L1, L2, ecc.)
generate
    if (XLEN == 32) begin
        localparam logic [31:0] SPA_PN0     = 32'h00000700;
        localparam logic [31:0] SPA_PN1     = 32'h001FF800;
        localparam logic [31:0] SPA_XM_OFFS = 32'h001C0000;
        localparam logic [31:0] SPA_PN2     = 32'h3FE00000;
    end else begin
        localparam logic [63:0] SPA_PN0     = 64'h0000000000F000;
        localparam logic [63:0] SPA_PN1     = 64'h00000001FF0000;
        localparam logic [63:0] SPA_XM_OFFS = 64'h00000001E00000;
        localparam logic [63:0] SPA_PN2     = 64'h003FFFFE000000;
        localparam logic [63:0] SPA_PN3     = 64'hFFC00000000000;
    end
endgenerate

// Tipi di voci (entry)
typedef enum logic [2:0] {
    SMMTT_TYPE_1G_DISALLOW  = 3'b000,
    SMMTT_TYPE_1G_ALLOW_RX  = 3'b001,
    SMMTT_TYPE_1G_ALLOW_RW  = 3'b010,
    SMMTT_TYPE_1G_ALLOW_RWX = 3'b011,
    SMMTT_TYPE_MTT_L1_DIR   = 3'b100,
    SMMTT_TYPE_4M_PAGES     = 3'b101, // Solo per 32 bit
    SMMTT_TYPE_2M_PAGES     = 3'b110  // Solo per 64 bit
} smmtt_type_t;

// Permessi
typedef enum logic [1:0] {
    SMMTT_PERMS_XM_PAGES_DISALLOWED = 2'b00,
    SMMTT_PERMS_XM_PAGES_ALLOW_RX   = 2'b01,
    SMMTT_PERMS_XM_PAGES_ALLOW_RW   = 2'b10,
    SMMTT_PERMS_XM_PAGES_ALLOW_RWX  = 2'b11
} smmtt_perms_xm_pages_t;

typedef enum logic [1:0] {
    SMMTT_PERMS_MTT_L1_DIR_DISALLOWED = 2'b00,
    SMMTT_PERMS_MTT_L1_DIR_ALLOW_RX   = 2'b01,
    SMMTT_PERMS_MTT_L1_DIR_ALLOW_RW   = 2'b10,
    SMMTT_PERMS_MTT_L1_DIR_ALLOW_RWX  = 2'b11
} smmtt_perms_mtt_l1_dir_t;

// Maschere e campi per i permessi
localparam logic [1:0] MTT_PERMS_MASK = 2'b11;
localparam int MTT_PERMS_BITS = 2;

function logic [1:0] MTT_PERM_FIELD(input int idx);
    return MTT_PERMS_MASK << (MTT_PERMS_BITS * idx);
endfunction

// Definizione delle voci della tabella (L1, L2, ecc.)
generate
    if (XLEN == 32) begin
        typedef struct packed {
            logic [21:0] info;
            logic [2:0] type;
            logic [6:0] reserved;
        } mttl2_entry_t;
        /*
        typedef struct packed {
            logic [1:0] perm_0;              // Permission bits for page 0 (2 bits)
            logic [5:0] reserved_0;          // Reserved bits for page 0 (6 bits)
            logic [1:0] perm_1;              // Permission bits for page 1 (2 bits)
            logic [5:0] reserved_1;          // Reserved bits for page 1 (6 bits)
            logic [1:0] perm_2;              // Permission bits for page 2 (2 bits)
            logic [5:0] reserved_2;          // Reserved bits for page 2 (6 bits)
            logic [1:0] perm_3;              // Permission bits for page 3 (2 bits)
            logic [5:0] reserved_3;          // Reserved bits for page 3 (6 bits)
            logic [15:0] reserved;           // 16 bits reserved for future use

        } mttl1_entry_t;
        */

        typedef logic [31:0] mttl1_entry_t;

        typedef union packed {
            logic [31:0] raw;
            mttl2_entry_t mttl2;
            mttl1_entry_t mttl1;
        } smmtt_mtt_entry_t;
    end else begin
        typedef struct packed {
            logic [43:0] mttl2_ppn;
            logic        valid;
            logic [19:0] reserved;
        } mttl3_entry_t;

        typedef struct packed {
            logic [43:0] info;
            logic [2:0]  type;
            logic [16:0] reserved;
        } mttl2_entry_t;

    /*
        typedef struct packed {
            logic [1:0] perm_0;      // Permission bits for page 0
            logic [5:0] reserved_0;  // Reserved bits for page 0
            logic [1:0] perm_1;      // Permission bits for page 1
            logic [5:0] reserved_1;  // Reserved bits for page 1
            logic [1:0] perm_2;      // Permission bits for page 2
            logic [5:0] reserved_2;  // Reserved bits for page 2
            logic [1:0] perm_3;      // Permission bits for page 3
            logic [5:0] reserved_3;  // Reserved bits for page 3
            logic [1:0] perm_4;      // Permission bits for page 4
            logic [5:0] reserved_4;  // Reserved bits for page 4
            logic [1:0] perm_5;      // Permission bits for page 5
            logic [5:0] reserved_5;  // Reserved bits for page 5
            logic [1:0] perm_6;      // Permission bits for page 6
            logic [5:0] reserved_6;  // Reserved bits for page 6
            logic [1:0] perm_7;      // Permission bits for page 7
            logic [5:0] reserved_7;  // Reserved bits for page 7
            logic [31:0] reserved; // 32 bits reserved for future use
        } mttl1_entry_t;
    */


        typedef logic [63:0] mttl1_entry_t;

        typedef union packed {
            logic [63:0] raw;
            mttl3_entry_t mttl3;
            mttl2_entry_t mttl2;
            mttl1_entry_t mttl1;
        } smmtt_mtt_entry_t;
    end
endgenerate

endpackage;
