#include "vmem.h"
#include "logger.h"

uint32_t log2u(uint8_t a){
	switch(a){
		case 1: return 0; break;
		case 2: return 1; break;
		case 4: return 2; break;
		case 8: return 3; break;
		default: return 0; break;
	}
}

void vmem_init(vmem_t * Memory, uint32_t size, uint32_t data_baddr, uint8_t log){

	printf("[VMemory\t] Initializing Memory - Creating memory of size %08d Bytes\n", size);

	Memory->mem = (vmem_cell_t *) malloc(sizeof(vmem_cell_t)*size);
	Memory->mem_size = size; 
	Memory->mem_baddr = data_baddr;

	printf("[VMemory\t] Initializing Memory - Port 0 (Data)\n"); 

	for( int i = 0; i < Memory->mem_size; i++ ) {
		Memory->mem[i].cell = 0x00;
	}

	Memory->mem_state = VMEM_DATA_FIRST_REQUEST;
	Memory->mem_addr = 0;
	Memory->mem_op = 0;
	Memory->mem_strb = 0;

	// Enable memory logging
	if(log){
		printf("[VMemory\t] opening logfile\n");

		Memory->log = fopen("logfile","w+");
		if(!Memory->log){
			printf("[VMemory\t] ERROR: logfile not opened\n");
			exit(-1);
		}
		printf("[VMemory\t] logfile prepared\n");
	}
	else Memory->log = NULL;

}




#ifdef ARCH_rv32
	void vmem_protocol(vmem_t * Memory, Vmpt_top *tb){
		if(tb->m_mem_addr - Memory->mem_baddr >= Memory->mem_size && tb->m_mem_req){
			printf("[VMemory\t] ERROR: Requesting out of range memory location <0x%08x> on instruction port\n", tb->m_mem_addr);
		}
		else vmem_data_protocol(Memory, tb); 
	}
#elif defined(ARCH_rv64)
	void vmem_protocol(vmem_t * Memory, Vmpt_top *tb){
		if(tb->m_mem_addr - Memory->mem_baddr >= Memory->mem_size && tb->m_mem_req){
			printf("[VMemory\t] ERROR: Requesting out of range memory location <0x%08lx> on instruction port\n", tb->m_mem_addr);
		}
		else vmem_data_protocol(Memory, tb); 
	}

#endif



// TODO
#ifdef ARCH_rv32
	void vmem_data_protocol(vmem_t *Memory, Vmpt_top *tb) {
		switch (Memory->mem_state) {
			case VMEM_DATA_FIRST_REQUEST: {
				if (tb->m_mem_req) {
					Memory->mem_addr = tb->m_mem_addr - Memory->mem_baddr;
					Memory->mem_strb = tb->m_mem_be;
					Memory->mem_op = tb->m_mem_we;
					Memory->mem_wdata = tb->m_mem_wdata;
					Memory->mem_state = VMEM_DATA_B2B_REQUEST;
				}
				tb->m_mem_valid = 0;
				break;
			}
			case VMEM_DATA_B2B_REQUEST: {
				uint32_t req_addr = Memory->mem_addr & 0xFFFFFFFC;
				uint32_t temp = Memory->mem[req_addr].cell |
							(Memory->mem[req_addr + 1].cell << 8) |
							(Memory->mem[req_addr + 2].cell << 16) |
							(Memory->mem[req_addr + 3].cell << 24);

				if (Memory->mem_op == DATA_PORT_READ) {
					tb->m_mem_rdata = temp;
					if (Memory->log)
						fprintf(Memory->log, "\n\t\t      [VMemory\t] LOAD: Data\t\t0x%08x - Address 0x%08x - Byte Enable 0x%02x",
								tb->m_mem_rdata, req_addr + Memory->mem_baddr, Memory->mem_strb);
				}

				tb->m_mem_valid = 1;
				if (tb->m_mem_req) {
					Memory->mem_addr = tb->m_mem_addr - Memory->mem_baddr;
					Memory->mem_strb = tb->m_mem_be;
					Memory->mem_op = tb->m_mem_we;
					Memory->mem_wdata = tb->m_mem_wdata;
					Memory->mem_state = VMEM_DATA_B2B_REQUEST;
				} else {
					Memory->mem_state = VMEM_DATA_FIRST_REQUEST;
				}
				break;
			}
		}
	}

#elif defined(ARCH_rv64)

	void vmem_data_protocol(vmem_t * Memory, Vmpt_top *tb){

	// The protocol here is for loads and store. The memory follows a unified address space for both instructions and data, so be careful ;)
	switch(Memory->mem_state){
		case VMEM_DATA_FIRST_REQUEST: {
			if(tb->m_mem_req){
				Memory->mem_addr = tb->m_mem_addr - Memory->mem_baddr;
				Memory->mem_strb = tb->m_mem_be;
				Memory->mem_op = tb->m_mem_we;
				Memory->mem_wdata = tb->m_mem_wdata;
				Memory->mem_state = VMEM_DATA_B2B_REQUEST;
			}
			tb->m_mem_valid = 0;
		break;
		}
		case VMEM_DATA_B2B_REQUEST: {

				uint64_t req_addr = Memory->mem_addr;

				if (Memory->mem_op == DATA_PORT_READ) {
					// Perform a LOAD (i.e. Read transaction)
					uint64_t temp[8];

					req_addr = (req_addr & 0xfffffff8);

					temp[0] = (uint64_t) Memory->mem[req_addr + 0].cell;
					temp[1] = (uint64_t) Memory->mem[req_addr + 1].cell << 8;
					temp[2] = (uint64_t) Memory->mem[req_addr + 2].cell << 16;
					temp[3] = (uint64_t) Memory->mem[req_addr + 3].cell << 24;
					temp[4] = (uint64_t) Memory->mem[req_addr + 4].cell << 32;
					temp[5] = (uint64_t) Memory->mem[req_addr + 5].cell << 40;
					temp[6] = (uint64_t) Memory->mem[req_addr + 6].cell << 48;
					temp[7] = (uint64_t) Memory->mem[req_addr + 7].cell << 56;

					switch (Memory->mem_strb) {
						case 0x01: case 0x02: case 0x04: case 0x08:
						case 0x10: case 0x20: case 0x40: case 0x80: {
							req_addr += log2u(Memory->mem_strb);
							tb->m_mem_rdata = temp[log2u(Memory->mem_strb)];
							if (Memory->log)
								fprintf(Memory->log, "\n\t\t      [VMemory\t] LOAD: Data\t\t0x%016lx - Address 0x%08lx - Byte Enable 0x%02x",
										temp[log2u(Memory->mem_strb)], req_addr + Memory->mem_baddr, Memory->mem_strb);
							break;
						}
						case 0x03: case 0x0C: case 0x30: case 0xC0: {
							req_addr += log2u((Memory->mem_strb >> 2) + 1);
							tb->m_mem_rdata = temp[log2u((Memory->mem_strb >> 2) + 1) + 0] |
														temp[log2u((Memory->mem_strb >> 2) + 1) + 1];
							if (Memory->log)
								fprintf(Memory->log, "\n\t\t      [VMemory\t] LOAD: Data\t\t0x%016lx - Address 0x%08lx - Byte Enable 0x%02x",
										tb->m_mem_rdata, req_addr + Memory->mem_baddr, Memory->mem_strb);
							break;
						}
						case 0x0F: case 0xF0: { 
							req_addr += log2u((Memory->mem_strb >> 4) + 1);
							tb->m_mem_rdata = temp[log2u((Memory->mem_strb >> 4) + 1) + 0] |
														temp[log2u((Memory->mem_strb >> 4) + 1) + 1] |
														temp[log2u((Memory->mem_strb >> 4) + 1) + 2] |
														temp[log2u((Memory->mem_strb >> 4) + 1) + 3];
							if (Memory->log)
								fprintf(Memory->log, "\n\t\t      [VMemory\t] LOAD: Data\t\t0x%016lx - Address 0x%08lx - Byte Enable 0x%02x",
										tb->m_mem_rdata, req_addr + Memory->mem_baddr, Memory->mem_strb);
							break;
						}
						case 0xFF: {
							tb->m_mem_rdata = temp[7] | temp[6] | temp[5] | temp[4] |
														temp[3] | temp[2] | temp[1] | temp[0];
							if (Memory->log)
								fprintf(Memory->log, "\n\t\t      [VMemory\t] LOAD: Data\t\t0x%016lx - Address 0x%08lx - Byte Enable 0x%02x",
										tb->m_mem_rdata, req_addr + Memory->mem_baddr, Memory->mem_strb);
							break;
						}
					}
			} 
			tb->m_mem_valid = 1;
					
			// If a B2B transaction is required
			if(tb->m_mem_req){
				Memory->mem_addr = tb->m_mem_addr - Memory->mem_baddr;
				Memory->mem_strb = tb->m_mem_be;
				Memory->mem_op = tb->m_mem_we;
				Memory->mem_wdata = tb->m_mem_wdata;
				Memory->mem_state = VMEM_DATA_B2B_REQUEST;
			}
			else Memory->mem_state = VMEM_DATA_FIRST_REQUEST;
		break;
	}
}
}
#endif

void vmem_free(vmem_t * Memory){
	if(Memory->log) fclose(Memory->log);
	free(Memory->mem);
}
