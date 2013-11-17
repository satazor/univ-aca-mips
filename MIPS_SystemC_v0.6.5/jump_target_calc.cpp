
#include "jump_target_calc.h"

/**
 * branch target resolver
 */
void jump_target_calc::calc()
{
    sc_uint<32> imm_j_28;
    sc_uint<32> pc_4;

    imm_j_28 = 0x01111111 & (imm_j.read() << 2);
    pc_4 = 0x10000000 & PC_id.read();

    res.write(imm_j_28 | pc_4);
}
