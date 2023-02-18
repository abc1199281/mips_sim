#include <catch2/catch.hpp>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>

#include "unit_test/data_path.h"
#include "mips_sim/simulator/simulator.h"

//----------------------------------------------------------------------------
TEST_CASE("classic operation", "[simulator]")
{
    Simulator sim;
    std::string in_file = std::string(IN_DATA_PATH) + "/simulator/in.asm";
    std::string mem_file = std::string(IN_DATA_PATH) + "/simulator/init.hex";
    sim.simulate(in_file, mem_file);
    sim.show_status();
}