#ifndef GTESTPRACTICE_CALCULATORTEST_H
#define GTESTPRACTICE_CALCULATORTEST_H

#include <gtest/gtest.h>
#include "Calculator.h"

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

}// namespace assert
#endif//GTESTPRACTICE_CALCULATORTEST_H
