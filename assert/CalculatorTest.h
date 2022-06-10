#ifndef GTESTPRACTICE_CALCULATORTEST_H
#define GTESTPRACTICE_CALCULATORTEST_H

#include <gtest/gtest.h>
#include "Calculator.h"
using namespace src;

namespace assert {
    class CalculatorTest : public ::testing::Test {
    public:
        CalculatorTest() = default;
        ~CalculatorTest() = default;
    };

    TEST_F(CalculatorTest, TestAddTwoInt) {
        // 1 + 1 == 2
        ASSERT_EQ(Calculator<int>::Add(1, 1), 2);
        EXPECT_EQ(Calculator<int>::Add(1, 1), 2);
        // 1 + 1 != 1
        ASSERT_NE(Calculator<int>::Add(1, 1), 1);
        EXPECT_NE(Calculator<int>::Add(1, 1), 1);
        // 1 + 1 >= 2
        ASSERT_GE(Calculator<int>::Add(1, 1), 2);
        EXPECT_GE(Calculator<int>::Add(1, 1), 2);
        // 1 + 1 > 1
        ASSERT_GT(Calculator<int>::Add(1, 1), 1);
        EXPECT_GT(Calculator<int>::Add(1, 1), 1);
        // 1 + 1 <= 2
        ASSERT_LE(Calculator<int>::Add(1, 1), 2);
        EXPECT_LE(Calculator<int>::Add(1, 1), 2);
        // 1 + 1 < 3
        ASSERT_LT(Calculator<int>::Add(1, 1), 3);
        EXPECT_LT(Calculator<int>::Add(1, 1), 3);
    }

    TEST_F(CalculatorTest, TestMinusTwoInt) {
        // 1 - 1 = 0 is true
        EXPECT_TRUE(Calculator<int>::Minus(1, 1) == 0);
        ASSERT_TRUE(Calculator<int>::Minus(1, 1) == 0);
        // 1 - 1 = 1 is false
        EXPECT_FALSE(Calculator<int>::Minus(1, 1) == 1);
        ASSERT_FALSE(Calculator<int>::Minus(1, 1) == 1);
    }

    TEST_F(CalculatorTest, TestDividByZero) {
        EXPECT_THROW(Calculator<int>::Divide(1, 0), std::exception);
    }

    TEST_F(CalculatorTest, TestDividTwoInt) {
        EXPECT_NO_THROW(Calculator<int>::Divide(4, 2));
    }

}// namespace assert
#endif//GTESTPRACTICE_CALCULATORTEST_H
