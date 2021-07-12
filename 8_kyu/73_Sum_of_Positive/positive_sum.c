#include <stddef.h>

int positive_sum(const int *values, size_t count) {
    int res = 0;

    while (count--) {
        if (values[count] >= 0)
            res += values[count];
    }
    return res;
}