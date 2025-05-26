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

// Declare Valid/Ready Bus
`define DECLARE_DATA_BUS(bus_name, size)        \
                                                \
    logic [``size`` -1 : 0] ``bus_name``_rdata; \
    logic                   ``bus_name``_valid; \
    logic                   ``bus_name``_ready;     

// Declare Pipeline Bus
`define DECLARE_PIPELINE_BUS(pipe_name, size)   \
                                                \
    `DECLARE_CTRL_BUS(``pipe_name``_ctrl)       \
    `DECLARE_DATA_BUS(``pipe_name``_data)    

///////////////////////
//  Bus Assignment   //
///////////////////////

`define ASSIGN_CTRL_BUS(dest, src)              \
    assign ``dest``_flush     = ``src``_flush ; \
    assign ``dest``_stall     = ``src``_stall ; 

`define ASSIGN_DATA_BUS(dest, src)              \
    assign ``dest``_data    = ``src``_rdata ;   \
    assign ``dest``_valid   = ``src``_stall ;   \
    assign ``dest``_ready   = ``src``_ready ;   

`define ASSIGN_PIPELINE_BUS(dest, src)              \
    `ASSIGN_CTRL_BUS(``dest``_ctrl, ``src``_ctrl)   \
    `ASSIGN_DATA_BUS(``dest``_data, ``src``_data)    

//////////////////
//  Bus Ports   //
//////////////////

// Master Ports
`define DEFINE_MASTER_CTRL_PORT(port_name)  \
                                            \
    output logic       ``port_name``_flush, \
    output logic       ``port_name``_stall         

`define DEFINE_MASTER_DATA_PORT(port_name, size)        \
                                                        \
    output logic [``size`` -1 : 0] ``port_name``_rdata, \
    output logic                   ``port_name``_valid, \
    input  logic                   ``port_name``_ready     

`define DEFINE_MASTER_PIPELINE_PORT(pipe_name, size)    \
                                                        \
    `DEFINE_MASTER_CTRL_PORT(``pipe_name``_ctrl),       \
    `DEFINE_MASTER_DATA_PORT(``pipe_name``_data)    

// Slave Ports
`define DEFINE_SLAVE_CTRL_PORT(port_name)   \
                                            \
    input  logic       ``port_name``_flush, \
    input  logic       ``port_name``_stall         

`define DEFINE_SLAVE_DATA_PORT(port_name, size)         \
                                                        \
    input  logic [``size`` -1 : 0] ``port_name``_rdata, \
    input  logic                   ``port_name``_valid, \
    output logic                   ``port_name``_ready     

`define DEFINE_SLAVE_PIPELINE_PORT(pipe_name, size)     \
                                                        \
    `DEFINE_SLAVE_CTRL_PORT(``pipe_name``_ctrl),        \
    `DEFINE_SLAVE_DATA_PORT(``pipe_name``_data)    

////////////////
// Sink Ports //
////////////////

// These macros are meant to emulate a stub master or slave,
// never really doing anything. This way, we avoid to leave
// floating signals around.

// Master Ports
`define SINK_MASTER_CTRL_PORT(port_name)  \

`define SINK_MASTER_DATA_PORT(port_name)  \
    assign ``port_name``_ready = '0;     

`define SINK_MASTER_PIPELINE_PORT(pipe_name)        \
                                                    \
    `SINK_MASTER_CTRL_PORT(``pipe_name``_ctrl)      \
    `SINK_MASTER_DATA_PORT(``pipe_name``_data)    

// Slave Ports
`define SINK_SLAVE_CTRL_PORT(port_name) \
                                        \
    assign ``port_name``_flush = '0;    \
    assign ``port_name``_stall = '0;         

`define SINK_SLAVE_DATA_PORT(port_name)         \
                                                \
    assign ``port_name``_rdata = '0;            \
    assign ``port_name``_valid = '0;   

`define SINK_SLAVE_PIPELINE_PORT(pipe_name)         \
                                                    \
    `SINK_SLAVE_CTRL_PORT(``pipe_name``_ctrl)       \
    `SINK_SLAVE_DATA_PORT(``pipe_name``_data)    

//////////////////
// Port Mapping //
//////////////////

`define MAP_CTRL_PORT(unit_port, coming_bus)        \
                                                    \
    .``unit_port``_flush ( ``coming_bus``_flush ),  \
    .``unit_port``_flush ( ``coming_bus``_stall ), 

`define MAP_DATA_PORT(unit_port, coming_bus)        \
                                                    \
    .``unit_port``_rdata ( ``coming_bus``_rdata ),  \
    .``unit_port``_valid ( ``coming_bus``_valid ),  \
    .``unit_port``_ready ( ``coming_bus``_ready ), 

`define MAP_PIPELINE_PORT(unit_port, coming_bus)            \
                                                            \
    `MAP_CTRL_PORT(``unit_port``_ctrl, ``coming_bus``_ctrl) \
    `MAP_DATA_PORT(``unit_port``_data, ``coming_bus``_data) 

`endif // _PIPELINING_SVH__