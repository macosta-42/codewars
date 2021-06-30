#include <criterion/criterion.h>

int find_difference(const int a[3], const int b[3]);

Test(Example_Tests, should_pass_all_the_tests_provided) {
    {
        const int one[3] = {3, 2, 5};
        const int two[3] = {1, 4, 4};
        const int expected = 14;
        cr_assert_eq(find_difference(one, two), expected);
    }
    {
        const int one[3] = {9, 7, 2};
        const int two[3] = {5, 2, 2};
        const int expected = 106;
        cr_assert_eq(find_difference(one, two), expected);
    }
}