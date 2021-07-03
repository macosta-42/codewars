#include <stddef.h>

int sum_array(const int *values, size_t count) {
    int ans = 0;

    while (count--)
        ans += values[count];
    return ans;
}