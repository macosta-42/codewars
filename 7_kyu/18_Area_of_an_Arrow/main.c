#include <criterion/criterion.h>

double arrow_area(unsigned, unsigned);

Test(Sample_Tests, Tests) {
    cr_assert_eq(arrow_area(4, 2), 2);
    cr_assert_eq(arrow_area(7, 6), 10.5);
    cr_assert_eq(arrow_area(25, 25), 156.25);
}