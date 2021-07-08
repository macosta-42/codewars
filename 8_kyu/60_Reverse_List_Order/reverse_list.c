#include <stdlib.h>

int *reverse_list(const int *arr, size_t len) {
    int i = 0;
    int *rev_arr = malloc(sizeof(int) * len);

    while (len--)
        rev_arr[i++] = arr[len];
    return rev_arr;
}