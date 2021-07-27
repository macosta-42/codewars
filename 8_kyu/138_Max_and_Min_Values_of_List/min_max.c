#include <stdio.h>

int max(int* array, int arrayLength) {
    int i = 0, max = array[0];

    while (i < arrayLength) {
        if (array[i] > max)
            max = array[i];
        i++;
    }
    return max;
}

int min(int* array, int arrayLength)
{
    int i = 0, min = array[0];

    while (i < arrayLength) {
        if (min > array[i])
            min = array[i];
        i++;
    }
    return min;
}