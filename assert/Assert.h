#ifndef GTESTPRACTICE_ASSERT_H
#define GTESTPRACTICE_ASSERT_H

#include "CalculatorTest.h"

/**
 * https://google.github.io/googletest/primer.html
 *
 * ASSERT_* versions generate fatal failures when they fail, and abort the current function.
 * EXPECT_* versions generate nonfatal failures, which don’t abort the current function.
 * Usually EXPECT_* are preferred, as they allow more than one failure to be reported in a test.
 * However, you should use ASSERT_* if it doesn’t make sense to continue when the assertion in question fails.
 */

#endif//GTESTPRACTICE_ASSERT_H
