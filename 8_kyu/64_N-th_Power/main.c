#include <criterion/criterion.h>

int index (int *array, int size, int n);

Test(nth_power, should_pass_all_the_tests_provided) {
    cr_assert_eq (index (0, 0, 0), -1);
    cr_assert_eq (index ((int []){1, 2, 3, 4}, 4, 2), 9);
    cr_assert_eq (index ((int []){1, 3, 10, 100}, 4, 3), 1000000);
}