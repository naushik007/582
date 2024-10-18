
#include "../../source/FourBitAdder/FourBitAdder.h"

// Test the Full Adder
TEST(FullAdderTest, BasicTest) {
    FullAdder fullAdder;
    fullAdder.setInputs(0, 0, 0);
    EXPECT_EQ(fullAdder.getSum(), 0);
    EXPECT_EQ(fullAdder.getCarryOut(), 0);

    fullAdder.setInputs(0, 1, 0);
    EXPECT_EQ(fullAdder.getSum(), 1);
    EXPECT_EQ(fullAdder.getCarryOut(), 0);

    fullAdder.setInputs(1, 0, 0);
    EXPECT_EQ(fullAdder.getSum(), 1);
    EXPECT_EQ(fullAdder.getCarryOut(), 0);

    fullAdder.setInputs(1, 1, 0);
    EXPECT_EQ(fullAdder.getSum(), 0);
    EXPECT_EQ(fullAdder.getCarryOut(), 1);

    fullAdder.setInputs(1, 1, 1);
    EXPECT_EQ(fullAdder.getSum(), 1);
    EXPECT_EQ(fullAdder.getCarryOut(), 1);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
