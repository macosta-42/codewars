#include <stdbool.h>
#include <stddef.h>

typedef bool (*Predicate)(int);

bool any(const int* arr, size_t size, Predicate fun) {
    while (size--)
        if (fun(arr[size]))
            return true;
    return false;
}