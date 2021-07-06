#include <criterion/criterion.h>

int quarter_of(int month);

Test(Sample_Tests, should_pass_all_the_tests_provided) {
    cr_assert_eq(quarter_of(3), 1);
    cr_assert_eq(quarter_of(8), 3);
    cr_assert_eq(quarter_of(11), 4);
}