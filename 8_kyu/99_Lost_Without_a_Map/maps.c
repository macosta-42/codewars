#include <stddef.h>
#include <stdlib.h>
#include <string.h>

// return a *new, dynamically allocated* array with each element doubled.
int *maps(const int *arr, size_t size) {
    int *new = (int *)malloc(sizeof(int) * size);

    memset(new, 0, size);
    for (size_t  i = 0; i < size; i++)
        new[i] = arr[i] * 2;
    return new;
}