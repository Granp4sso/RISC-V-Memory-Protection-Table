#ifndef VMEM_2P_H
#define VMEM_2P_H

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "Vmpt_top.h"

#include "verilated.h"
#include "verilated_vcd_c.h"

#define MEM_TYPE_DATA 			0

#define INST_PORT 	1
#define DATA_PORT	0
#define PORT_NUM	2

#define DATA_PORT_READ	0
#define DATA_PORT_WRITE 1

#define VMEM_DATA_FIRST_REQUEST 1
#define VMEM_DATA_B2B_REQUEST	2


struct vmem_cell_t{
	uint8_t cell; 
};

struct vmem_t{

	vmem_cell_t * mem;
	uint32_t mem_size;
	uint32_t mem_baddr;

	int mem_state;
	int mem_addr;
	int mem_op;
	int mem_strb;
	int mem_wdata;

	uint32_t delay;
	FILE * log;

};

void vmem_init(vmem_t * Memory, uint32_t size, uint32_t data_baddr, uint8_t log);
void vmem_protocol(vmem_t * Memory, Vmpt_top *tb);
void vmem_data_protocol(vmem_t * Memory, Vmpt_top *tb);
void vmem_free(vmem_t * Memory);

#endif 