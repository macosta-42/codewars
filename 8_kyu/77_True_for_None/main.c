#include <criterion/criterion.h>

#include <stdbool.h>
#include <stddef.h>

bool none(const int* arr, size_t size, bool (*fun)(int));

bool greater_than_9(int x) { return x > 9; }
bool less_than_9(int x) { return x < 9; }
Test(basic_tests, should_pass_all_the_tests_provided)
{
    const int arr[] = { 1, 2, 3, 4, 5 };
    cr_assert_eq(none(arr, sizeof(arr) / sizeof(int), less_than_9), false);
    cr_assert_eq(none(arr, sizeof(arr) / sizeof(int), greater_than_9), true);
}
