
#include <stdbool.h>
#include <stddef.h>

bool include(const int* arr, size_t size, int item)
{
    int i = 0;

    while (i < size)
        if (arr[i++] == item)
            return true;
    return false;
}