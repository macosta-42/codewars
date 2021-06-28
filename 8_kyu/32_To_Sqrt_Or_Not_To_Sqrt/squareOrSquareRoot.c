#include <math.h>

static int findSQRT(int number) {
    int start = 0, end = number, mid;

    while (start <= end) {
        mid = (start + end) / 2;
        if (mid * mid == number)
            return mid;
        if (mid * mid < number)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

int* squareOrSquareRoot(int* array, int length)
{
    int i = 0;

    while (i < length) {
        if (findSQRT(array[i]) != -1)
            array[i] = findSQRT(array[i]);
        else if (findSQRT(array[i]) == -1)
            array[i] = pow(array[i], 2);
        i++;
    }
    return array;
}