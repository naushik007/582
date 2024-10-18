cmake_minimum_required (VERSION 2.6)
# Set paths for GTest (update these paths to match your system)
set(GTEST_ROOT "C:\\Users\\hiran\\Downloads\\csc582-asg1-master\\csc582-asg1-master\\googletest\\googletest")
set(GTEST_LIB_DIR "${GTEST_ROOT}/build/Debug") # Update if using Release mode
set(GTEST_INCLUDE_DIR "${GTEST_ROOT}/googletest/include")
# include_directories(${GTEST_INCLUDE_DIRS})
include_directories(${GTEST_INCLUDE_DIR})
link_directories(${GTEST_LIB_DIR})

set(INC_LOGIC 
    ../../source/FourBitAdder/intern/AbstractGate.h
    ../../source/FourBitAdder/intern/LogicGates.h
    ../../source/FourBitAdder/FourBitAdder.h
)

# Add source files for each test suite
set(SRC_LOGIC_GATES ./GTestLogicGates.cpp)
set(SRC_HALF_ADDER ./GTestHalfAdder.cpp)
set(SRC_FULL_ADDER ./GTestFullAdder.cpp)
set(SRC_FOUR_BIT_ADDER ./GTestFourBitAdder.cpp)

# Add executables for each test suite
add_executable(LogicGatesGTests_gtests ${SRC_LOGIC_GATES} ${INC_LOGIC})
target_link_libraries(LogicGatesGTests_gtests proj1_FourBitAdder ${GTEST_LIBRARIES} pthread)

add_executable(HalfAdderGTests_gtests ${SRC_HALF_ADDER} ${INC_LOGIC})
target_link_libraries(HalfAdderGTests_gtests proj1_FourBitAdder ${GTEST_LIBRARIES} pthread)

add_executable(FullAdderGTests_gtests ${SRC_FULL_ADDER} ${INC_LOGIC})
target_link_libraries(FullAdderGTests_gtests proj1_FourBitAdder ${GTEST_LIBRARIES} pthread)

add_executable(FourBitAdderGTests_gtests ${SRC_FOUR_BIT_ADDER} ${INC_LOGIC})
target_link_libraries(FourBitAdderGTests_gtests proj1_FourBitAdder ${GTEST_LIBRARIES} pthread)

# Enable testing and add all test executables
enable_testing()
add_test(NAME LogicGatesGTests COMMAND LogicGatesGTests_gtests)
add_test(NAME HalfAdderGTests COMMAND HalfAdderGTests_gtests)
add_test(NAME FullAdderGTests COMMAND FullAdderGTests_gtests)
add_test(NAME FourBitAdderGTests COMMAND FourBitAdderGTests_gtests)
# set(INC_LOGIC 
# ../../source/FourBitAdder/intern/AbstractGate.h
# ../../source/FourBitAdder/intern/LogicGates.h
# )

# set(SRC_LOGIC 
# ./GTestLogicGates.cpp
# )

# add_executable(LogicGatesGTests_gtests ${SRC_LOGIC} ${INC_LOGIC})
# target_link_libraries(LogicGatesGTests_gtests proj1_FourBitAdder ${GTEST_LIBRARIES} pthread)
