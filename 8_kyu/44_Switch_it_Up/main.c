#include <criterion/criterion.h>

char* switchItUp(int);

Test(basicTests, should_pass_all_the_tests_provided) {
    cr_assert_str_eq(switchItUp(1), "One");
    cr_assert_str_eq(switchItUp(3), "Three");
    cr_assert_str_eq(switchItUp(5), "Five");
}