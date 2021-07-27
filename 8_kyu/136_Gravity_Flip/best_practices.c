#include <stddef.h>
#include <stdlib.h>
#include <string.h>

int int_asc_cmp (const void *a, const void *b) { return (*(int*)a - *(int*)b); }
int int_desc_cmp (const void *a, const void *b) { return (*(int*)b - *(int*)a); }

void flip(char d, const int *array, size_t n, int *result) {
    memcpy(result, array, n * sizeof(int));
    qsort(result, n, sizeof(int), d == 'R' ? int_asc_cmp : int_desc_cmp);
}