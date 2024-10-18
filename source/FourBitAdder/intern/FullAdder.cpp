#include "FullAdder.h"

FullAdder::FullAdder()
{
    // Initialize two HalfAdders and an OR gate
}

FullAdder::~FullAdder()
{
    // Destructor implementation if needed
}

void FullAdder::setInputs(unsigned short int a, unsigned short int b, unsigned short int cin)
{
    // Set inputs for the first HalfAdder
    // Use its output and cin for the second HalfAdder
    // Use OR gate for final carry
}

unsigned short int FullAdder::getSum() const
{
    // Return the sum (second HalfAdder's sum output)
}

unsigned short int FullAdder::getCarry() const
{
    // Return the carry (OR gate output)
}