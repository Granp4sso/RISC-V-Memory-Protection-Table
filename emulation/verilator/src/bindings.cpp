#include <pybind11/pybind11.h>
#include "sim.hpp"

namespace py = pybind11;

PYBIND11_MODULE(sim_bindings, m) {
    py::class_<uut_t>(m, "UUT")
        .def(py::init<>())  // Default constructor (assumes all fields manually set)
        .def("init", [](uut_t& self, const std::string& path) {
            uut_init(&self, path.c_str());
        })
        .def("cycle", &uut_cycle)
        .def("tick", &uut_tick)
        .def("eval", &uut_eval)
        .def("half_eval", &uut_half_eval)
        .def("destroy", &uut_destroy)

        .def_property("clkcnt", &uut_t::get_clkcnt, &uut_t::set_clkcnt)

        // scalar ports
        .def("get_access_type_i", &uut_t::get_access_type_i)
        .def("set_access_type_i", &uut_t::set_access_type_i)

        .def("get_flush_all_i", &uut_t::get_flush_all_i)
        .def("set_flush_all_i", &uut_t::set_flush_all_i)

        .def("get_mmpt_reg_i", &uut_t::get_mmpt_reg_i)
        .def("set_mmpt_reg_i", &uut_t::set_mmpt_reg_i)

        .def("get_mptw_ready_o", &uut_t::get_mptw_ready_o)
        .def("get_mptw_result_valid_o", &uut_t::get_mptw_result_valid_o)

        .def("get_mptw_transaction_valid_i", &uut_t::get_mptw_transaction_valid_i)
        .def("set_mptw_transaction_valid_i", &uut_t::set_mptw_transaction_valid_i)

        .def("get_plb_master_mem_addr", &uut_t::get_plb_master_mem_addr)
        .def("set_plb_master_mem_addr", &uut_t::set_plb_master_mem_addr)

        .def("get_plb_master_mem_gnt", &uut_t::get_plb_master_mem_gnt)
        .def("set_plb_master_mem_gnt", &uut_t::set_plb_master_mem_gnt)

        .def("get_plb_master_mem_req", &uut_t::get_plb_master_mem_req)
        .def("set_plb_master_mem_req", &uut_t::set_plb_master_mem_req)

        .def("get_plb_master_mem_rdata", &uut_t::get_plb_master_mem_rdata)
        .def("set_plb_master_mem_rdata", &uut_t::set_plb_master_mem_rdata)

        .def("get_plb_master_mem_valid", &uut_t::get_plb_master_mem_valid)
        .def("set_plb_master_mem_valid", &uut_t::set_plb_master_mem_valid)

        .def("get_rst_ni", &uut_t::get_rst_ni)
        .def("set_rst_ni", &uut_t::set_rst_ni)

        .def("get_spa_i", &uut_t::get_spa_i)
        .def("set_spa_i", &uut_t::set_spa_i)

        .def("get_speculative_i", &uut_t::get_speculative_i)
        .def("set_speculative_i", &uut_t::set_speculative_i)

        // walking_mem arrays (with index)
        .def("get_walking_mem_master_mem_addr", &uut_t::get_walking_mem_master_mem_addr)
        .def("set_walking_mem_master_mem_addr", &uut_t::set_walking_mem_master_mem_addr)

        .def("get_walking_mem_master_mem_gnt", &uut_t::get_walking_mem_master_mem_gnt)
        .def("set_walking_mem_master_mem_gnt", &uut_t::set_walking_mem_master_mem_gnt)

        .def("get_walking_mem_master_mem_rdata", &uut_t::get_walking_mem_master_mem_rdata)
        .def("set_walking_mem_master_mem_rdata", &uut_t::set_walking_mem_master_mem_rdata)

        .def("get_walking_mem_master_mem_req", &uut_t::get_walking_mem_master_mem_req)
        .def("set_walking_mem_master_mem_req", &uut_t::set_walking_mem_master_mem_req)

        .def("get_walking_mem_master_mem_valid", &uut_t::get_walking_mem_master_mem_valid)
        .def("set_walking_mem_master_mem_valid", &uut_t::set_walking_mem_master_mem_valid)

        .def("get_plb_entry_o", &uut_t::get_plb_entry_o);

    m.def("uut_init", &uut_init);
    m.def("uut_cycle", &uut_cycle);
    m.def("uut_tick", &uut_tick);
    m.def("uut_eval", &uut_eval);
    m.def("uut_destroy", &uut_destroy);
}