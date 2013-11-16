#ifndef EXTJUMP_TARGET_CALC_H
#define EXTJUMP_TARGET_CALC_H

/**
 *
 * branch target calc module interface.
 */

#include <systemc.h>

/**
 * branch target calc.
 * \c resolves the branch target address
 *   - input ports
 *    - \c sc_uint<26> \c imm_j - input
 *    - \c sc_uint<32> \c pc4 - input
 *   - output ports
 *    - \c sc_uint<32> \c res - output
 */

SC_MODULE(jump_target_calc) {

  sc_in< sc_uint<26> >  imm_j;
  sc_in< sc_uint<32> > PC;
  sc_out< sc_uint<32> > res;

  SC_CTOR(jump_target_calc)
     {      
      SC_METHOD(calc);
      sensitive << imm_j << PC;
    }
  
  void calc();
};

#endif
