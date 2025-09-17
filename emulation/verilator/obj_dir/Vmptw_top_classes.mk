# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vmptw_top.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vmptw_top \
	Vmptw_top___024root__DepSet_hb6d01b73__0 \
	Vmptw_top___024root__DepSet_hb6d01b73__1 \
	Vmptw_top___024root__DepSet_h00ac3ba4__0 \
	Vmptw_top___024root__DepSet_h00ac3ba4__1 \
	Vmptw_top_memory_read_stage__pi8__DepSet_h95d14dfa__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vmptw_top__ConstPool_0 \
	Vmptw_top___024root__Slow \
	Vmptw_top___024root__DepSet_hb6d01b73__0__Slow \
	Vmptw_top___024root__DepSet_h00ac3ba4__0__Slow \
	Vmptw_top___024unit__Slow \
	Vmptw_top___024unit__DepSet_h5af459fd__0__Slow \
	Vmptw_top_memory_read_stage__pi8__Slow \
	Vmptw_top_memory_read_stage__pi8__DepSet_h95d14dfa__0__Slow \
	Vmptw_top_memory_read_stage__pi8__DepSet_he1acea1d__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vmptw_top__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vmptw_top__Syms \
	Vmptw_top__Trace__0__Slow \
	Vmptw_top__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
