#include <stddef.h>

int yoga(size_t n, const int class[n][n], size_t p, const int poses[p]) {
    int row_sum = 0, res = 0;

    for (size_t i = 0; i < n; i++) {
        row_sum = 0;
        for (size_t j = 0; j < n; j++)
            row_sum += class[i][j];
        for (size_t k = 0; k < p; k++) {
            for (size_t j = 0; j < n; j++) {
                if (row_sum + class[i][j] >= poses[k])
                    res++;
            }
        }
    }
    return res;
}