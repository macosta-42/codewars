#include <stddef.h>

size_t *monkey_count(size_t n, size_t *c) {
    size_t* ptr = malloc(n * sizeof(size_t));

    *c = n;
    for (int i = 0; i < n; i++) ptr[i] = i + 1;
    return ptr;
}