// Author: Stefano Mercogliano  <stefano.mercogliano@unina.it>
// Description:
//      Utility variables and macros for Pipelining protocols

`ifndef _PIPELINING_SVH__
`define _PIPELINING_SVH__

////////////////////////////////////////
//    __  __   _   ___ ___  ___       //
//   |  \/  | /_\ / __| _ \/ _ \ ___  //
//   | |\/| |/ _ \ (__|   / (_) (_-<  //
//   |_|  |_/_/ \_\___|_|_\\___//__/  //
//                                    //
////////////////////////////////////////

////////////////////////
//  Bus Declaration   //
////////////////////////

// Declare Data Bus
`define DECLARE_DATA_BUS(bus_name, data_width)          \
                                                        \
    logic [``data_width`` -1 : 0]   ``bus_name``_data;  \
    logic                           ``bus_name``_valid; \
    logic                           ``bus_name``_ready;   

// Declare Data Array
`define DECLARE_DATA_BUS_ARRAY(bus_name, data_width, size)   \
    logic                       [data_width-1     : 0] ``bus_name``_data    [``size`` -1 : 0];     \
    logic                                              ``bus_name``_valid   [``size`` -1 : 0];     \
    logic                                              ``bus_name``_ready   [``size`` -1 : 0];    

// Declare Control Bus
`define DECLARE_CTRL_BUS(bus_name, flush_width)         \
                                                        \
    logic [``flush_width`` -1 : 0]  ``bus_name``_flush; \
    logic                           ``bus_name``_stall;     

`define DECLARE_CTRL_BUS_ARRAY(bus_name, flush_width, size)         \
                                                        \
    logic [``flush_width`` -1 : 0]  ``bus_name``_flush  [``size`` -1 : 0]; \
    logic                           ``bus_name``_stall  [``size`` -1 : 0];     

// Declare Status Bus
`define DECLARE_STATUS_BUS(bus_name, flush_width)            \
                                                \
    logic                           ``bus_name``_busy;  \
    logic [``flush_width`` -1 : 0]  ``bus_name``_flushed;  \
    logic                           ``bus_name``_stalled;  \

`define DECLARE_STATUS_BUS_ARRAY(bus_name, flush_width, size)            \
                                                \
    logic                           ``bus_name``_busy       [``size`` -1 : 0];  \
    logic [``flush_width`` -1 : 0]  ``bus_name``_flushed    [``size`` -1 : 0];  \
    logic                           ``bus_name``_stalled    [``size`` -1 : 0];  \

///////////////////////
//  Bus Assignment   //
///////////////////////

`define ASSIGN_CTRL_BUS(dest, src)              \
    assign ``dest``_flush     = ``src``_flush ; \
    assign ``dest``_stall     = ``src``_stall ; 

`define ASSIGN_DATA_BUS(dest, src)              \
    assign ``dest``_data    = ``src``_data ;    \
    assign ``dest``_valid   = ``src``_valid ;   \
    assign ``src``_ready    = ``dest``_ready ;   

`define ASSIGN_STATUS_BUS(dest, src)            \
    assign ``dest``_busy     = ``src``_busy ; 


// Assign to Data Array
`define ASSIGN_DATA_BUS_SCALAR_TO_ARRAY(dest, index, src) \
    assign ``dest``_data[``index``]    = ``src``_data ;    \
    assign ``dest``_valid[``index``]   = ``src``_valid ;   \
    assign ``src``_ready               = ``dest``_ready[``index``] ;   

`define ASSIGN_DATA_BUS_ARRAY_TO_SCALAR(dest, index, src) \
    assign ``dest``_data            = ``src``_data[``index``] ;    \
    assign ``dest``_valid           = ``src``_valid[``index``] ;   \
    assign ``src``_ready[``index``] = ``dest``_ready ;   

`define ASSIGN_DATA_BUS_ARRAY_TO_ARRAY(dest, index_dest, src, index_src) \
    assign ``dest``_data    [``index_dest``] = ``src``_data     [``index_src``] ;    \
    assign ``dest``_valid   [``index_dest``] = ``src``_valid    [``index_src``] ;   \
    assign ``src``_ready    [``index_src``] = ``dest``_ready   [``index_dest``];   

// Assign to Zero

`define SINK_DATA_BUS() \
    assign ``src``_data    = '0 ;    \
    assign ``src``_valid   = '0 ;    \
    assign ``src``_ready   = '0 ;   


//////////////////
//  Bus Ports   //
//////////////////

// Master Ports
`define DEFINE_MASTER_CTRL_PORT(port_name, flush_width)              \
                                                                    \
    output logic [``flush_width`` -1 : 0]    ``port_name``_flush,    \
    output logic                            ``port_name``_stall         

`define DEFINE_MASTER_STATUS_PORT(port_name, flush_width)    \
                                                                \
    output logic                           ``port_name``_busy,  \
    output logic [``flush_width`` -1 : 0]  ``port_name``_flushed,  \
    output logic                           ``port_name``_stalled   \

`define DEFINE_MASTER_DATA_PORT(port_name, data_width)        \
                                                        \
    output logic [``data_width`` -1 : 0] ``port_name``_data, \
    output logic                   ``port_name``_valid, \
    input  logic                   ``port_name``_ready     

`define DEFINE_MASTER_CTRL_PORT_ARRAY(port_name, data_width, size)        \
                                                                                    \
    output logic [``data_width`` -1 : 0]    ``port_name``_flush [``size`` -1 : 0],  \
    output logic                            ``port_name``_stall [``size`` -1 : 0]         

`define DEFINE_MASTER_DATA_PORT_ARRAY(port_name, data_width, size)   \
    output logic [``data_width``-1     : 0] ``port_name``_data  [``size`` -1 : 0],       \
    output logic                            ``port_name``_valid [``size`` -1 : 0],       \
    input  logic                            ``port_name``_ready [``size`` -1 : 0]

// Slave Ports
`define DEFINE_SLAVE_CTRL_PORT(port_name, flush_width)               \
                                                                    \
    input  logic [``flush_width`` -1 : 0]   ``port_name``_flush,    \
    input  logic                            ``port_name``_stall        

`define DEFINE_SLAVE_STATUS_PORT(port_name, flush_width)    \
                                               \
    input  logic                           ``port_name``_busy,  \
    input  logic [``flush_width`` -1 : 0]  ``port_name``_flushed,  \
    input  logic                           ``port_name``_stalled  \

`define DEFINE_SLAVE_DATA_PORT(port_name, data_width)         \
                                                        \
    input  logic [``data_width`` -1 : 0]    ``port_name``_data, \
    input  logic                            ``port_name``_valid, \
    output logic                            ``port_name``_ready  

`define DEFINE_SLAVE_DATA_PORT_ARRAY(port_name, data_width, size)   \
    input  logic [``data_width``-1     : 0] ``port_name``_data  [``size`` -1 : 0],       \
    input  logic                            ``port_name``_valid [``size`` -1 : 0],       \
    output logic                            ``port_name``_ready [``size`` -1 : 0]       

`define DEFINE_SLAVE_STATUS_PORT_ARRAY(port_name, flush_width, size)    \
                                               \
    input  logic                           ``port_name``_busy    [``size`` -1 : 0],  \
    input  logic [``flush_width`` -1 : 0]  ``port_name``_flushed [``size`` -1 : 0],  \
    input  logic                           ``port_name``_stalled [``size`` -1 : 0]   \


//////////////////
// Port Mapping //
//////////////////

`define MAP_CTRL_PORT(unit_port, coming_bus)        \
                                                    \
    .``unit_port``_flush ( ``coming_bus``_flush ),  \
    .``unit_port``_stall ( ``coming_bus``_stall ) 

`define MAP_STATUS_PORT(unit_port, coming_bus)      \
                                                    \
    .``unit_port``_busy ( ``coming_bus``_busy )     \

`define MAP_DATA_PORT(unit_port, coming_bus)        \
                                                    \
    .``unit_port``_data ( ``coming_bus``_data ),    \
    .``unit_port``_valid ( ``coming_bus``_valid ),  \
    .``unit_port``_ready ( ``coming_bus``_ready ) 

`define MAP_DATA_INDEX_PORT(unit_port, coming_bus, index)        \
                                                    \
    .``unit_port``_data ( ``coming_bus``_data[``index``] ),    \
    .``unit_port``_valid ( ``coming_bus``_valid[``index``] ),  \
    .``unit_port``_ready ( ``coming_bus``_ready[``index``] ) 


///////////////////
// Concatenation //
///////////////////

// Slaves
`define CONCAT_SLAVE_DATA_ARRAY_2(array_name, bus_name_1, bus_name_0) \
    `ASSIGN_DATA_BUS_ARRAY_TO_SCALAR(``bus_name_0``, 0, ``array_name``); \
    `ASSIGN_DATA_BUS_ARRAY_TO_SCALAR(``bus_name_1``, 1, ``array_name``); 

`define CONCAT_SLAVE_DATA_ARRAY_3(array_name, bus_name_2, bus_name_1, bus_name_0) \
    `ASSIGN_DATA_BUS_ARRAY_TO_SCALAR(``bus_name_0``, 0, ``array_name``); \
    `ASSIGN_DATA_BUS_ARRAY_TO_SCALAR(``bus_name_1``, 1, ``array_name``); \
    `ASSIGN_DATA_BUS_ARRAY_TO_SCALAR(``bus_name_2``, 2, ``array_name``);

`define CONCAT_SLAVE_DATA_ARRAY_4(array_name, bus_name_3, bus_name_2, bus_name_1, bus_name_0) \
    `ASSIGN_DATA_BUS_ARRAY_TO_SCALAR(``bus_name_0``, 0, ``array_name``); \
    `ASSIGN_DATA_BUS_ARRAY_TO_SCALAR(``bus_name_1``, 1, ``array_name``); \
    `ASSIGN_DATA_BUS_ARRAY_TO_SCALAR(``bus_name_2``, 2, ``array_name``); \
    `ASSIGN_DATA_BUS_ARRAY_TO_SCALAR(``bus_name_3``, 3, ``array_name``);

`define CONCAT_SLAVE_DATA_ARRAY_5(array_name, bus_name_4, bus_name_3, bus_name_2, bus_name_1, bus_name_0) \
    `ASSIGN_DATA_BUS_ARRAY_TO_SCALAR(``bus_name_0``, 0, ``array_name``); \
    `ASSIGN_DATA_BUS_ARRAY_TO_SCALAR(``bus_name_1``, 1, ``array_name``); \
    `ASSIGN_DATA_BUS_ARRAY_TO_SCALAR(``bus_name_2``, 2, ``array_name``); \
    `ASSIGN_DATA_BUS_ARRAY_TO_SCALAR(``bus_name_3``, 3, ``array_name``); \
    `ASSIGN_DATA_BUS_ARRAY_TO_SCALAR(``bus_name_4``, 4, ``array_name``);

`define CONCAT_SLAVE_DATA_ARRAY_6(array_name, bus_name_5, bus_name_4, bus_name_3, bus_name_2, bus_name_1, bus_name_0) \
    `ASSIGN_DATA_BUS_ARRAY_TO_SCALAR(``bus_name_0``, 0, ``array_name``); \
    `ASSIGN_DATA_BUS_ARRAY_TO_SCALAR(``bus_name_1``, 1, ``array_name``); \
    `ASSIGN_DATA_BUS_ARRAY_TO_SCALAR(``bus_name_2``, 2, ``array_name``); \
    `ASSIGN_DATA_BUS_ARRAY_TO_SCALAR(``bus_name_3``, 3, ``array_name``); \
    `ASSIGN_DATA_BUS_ARRAY_TO_SCALAR(``bus_name_4``, 4, ``array_name``); \
    `ASSIGN_DATA_BUS_ARRAY_TO_SCALAR(``bus_name_5``, 5, ``array_name``);

// Masters
`define CONCAT_MASTER_DATA_ARRAY_2(array_name, bus_name_1, bus_name_0) \
    `ASSIGN_DATA_BUS_SCALAR_TO_ARRAY(``array_name``, 0, ``bus_name_0``); \
    `ASSIGN_DATA_BUS_SCALAR_TO_ARRAY(``array_name``, 1, ``bus_name_1``); 

`define CONCAT_MASTER_DATA_ARRAY_3(array_name, bus_name_2, bus_name_1, bus_name_0) \
    `ASSIGN_DATA_BUS_SCALAR_TO_ARRAY(``array_name``, 0, ``bus_name_0``); \
    `ASSIGN_DATA_BUS_SCALAR_TO_ARRAY(``array_name``, 1, ``bus_name_1``); \
    `ASSIGN_DATA_BUS_SCALAR_TO_ARRAY(``array_name``, 2, ``bus_name_2``);

`define CONCAT_MASTER_DATA_ARRAY_4(array_name, bus_name_3, bus_name_2, bus_name_1, bus_name_0) \
    `ASSIGN_DATA_BUS_SCALAR_TO_ARRAY(``array_name``, 0, ``bus_name_0``); \
    `ASSIGN_DATA_BUS_SCALAR_TO_ARRAY(``array_name``, 1, ``bus_name_1``); \
    `ASSIGN_DATA_BUS_SCALAR_TO_ARRAY(``array_name``, 2, ``bus_name_2``); \
    `ASSIGN_DATA_BUS_SCALAR_TO_ARRAY(``array_name``, 3, ``bus_name_3``);

`define CONCAT_MASTER_DATA_ARRAY_5(array_name, bus_name_4, bus_name_3, bus_name_2, bus_name_1, bus_name_0) \
    `ASSIGN_DATA_BUS_SCALAR_TO_ARRAY(``array_name``, 0, ``bus_name_0``); \
    `ASSIGN_DATA_BUS_SCALAR_TO_ARRAY(``array_name``, 1, ``bus_name_1``); \
    `ASSIGN_DATA_BUS_SCALAR_TO_ARRAY(``array_name``, 2, ``bus_name_2``); \
    `ASSIGN_DATA_BUS_SCALAR_TO_ARRAY(``array_name``, 3, ``bus_name_3``); \
    `ASSIGN_DATA_BUS_SCALAR_TO_ARRAY(``array_name``, 4, ``bus_name_4``);

`define CONCAT_MASTER_DATA_ARRAY_6(array_name, bus_name_5, bus_name_4, bus_name_3, bus_name_2, bus_name_1, bus_name_0) \
    `ASSIGN_DATA_BUS_SCALAR_TO_ARRAY(``array_name``, 0, ``bus_name_0``); \
    `ASSIGN_DATA_BUS_SCALAR_TO_ARRAY(``array_name``, 1, ``bus_name_1``); \
    `ASSIGN_DATA_BUS_SCALAR_TO_ARRAY(``array_name``, 2, ``bus_name_2``); \
    `ASSIGN_DATA_BUS_SCALAR_TO_ARRAY(``array_name``, 3, ``bus_name_3``); \
    `ASSIGN_DATA_BUS_SCALAR_TO_ARRAY(``array_name``, 4, ``bus_name_4``); \
    `ASSIGN_DATA_BUS_SCALAR_TO_ARRAY(``array_name``, 5, ``bus_name_5``);


//////////////////////////
// Sink Buses and Ports //
//////////////////////////

// These macros are meant to emulate a stub master or slave,
// never really doing anything. This way, we avoid to leave
// floating signals around.

// Master Ports
`define SINK_MASTER_CTRL_BUS(port_name)  \
`define SINK_MASTER_STATUS_BUS(port_name)  \

`define SINK_MASTER_DATA_BUS(port_name)  \
    assign ``port_name``_ready = '0;     

`define SINK_MASTER_CTRL_PORT(unit_port)    \
    .``unit_port``_flush ( ),            \
    .``unit_port``_stall ( )

`define SINK_MASTER_STATUS_PORT(unit_port)    \
    .``unit_port``_busy ( )            \

`define SINK_MASTER_DATA_PORT(unit_port)    \
    .``unit_port``_data ( ),            \
    .``unit_port``_valid ( ),           \
    .``unit_port``_ready ( '0 )

// Slave Ports
`define SINK_SLAVE_CTRL_BUS(port_name) \
                                        \
    assign ``port_name``_flush = '0;    \
    assign ``port_name``_stall = '0;         

`define SINK_SLAVE_DATA_BUS(port_name)         \
                                                \
    assign ``port_name``_data = '0;            \
    assign ``port_name``_valid = '0;   

`define SINK_SLAVE_CTRL_PORT(unit_port)     \
    .``unit_port``_flush ( '0 ),               \
    .``unit_port``_stall ( '0 )

`define SINK_SLAVE_DATA_PORT(unit_port)    \
    .``unit_port``_data ( '0 ),            \
    .``unit_port``_valid ( '0 ),            \
    .``unit_port``_ready ( )

`endif // _PIPELINING_SVH__