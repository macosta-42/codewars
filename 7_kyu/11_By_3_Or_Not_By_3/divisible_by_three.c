#include <stdbool.h>
#include <stdlib.h>

bool divisible_by_three(const char* str) {
    int sum = 0, i = 0;

    while (str && str[i] != '\0') {
        sum += str[i] - '0';
        i++;
    }
    return (sum - 3 * (sum / 3)) == 0;
}