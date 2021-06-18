#include <criterion/criterion.h>

long odd_count(long);

Test(Sample_Tests, Tests) {
cr_assert_eq(odd_count(15), 7);
cr_assert_eq(odd_count(15023), 7511);
}