#include <criterion/criterion.h>
#include <stddef.h>
#include <limits.h>
#include <stdio.h>

extern int diffsum(const int *arr, size_t n);

#define FMT_INT     (CHAR_BIT * sizeof(int) / 3 + 1)
#define FMT_ALIGN   0x2
#define FMT_ARR     ((FMT_INT + FMT_ALIGN) * 0x5)


char *ia_to_s(char *s, const int *a, size_t n, const char *sep)
{
    const char *p = sep ? sep : ", ";
    size_t pos = sprintf(s, "%i", *a++);
    while (--n)
        pos += sprintf(s+pos, "%s%i", p, *a++);
    return s;
}

void assert_data(const int *arr, size_t n, int expected)
{
    char fmtarr[FMT_ARR];
    int actual = diffsum(arr, n);
    if (actual != expected)
        cr_assert_fail("*Actual*: %i\nExpected: %i\n   Array: [%s]\n", actual, expected, ia_to_s(fmtarr, arr, n, 0));
    else
        cr_assert(1);
}

Test(Sample_Test, should_return_the_sum_of_differences)
{
    assert_data((const int[]){1,2,10}, 3ul, 9);
    assert_data((const int[]){-3,-2,-1}, 3ul, 2);
    assert_data((const int[]){-17,17}, 2ul, 34);
    assert_data((const int[]){0}, 0ul, 0);
    assert_data((const int[]){1}, 1ul, 0);
}