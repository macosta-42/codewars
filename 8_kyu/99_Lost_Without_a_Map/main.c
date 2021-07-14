#include <criterion/criterion.h>
#include <stddef.h>

int *maps(const int *arr, size_t size);

Test(maps_function, sample_tests)
{
    int arr0[] = {1, 2, 3};
    int arr1[] = {4, 1, 1, 1, 4};
    int arr2[] = {2, 2, 2, 2, 2, 2};
    int expected0[] = {2, 4, 6};
    int expected1[] = {8, 2, 2, 2, 8};
    int expected2[] = {4, 4, 4, 4, 4, 4};
    int *actual0 = maps(arr0, sizeof(arr0) / sizeof(int));
    int *actual1 = maps(arr1, sizeof(arr1) / sizeof(int));
    int *actual2 = maps(arr2, sizeof(arr2) / sizeof(int));
    cr_assert_arr_eq(actual0, expected0, sizeof(arr0) / sizeof(int));
    cr_assert_arr_eq(actual1, expected1, sizeof(arr1) / sizeof(int));
    cr_assert_arr_eq(actual2, expected2, sizeof(arr2) / sizeof(int));
    free(actual0);
    free(actual1);
    free(actual2);
}