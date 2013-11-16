
#include "branch_taken_calc.h"

/**
 * branch taken resolver
 */
void branch_taken_calc::calc()
{
	sc_uint<2> branchVal = branch.read();

	// If branch is 01, then it only stays 01 if the rs & rt are equal
    if (branchVal == 1) {
    	if (regdata1.read() == regdata2.read()) {
    		res.write(1);
    	} else {
    		res.write(0);
    	}
    } else {
    	res.write(branchVal);
    }
}
