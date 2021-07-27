#include <stddef.h>

void flip(char d, const int *array, size_t n, int *result) {
    size_t  i, j;
    int     swap = 0;


    for (size_t i = 0; i < n; i++)
        result[i] = array[i];

    if (d == 'L') {
        i = 0;
        while (i < n - 1) {
            j = i + 1;
            while (j < n) {
                if (result[i] < result[j]) {
                    swap = result[i];
                    result[i] = result[j];
                    result[j] = swap;
                }
                j++;
            }
            i++;
        }
    }
    else if (d == 'R') {
        i = 0;
        while (i < n - 1) {
            j = i + 1;
            while (j < n) {
                if (result[i] > result[j]) {
                    swap = result[i];
                    result[i] = result[j];
                    result[j] = swap;
                }
                j++;
            }
            i++;
        }
    }
}