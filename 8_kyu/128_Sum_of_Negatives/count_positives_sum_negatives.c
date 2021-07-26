#include <stddef.h>

void count_positives_sum_negatives(
        int *values, size_t count, int *positivesCount, int *negativesSum)
{
    *positivesCount = *negativesSum = 0;
    for (size_t i = 0; i < count; i++) {
        if (0 < values[i])
            *positivesCount += 1;
        else if (values[i] < 0)
            *negativesSum += values[i];
    }
}

// Please store the positives count in the memory, pointed to
// by the positivesCount parameter.

// Please store the negatives sum in the memory, pointed to
// by the negativesSum parameter.