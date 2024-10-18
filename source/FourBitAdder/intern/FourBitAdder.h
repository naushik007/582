#ifndef FOURBITADDER_H
#define FOURBITADDER_H

#include "FullAdder.h"

class FourBitAdder
{
private:
    // Declare private member variables for four FullAdders

public:
    FourBitAdder();
    ~FourBitAdder();

    // Declare methods for setting inputs and getting outputs
    void setInputs(unsigned short int a[4], unsigned short int b[4]);
    void getSum(unsigned short int sum[4]) const;
    unsigned short int getCarry() const;
};

#endif // FOURBITADDER_H