#include <criterion/criterion.h>
int simple_multiplication(int);

Test(Tests, Basic_tests) {
    cr_assert_eq(simple_multiplication(2), 16);
    cr_assert_eq(simple_multiplication(1), 9);
    cr_assert_eq(simple_multiplication(8), 64);
    cr_assert_eq(simple_multiplication(4), 32);
    cr_assert_eq(simple_multiplication(5), 45);
}