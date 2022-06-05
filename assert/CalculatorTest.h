#ifndef GTESTPRACTICE_CALCULATORTEST_H
#define GTESTPRACTICE_CALCULATORTEST_H

#include <gtest/gtest.h>

namespace assert {
    class CalculatorTest : public ::testing::Test {
    public:
        CalculatorTest() = default;
        ~CalculatorTest() = default;
    };

    TEST_F(CalculatorTest, TestAddTwoInt) {
        EXPECT_EQ(Calculator<int>::Add(2, 3), 5);
    }

}// namespace assert
#endif//GTESTPRACTICE_CALCULATORTEST_H
