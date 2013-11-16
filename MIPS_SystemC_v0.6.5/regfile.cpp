
#include "regfile.h"

/**
 * instantiates the 32 registers %and initializes values to 0.
 */
void regfile::init_regs()
{
    memory.clear();
    for(int i=0;i<32;i++) memory.push_back(0);
}

/**
 * Used for debugging.
 */
void regfile::dump()
{
    for(int i=0;i<16;i++) printf(" r%2d",i);
    printf("\n");
    for(int i=0;i<16;i++) printf("%4d",(int)memory[i]);
    printf("\n");
    for(int i=0;i<16;i++) printf(" r%2d",i+16);
    printf("\n");
    for(int i=0;i<16;i++) printf("%4d",(int)memory[i+16]);
    printf("\n");
}

/**
 * Callback for behaviour of \c regfile module.
 */
void regfile::regfile_access()
{
    //assert(reg1.read()<32);
    //assert(reg2.read()<32);

    if(reset.read()==true) {
	    init_regs();
    }

    if(clk.event() && clk.read()==1 && wr.read()) {

        //assert(regwrite.read()<32);
        if(regwrite.read()<32 && regwrite.read()>0){
           memory[regwrite.read()]=datawr.read();
	}
    }

    if(reg1.read()<32) {
       if(wr.read() == false || 
          wr.read() == true && regwrite.read()!=reg1.read())
           data1.write(memory[reg1.read()]);
       else
           data1.write(datawr.read());
    }
    if(reg2.read()<32) {
       if(wr.read() == false || 
          wr.read() == true && regwrite.read()!=reg2.read())
           data2.write(memory[reg2.read()]);
       else
           data2.write(datawr.read());
    }
}
