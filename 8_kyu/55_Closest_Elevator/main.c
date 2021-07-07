#include <criterion/criterion.h>

const char* elevator(int left, int right, int call);

Test(Assorted_Calls, should_pass_all_the_tests_provided) {
    cr_assert_str_eq(elevator(0, 1, 0), "left",  "should return \"left\"");
    cr_assert_str_eq(elevator(0, 1, 1), "right", "should return \"right\"");
    cr_assert_str_eq(elevator(0, 1, 2), "right", "should return \"right\"");
    cr_assert_str_eq(elevator(0, 0, 0), "right", "should return \"right\"");
    cr_assert_str_eq(elevator(0, 2, 1), "right", "should return \"right\"");
}