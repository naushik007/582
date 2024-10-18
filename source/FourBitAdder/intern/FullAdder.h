#ifndef FULLADDER_H
#define FULLADDER_H

#include "HalfAdder.h"
#include "LogicGates.h"

class FullAdder
{
private:
    // Declare private member variables for two HalfAdders and an OR gate

public:
    FullAdder();
    ~FullAdder();

    // Declare methods for setting inputs and getting outputs
    void setInputs(unsigned short int a, unsigned short int b, unsigned short int cin);
    unsigned short int getSum() const;
    unsigned short int getCarry() const;
};

#endif // FULLADDER_H