#ifndef __ASSEMBLER_H__
#define __ASSEMBLER_H__

#include <string>
#include <list>
#include "mips_sim/assembler/parser.h"

class Assembler
{
public:
    void load(std::string in_file);
    void save(std::string out_file);
    std::list<uint32_t> get_obj_code()
    {
        return obj_code;
    };

    // TODO: how to move these functions into private while keeping unit test?
    uint32_t object_code(std::string input);

private:
    Parser parser;
    std::list<uint32_t> obj_code;
};

#endif // __ASSEMBLER_H__