#ifndef EXTCOMPARATOR_H
#define EXTCOMPARATOR_H

/**
 *
 * comparator module interface.
 */

#include <systemc.h>

/**
 * comparator module.
 * \c comparator module comparaes two sc_uint<32> signals.
 *   - input ports
 *    - \c sc_uint<32> \c op1 - input
 *    - \c sc_uint<32> \c op2 - input
 *   - output ports
 *    - \c bool \c dout  - output
 */

SC_MODULE(comparator) {
  
  sc_in< sc_uint<32> >  op1;
  sc_in< sc_uint<32> >  op2;
  sc_out< bool > res;

  SC_CTOR(comparator)
     {      
      SC_METHOD(calc);
      sensitive << op1 << op2;
    }
  
  void calc();
};

#endif
