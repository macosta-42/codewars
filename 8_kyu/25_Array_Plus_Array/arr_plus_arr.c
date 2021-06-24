#include <stddef.h>

long arr_plus_arr(const int *a,  const int *b, size_t na, size_t nb)
{
    int i = 0;
    long res = 0;

    while (i < na) {
        res += a[i];
        i++;
    }
    i = 0;
    while (i < nb) {
        res += b[i];
        i++;
    }
    return res;
}