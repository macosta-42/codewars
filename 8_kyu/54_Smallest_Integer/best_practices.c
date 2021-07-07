#include <stddef.h>

int find_smallest_int(const int vec[], size_t len) {
    int res = vec[0];
    for (size_t i = 1; i < len; i++)
        if (vec[i] < res)
            res = vec[i];
    return res;
}