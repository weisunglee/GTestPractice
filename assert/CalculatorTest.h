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
        EXPECT_ANY_THROW(Calculator<int>::Divide(1, 0));
        EXPECT_NO_THROW(Calculator<int>::Divide(1, 1));
    }

    TEST_F(CalculatorTest, TestDividTwoInt) {
        ASSERT_EQ(Calculator<int>::Divide(4, 2), 2);
        EXPECT_EQ(Calculator<int>::Divide(2, 1), 2);
    }

    TEST_F(CalculatorTest, TestMultiplyTwoInt) {
        ASSERT_EQ(Calculator<int>::Multiply(2, 2), 4);
        EXPECT_EQ(Calculator<int>::Multiply(2, 0), 0);
    }

    TEST_F(CalculatorTest, TestFloatComparison) {
        ASSERT_FLOAT_EQ(Calculator<float>::Divide(7.f, 3.f), 2.333333f);
        EXPECT_FLOAT_EQ(Calculator<float>::Divide(7.f, 3.f), 2.333333f);
        // Due to rounding error, it's not suitable to use EXPECT_EQ
        EXPECT_NE(Calculator<float>::Divide(7.f, 3.f), 2.333333f);

        // 7/3 = 2.3333... and 7/2 = 3.5, then 3.5 - 2.3333 < 1.2
        EXPECT_NEAR(Calculator<float>::Divide(7.f, 3.f), Calculator<float>::Divide(7.f, 2.f), 1.2f);
        ASSERT_NEAR(Calculator<float>::Divide(7.f, 3.f), Calculator<float>::Divide(7.f, 2.f), 1.2f);
    }

    TEST_F(CalculatorTest, TestDoubleComparison) {
        ASSERT_DOUBLE_EQ(Calculator<double>::Divide(7., 3.), 2.333333333333333);
        EXPECT_DOUBLE_EQ(Calculator<double>::Divide(7., 3.), 2.333333333333333);
        // Due to rounding error, it's not suitable to use EXPECT_EQ
        EXPECT_NE(Calculator<double>::Divide(7., 3.), 2.333333333333333);
    }
}// namespace assert
#endif//GTESTPRACTICE_CALCULATORTEST_H
