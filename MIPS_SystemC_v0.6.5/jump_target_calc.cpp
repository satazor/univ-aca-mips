
#include "jump_target_calc.h"

/**
 * branch target resolver
 */
void jump_target_calc::calc()
{
    sc_uint<32> imm_j_28;
    sc_uint<32> pc_4;

    imm_j_28 = 0x0FFFFFFF & (imm_j.read() << 2);
    pc_4 = 0xF0000000 & PC_id.read();

    res.write(pc_4 | imm_j_28);
}
