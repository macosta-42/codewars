#include <math.h>

int index (int *array, int size, int n) {
    return n >= size ? -1 : pow(array[n], n);
}