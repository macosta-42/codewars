#include <stddef.h>
#include <stdlib.h>

size_t *monkey_count(size_t n, size_t *pResultCount) {
    size_t  i = 0;
    size_t  *arr = malloc(sizeof(size_t) * n);

    while (i < n) {
        arr[i] = i + 1;
        i++;
    }
    *pResultCount = n;
    return arr;
}

// Please make sure you store the number of values
// in the array you are returning from the function
// in the memory pointed to by the pResultCount
// pointer.