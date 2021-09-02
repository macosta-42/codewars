#include <stddef.h>

int even_last(const int array[], size_t z) {
    int     res = 0;
    size_t  i = 0;

    while (i < z) {
        if (i % 2 == 0)
            res += array[i];
        i++;
    }
    return res * array[z - 1];
}