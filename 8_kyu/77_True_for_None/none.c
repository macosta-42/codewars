#include <stdbool.h>
#include <stddef.h>

typedef bool (*Predicate)(int);

bool none(const int* arr, size_t size, Predicate fun)
{
    while (size--)
        if (fun(arr[size]))
            return false;
    return true;
}