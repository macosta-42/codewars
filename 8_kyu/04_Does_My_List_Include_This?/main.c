
#include <criterion/criterion.h>

#include <stdbool.h>
#include <stddef.h>

bool include(const int* arr, size_t size, int item);

Test(basic_tests, should_pass_all_the_tests_provided)
{
const int arr[] = {0, 1, 2, 3, 5, 8, 13, 2, 2, 2, 11};
cr_assert_eq(include(arr, sizeof(arr) / sizeof(int), 13), true);
cr_assert_eq(include(arr, sizeof(arr) / sizeof(int), 0), true);
cr_assert_eq(include(arr, sizeof(arr) / sizeof(int), 2), true);
cr_assert_eq(include(arr, sizeof(arr) / sizeof(int), 11), true);
cr_assert_eq(include(arr, sizeof(arr) / sizeof(int), 100), false);
}
