#include <criterion/criterion.h>

char* whatday(int num);

Test(Sample_Tests, should_pass_all_the_tests_provided) {
cr_assert_str_eq(whatday(1), "Sunday");
cr_assert_str_eq(whatday(2), "Monday");
cr_assert_str_eq(whatday(3), "Tuesday");
cr_assert_str_eq(whatday(4), "Wednesday");
cr_assert_str_eq(whatday(5), "Thursday");
cr_assert_str_eq(whatday(6), "Friday");
cr_assert_str_eq(whatday(7), "Saturday");
cr_assert_str_eq(whatday(0), "Wrong, please enter a number between 1 and 7");
cr_assert_str_eq(whatday(8), "Wrong, please enter a number between 1 and 7");
cr_assert_str_eq(whatday(20), "Wrong, please enter a number between 1 and 7");
}