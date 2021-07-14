#include <criterion/criterion.h>

int better_than_average(int *, int, int);

Test(better_than_average, ex_tests) {
    int cp1[] = {2, 3};
    int cp2[] = {100, 40, 34, 57, 29, 72, 57, 88};
    int cp3[] = {12, 23, 34, 45, 56, 67, 78, 89, 90};
    cr_assert(better_than_average(cp1, 2, 5));
    cr_assert(better_than_average(cp2, 8, 75));
    cr_assert_not(better_than_average(cp3, 9, 9));
}