/* add your code */

// Note that you will need intermediate classes as well
// for the half-adder and full-adder circuits.
#ifndef FOURBITADDER_H
#define FOURBITADDER_H

#include "../../FourBitAdder/intern/AbstractGate.h"
#include "../../FourBitAdder/intern/LogicGates.h"
//#include "../../FourBitAdder/FullAdder.h"

class FourBitAdder : public AbstractDevice {
public:
    FourBitAdder(Gate *A[4], Gate *B[4]);
    bool getSumOutput(int bit);
    bool getCarryOutput();

private:
    FullAdder *adders[4];
};

#endif // FOURBITADDER_H
