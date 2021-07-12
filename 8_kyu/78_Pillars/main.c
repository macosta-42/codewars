#include <criterion/criterion.h>

long pillars(int, int, int);

Test(Sample_Tests, Tests) {
    cr_assert_eq(pillars(1, 10, 10), 0);
    cr_assert_eq(pillars(2, 20, 25), 2000);
    cr_assert_eq(pillars(11, 15, 30), 15270);
}