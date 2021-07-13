#include <criterion/criterion.h>
double getVolumeOfCubiod(double, double, double);

Test(Tests, should_pass_all_the_tests_provided) {
    cr_assert_eq(getVolumeOfCubiod(1, 2, 2), 4);
    cr_assert_eq(getVolumeOfCubiod(6.3, 2, 5), 63);
}