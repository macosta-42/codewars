//FALSE

#include <stdlib.h>
#include <string.h>

// Please make sure you store the number of distinct values
// in the memory pointed to by pResultCount. If values == NULL
// or count == 0, then *pResultCount == 0.
int *distinct(const int *values, size_t count, size_t *pResultCount) {
    size_t      i = 0, j = 0;
    int         *tab = (int *)calloc(count, sizeof(int));
    static int  used[2147483647] = {0};

    while (i < count) {
        if (!used[values[i]]) {
            tab[j] = values[i];
            used[values[i]] = 1;
            pResultCount++;
            j++;
        }
        i++;
    }
    tab = (int *)realloc(tab, sizeof(int)*(*pResultCount));
    return tab;
}