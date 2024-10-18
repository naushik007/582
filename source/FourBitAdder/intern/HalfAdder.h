#ifndef HALFADDER_H
#define HALFADDER_H

#include "AbstractGate.h"
#include "LogicGates.h"

class HalfAdder
{
private:
    // Declare private member variables for AND and XOR gates

public:
    HalfAdder();
    ~HalfAdder();

    // Declare methods for setting inputs and getting outputs
    void setInputs(unsigned short int a, unsigned short int b);
    unsigned short int getSum() const;
    unsigned short int getCarry() const;
};

#endif // HALFADDER_H