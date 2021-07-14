#include <criterion/criterion.h>

int sum(int[],int);

Test(basic_tests, should_pass_all_the_tests_provided) {
    int array1[] = { 6, 2, 1, 8, 10 };
    cr_assert_eq(sum(array1, 5), 16);
}