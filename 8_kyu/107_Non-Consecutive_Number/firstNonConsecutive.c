// For c the function should return false if no non consecutive numbers are found
// It should return true if one is found and the pointer arg first set to the value

#include <stdbool.h>
#include <stdio.h>

bool firstNonConsecutive (const int arr[], const int length, int *first) {
    for(int i = 0; i < length; i++) {
        if (i > 0 && arr[i] != arr[i-1]+1) {
            *first = arr[i];
            return true;
        }
    }
    return false;
}