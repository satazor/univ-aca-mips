#ifndef REGISTRMOD_H
#define REGISTRMOD_H

/**
 *
 * Register module interface.
 */

#include <systemc.h>

/**
 * Registr module.
 * Registr module implements a 32 bit register.
 * Synchronous on writes, assinchronous on reset.
 *
 *   - input ports
 *       - \c sc_uint<32> \c din   - input
 *       - \c bool \c reset        - reset
 *       - \c bool \c clk          - clock
 *   - output ports
 *       - \c sc_uint<32> \c dout  - output
 */

SC_MODULE(registr) {

  sc_in< sc_uint<32> >  din;
  sc_out< sc_uint<32> > dout;

  sc_in< bool > reset;
  sc_in< bool > clk;
  sc_in< bool > enable;

  sc_uint<32> val;

  SC_CTOR(registr)
    {
      SC_METHOD(entry);
      sensitive << reset;
      sensitive_pos << clk;
      val=0;
    }

  void entry();
};

#endif
