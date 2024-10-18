/* add your code */

// Note that you will need intermediate classes as well
// for the half-adder and full-adder circuits.
#include "../../FourBitAdder/FourBitAdder.h"

FourBitAdder::FourBitAdder(Gate *A[4], Gate *B[4]) {
    Gate *carry = new ConstantGate(false); // Initial carry-in is 0
    for (int i = 0; i < 4; ++i) {
        adders[i] = new FullAdder(A[i], B[i], carry);
        carry = adders[i]->getCarryOutput();
    }
}

bool FourBitAdder::getSumOutput(int bit) {
    if (bit < 0 || bit >= 4) {
        throw std::out_of_range("Bit index out of range");
    }
    return adders[bit]->getSumOutput();
}

bool FourBitAdder::getCarryOutput() {
    return adders[3]->getCarryOutput();
}
