#include <criterion/criterion.h>
#include <stdint.h>

int32_t square(int32_t);

Test(square_test, should_square_integers) {
    cr_assert_eq(square(1), 1);
    cr_assert_eq(square(2), 4);
    cr_assert_eq(square(3), 9);
    cr_assert_eq(square(4), 16);
    cr_assert_eq(square(5), 25);
}