#include <stddef.h>
#include <math.h>

int square_sum(const int *values, size_t count) {
    int sum = 0;

    for (size_t i = 0; i < count; i++)
        sum += pow(values[i], 2);
    return sum;
}