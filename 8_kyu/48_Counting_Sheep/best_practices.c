#include <stdbool.h>
#include <stddef.h>

size_t count_sheep(const bool *sheep, size_t count) {
    int number = 0;
    for (size_t n = 0; n < count; n++) {
        if (sheep[n] == true)
            number++;
        else if (sheep[n] != false)
            printf("Null or undefined");
    }
    return number;
}