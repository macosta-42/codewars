#include <criterion/criterion.h>

int final_grade(int exam, int projects);

Test(Sample_Tests, should_pass_all_the_tests_provided) {
    cr_assert_eq(final_grade(100, 12), 100);
    cr_assert_eq(final_grade(85, 5), 90);
}