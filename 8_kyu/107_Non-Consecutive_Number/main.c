#include <criterion/criterion.h>

bool firstNonConsecutive (const int[], const int, int*);

Test(a_simple_example, should_pass_all_the_tests_provided) {
    int values[] = {1,2,3,4,6,7,8};
    int actual_first_non_consecutive_number;
    const int expected_first_non_consecutive_number = 6;
    cr_assert_eq(firstNonConsecutive(values, 7, &actual_first_non_consecutive_number), true, "Expected to find a first non consecutive number but did not");
    cr_assert_eq(actual_first_non_consecutive_number, expected_first_non_consecutive_number, "Expected first non consecutive number to be %d but got %d", expected_first_non_consecutive_number, actual_first_non_consecutive_number);
}