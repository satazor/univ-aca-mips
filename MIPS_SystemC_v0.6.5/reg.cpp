
#include "reg.h"

/**
 * \c registr module callback function.
 */
void registr::entry()
{
    if(reset) {
       val=0;
       dout.write(val);
    }
    else if(clk.event() && clk==1 && enable==1) {
        val=din.read();
        dout.write(val);
    }
}
