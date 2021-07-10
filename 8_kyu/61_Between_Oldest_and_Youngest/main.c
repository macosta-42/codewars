#include <criterion/criterion.h>

int *difference_in_ages(size_t a, const int ages[a]);
void tester(size_t a, const int ages[a], int expected[3]);

Test(Example_Tests, should_pass_all_the_tests_provided) {
    {
        const int ages[5] = {82, 15, 6, 38, 35};
        int expected[3] = {6, 82, 76};
        tester(5, ages, expected);
    }
    {
        const int ages[4] = {57, 99, 14, 32};
        int expected[3] = {14, 99, 85};
        tester(4, ages, expected);
    }
}ß