#ifndef EXTBRANCH_TAKEN_CALC_H
#define EXTBRANCH_TAKEN_CALC_H

/**
 *
 * branch taken calc module interface.
 */

#include <systemc.h>

/**
 * branch taken calc.
 * \c resolves the branch taken
 *   - input ports
 *    - \c sc_uint<2> \c branch    - input
 *    - \c sc_uint<32> \c regdata1 - input
 *    - \c sc_uint<32> \c regdata2 - input
 *   - output ports
 *    - \c sc_uint<2> \c res       - output
 */

SC_MODULE(branch_taken_calc) {

  sc_in< sc_uint<2> >  branch;
  sc_in< sc_uint<32> > regdata1;
  sc_in< sc_uint<32> > regdata2;
  sc_out< sc_uint <2> > res;

  SC_CTOR(branch_taken_calc)
     {
      SC_METHOD(calc);
      sensitive << branch << regdata1 << regdata2;
    }

  void calc();
};

#endif
