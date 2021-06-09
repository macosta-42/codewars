#include <stdbool.h>
#include <stddef.h>
#include <math.h>

bool array_madness(size_t n1, const int arr1[n1], size_t n2, const int arr2[n2])
{
    int     sum1 = 0, sum2 = 0;
    size_t  i = 0;

    while (i < n1)
        sum1 += pow(arr1[i++], 2);
    i = 0;
    while (i < n2)
        sum2 += pow(arr2[i++], 3);
    return (sum1 > sum2);
}