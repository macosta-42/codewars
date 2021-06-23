#include <criterion/criterion.h>
#include <stdint.h>
int32_t double_integer(int32_t);

Test(sample_test, should_double_integer) {
cr_assert_eq(double_integer(2), 4);
}