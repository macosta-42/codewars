#include <criterion/criterion.h>
#include <stdio.h>
#include <string.h>

int min(int*, int);
int max(int*, int);

void formatArray(char* result, int* array, int arrayLength) {
    char tmp[16];
    for (int i = 0; i < arrayLength - 1; i++) {
        sprintf(tmp, "%d, ", array[i]);
        strcat(result, tmp);
    }
    sprintf(tmp, "%d", array[arrayLength - 1]);
    strcat(result, tmp);
}

void testMin(int* array, int arrayLength, int expected) {
    int actual = min(array, arrayLength);
    char arrayStr[16 * arrayLength + 3];
    arrayStr[0] = 0;
    formatArray(arrayStr, array, arrayLength);
    cr_assert_eq(actual, expected, "min([%s], %i)\nExpected: %i\nActual: %i\n", arrayStr, arrayLength, expected, actual);
}

void testMax(int* array, int arrayLength, int expected) {
    int actual = max(array, arrayLength);
    char arrayStr[16 * arrayLength + 3];
    arrayStr[0] = 0;
    formatArray(arrayStr, array, arrayLength);
    cr_assert_eq(actual, expected, "max([%s], %i)\nExpected: %i\nActual: %i\n", arrayStr, arrayLength, expected, actual);
}

Test(exampleTests, should_pass_all_the_tests_provided) {
    int array1[7] = {-52, 56, 30, 29, -54, 0, -110};
    testMin(array1, 7, -110);
    int array2[5] = {42, 54, 65, 87, 0};
    testMin(array2, 5, 0);
    int array3[8] = {4,6,2,1,9,63,-134,566};
    testMax(array3, 8, 566);
    int array4[1] = {5};
    testMax(array4, 1, 5);
}