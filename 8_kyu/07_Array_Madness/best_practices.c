#include <stdbool.h>
#include <stddef.h>
#include <math.h>

bool array_madness(size_t n1, const int arr1[n1], size_t n2, const int arr2[n2]) {
    int sum = 0;
    while(n1) sum += pow(arr1[--n1], 2);
    while(n2) sum -= pow(arr2[--n2], 3);
    return sum > 0;
}