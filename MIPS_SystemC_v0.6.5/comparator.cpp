
#include "comparator.h"

/**
 * just compares the two input values
 */
void comparator::calc()
{
    res.write(op1.read() == op2.read());
}
