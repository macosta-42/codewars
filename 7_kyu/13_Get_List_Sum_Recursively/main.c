#include <criterion/criterion.h>

int sumR (int *array, int n);

Test(sumR, should_pass_all_the_tests_provided) {
    cr_assert_eq (sumR (0, 0), 0);
    cr_assert_eq (sumR ((int[]){1}, 1), 1);
    cr_assert_eq (sumR ((int[]){1, 1, 1}, 3), 3);
}