#include <criterion/criterion.h>
#include <stddef.h>
#include <limits.h>

extern long arr_plus_arr(const int *a, const int *b, size_t na, size_t nb);

void assert_data(const int *a, size_t na, const int *b, size_t nb, long expected)
{
    long actual = arr_plus_arr(a, b, na, nb);
    if (actual != expected)
        cr_assert_fail("*Actual*: %li\nExpected: %li", actual, expected);
    else
        cr_assert(1);
}

Test(Sample_Test, should_return_the_sum_of_arrays)
{
assert_data((const int []){ 1, 2, 3 }, 3ul, (const int []){ 4, 5, 6 }, 3ul, 21);
assert_data((const int []){ 1,-2,-3 }, 3ul, (const int []){ 4,-5, 6 }, 3ul,  1);
assert_data((const int []){-1,-2,-3 }, 3ul, (const int []){-4,-5,-6 }, 3ul,-21);
assert_data((const int []){ 0, 0, 0 }, 3ul, (const int []){ 4, 5, 6 }, 3ul, 15);
assert_data((const int []){ -1 }, 1ul, (const int []){ -1 }, 1ul,-2);
assert_data((const int[]){ 0 }, 1ul, (const int[]){ 0, 0, 0 }, 2ul, 0);
assert_data((const int[]){ INT_MAX,INT_MAX,INT_MAX,INT_MIN,INT_MAX }, 5ul, (const int[]){ INT_MIN,INT_MAX,INT_MIN }, 3ul, INT_MAX*2l-3);
}