#include <stddef.h>

int diffsum(const int *arr, size_t n)
{
    int min, max, num;
    if (n < 2)
        return 0;
    max = min = *arr;
    while (--n)
        if ((num = *++arr) > max)
            max = num;
        else if (num < min)
            min = num;
    return max - min;
}