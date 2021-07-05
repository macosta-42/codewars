#include <stdbool.h>
#include <stddef.h>

size_t count_sheep(const bool *sheep, size_t count) {
    size_t i = 0, ans = 0;

    while (i < count) {
        if (sheep[i])
            ans++;
        i++;
    }
    return ans;
}