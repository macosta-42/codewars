
#include <stdbool.h>
#include <stddef.h>

bool include(const int* arr, size_t size, int item)
{
    while ( size-- ) if ( *(arr++) == item ) return true;
    return false;
}