#include "ctest.h"
#include "function.h"

CTEST(check_circle, correct_input)
{
    char test_search[60] = "circle(1 2, 3)\0";
    const int expect = 0;

    const int result = check_circle(test_search, 60);
    ASSERT_EQUAL(expect, result);
}

CTEST(check_circle, num_after_bracket)
{
    char test_search[60] = "circle(1 2, 3)5\0";
    const int expect = 1;

    const int result = check_circle(test_search, 60);
    ASSERT_EQUAL(expect, result);
}

CTEST(check_circle, letters_after_bracket)
{
    char test_search[60] = "circle(1 2, 3)sdsd\0";
    const int expect = 1;

    const int result = check_circle(test_search, 60);
    ASSERT_EQUAL(expect, result);
}

CTEST(check_circle, circle_before_bracket)
{
    char test_search[60] = "circlrrr(1 2, 3)\0";
    const int expect = 4;

    const int result = check_circle(test_search, 60);
    ASSERT_EQUAL(expect, result);
}

CTEST(check_circle, nothing_before_bracket)
{
    char test_search[60] = "(1 2, 3)\0";
    const int expect = 4;

    const int result = check_circle(test_search, 60);
    ASSERT_EQUAL(expect, result);
}

CTEST(check_circle, nums_before_bracket)
{
    char test_search[60] = "2123123(1 2, 3)\0";
    const int expect = 4;

    const int result = check_circle(test_search, 60);
    ASSERT_EQUAL(expect, result);
}

CTEST(check_circle, letters_instead_of_brackets)
{
    char test_search[60] = "circle(1 2, 3ааа\0";
    const int expect = 2;

    const int result = check_circle(test_search, 60);
    ASSERT_EQUAL(expect, result);
}

CTEST(check_circle, num_instead_of_brackets)
{
    char test_search[60] = "circle(1 2, 3333\0";
    const int expect = 2;

    const int result = check_circle(test_search, 60);
    ASSERT_EQUAL(expect, result);
}

CTEST(check_circle, nothing_instead_of_brackets)
{
    char test_search[60] = "circle(1 2, 3      \0";
    const int expect = 2;

    const int result = check_circle(test_search, 60);
    ASSERT_EQUAL(expect, result);
}
