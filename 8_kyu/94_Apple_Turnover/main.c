#include <criterion/criterion.h>

const char *apple(int x);

Test(Sample_Tests, should_pass_all_the_tests_provided) {
    cr_assert_str_eq(apple(4), "Help yourself to a honeycomb Yorkie for the glovebox.");
    cr_assert_str_eq(apple(60), "It's hotter than the sun!!");
}