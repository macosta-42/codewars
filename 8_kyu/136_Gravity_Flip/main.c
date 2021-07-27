#include <criterion/criterion.h>

void tester(char d, const int *array, size_t n, const int *expected);

Test(Example_Tests, should_pass_all_the_tests_provided) {
    {
        const int array[4] = {3, 2, 1, 2};
        char d = 'R';
        const int expected[4] = {1, 2, 2, 3};
        tester(d, array, 4, expected);
    }
    {
        const int array[5] = {1, 4, 5, 3, 5};
        char d = 'L';
        const int expected[5] = {5, 5, 4, 3, 1};
        tester(d, array, 5, expected);
    }
}