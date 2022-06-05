project(assert)

set(HEADER_FILES
    Assert.h
    Calculator.h
    CalculatorTest.h
    )

set(SOURCE_FILES
    Calculator.cpp
    )

add_library(assert
    ${HEADER_FILES}
    ${SOURCE_FILES})