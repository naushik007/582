# Build FourBitAdder
set(SRC
  AbstractGate.cpp
  LogicGates.cpp
  FourBitAdder.cpp
)

set(INC 
  AbstractGate.h
  LogicGates.h
  ../FourBitAdder.h  # Added the missing header file
)

add_library(proj1_FourBitAdder SHARED "${SRC}" "${INC}")
