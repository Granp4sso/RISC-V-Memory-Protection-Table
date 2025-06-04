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

// Declare Control Bus
`define DECLARE_CTRL_BUS(bus_name)          \
                                            \
    logic       ``bus_name``_flush;         \
    logic       ``bus_name``_stall;         

// Declare Data Bus
`define DECLARE_DATA_BUS(bus_name, size)        \
                                                \
    logic [``size`` -1 : 0] ``bus_name``_data; \
    logic                   ``bus_name``_valid; \
    logic                   ``bus_name``_ready;     

// Declare Status Bus
`define DECLARE_STATUS_BUS(bus_name)            \
                                                \
    logic                   ``bus_name``_busy;    

// Declare Data Array
`define DECLARE_DATA_BUS_ARRAY(bus_name, size, DATA_WIDTH)   \
    logic                       [``size`` -1 : 0][DATA_WIDTH-1     : 0] ``bus_name``_data;     \
    logic                       [``size`` -1 : 0]                       ``bus_name``_valid;     \
    logic                       [``size`` -1 : 0]                       ``bus_name``_ready;    

// Assign to Data Array
`define ASSIGN_DATA_BUS_SCALAR_TO_ARRAY(dest, index, src) \
    assign ``dest``_data[``index``]    = ``src``_data ;    \
    assign ``dest``_valid[``index``]   = ``src``_valid ;   \
    assign ``src``_ready               = ``dest``_ready[``index``] ;   


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

//////////////////
//  Bus Ports   //
//////////////////

// Master Ports
`define DEFINE_MASTER_CTRL_PORT(port_name)  \
                                            \
    output logic       ``port_name``_flush, \
    output logic       ``port_name``_stall         

`define DEFINE_MASTER_STATUS_PORT(port_name)    \
                                                \
    output logic       ``port_name``_busy     

`define DEFINE_MASTER_DATA_PORT(port_name, size)        \
                                                        \
    output logic [``size`` -1 : 0] ``port_name``_data, \
    output logic                   ``port_name``_valid, \
    input  logic                   ``port_name``_ready     

// Slave Ports
`define DEFINE_SLAVE_CTRL_PORT(port_name)   \
                                            \
    input  logic       ``port_name``_flush, \
    input  logic       ``port_name``_stall        

`define DEFINE_SLAVE_STATUS_PORT(port_name)    \
                                               \
    input  logic       ``port_name``_busy      

`define DEFINE_SLAVE_DATA_PORT(port_name, size)         \
                                                        \
    input  logic [``size`` -1 : 0] ``port_name``_data, \
    input  logic                   ``port_name``_valid, \
    output logic                   ``port_name``_ready     


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