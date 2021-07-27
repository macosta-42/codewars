#include <criterion/criterion.h>

int past(int h, int m, int s);
void tester(int h, int m, int s, int expected);

Test(Example_Tests, should_pass_all_the_tests_provided) {
    tester(0, 0, 0, 0);
    tester(1, 0, 0, 3600000);
    tester(0, 1, 0, 60000);
    tester(0, 0, 1, 1000);
    tester(1, 1, 0, 3660000);
    tester(1, 0, 1, 3601000);
    tester(0, 1, 1, 61000);
    tester(1, 1, 1, 3661000);
}