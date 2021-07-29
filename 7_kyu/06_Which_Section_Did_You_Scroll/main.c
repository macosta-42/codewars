#include <criterion/criterion.h>
#include <stdlib.h>

int get_section_id(int n, int *a, size_t a_size);

void tester(int n, int *a, size_t a_size, int exp) {
    const int actual = get_section_id(n, a, a_size);
    cr_assert_eq(actual, exp, "Expected %i, got %i", exp, actual);
}

Test(all_the_tests, basic_tests) {
    int arr[5] = {300, 200, 400, 600, 100};
    tester(1, arr, 5, 0);
    tester(299, arr, 5, 0);
    tester(300, arr, 5, 1);
    tester(1599, arr, 5, 4);
    tester(1600, arr, 5, -1);
}