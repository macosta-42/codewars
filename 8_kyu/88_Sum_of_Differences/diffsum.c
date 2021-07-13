#include <stddef.h>
#include <string.h>

int diffsum(const int *arr, size_t n) {
    size_t  i = 0, j = 0;
    int     swap = 0, sum = 0;
    int     tab[n];

    memset(tab, 0, sizeof(tab));
    while (i < n) {
        tab[i] = arr[i];
        i++;
    }
    i = 0;
    while (i < n) {
        j = i + 1;
        while (j < n) {
            if (tab[i] < tab[j]) {
                swap = tab[i];
                tab[i] = tab[j];
                tab[j] = swap;
            }
            j++;
        }
        i++;
    }
    i = 0;
    while (i + 1 < n) {
        sum += tab[i] - tab[i + 1];
        i++;
    }