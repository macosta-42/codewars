#include <stdlib.h>

int string_to_number(const char *src) {
    return strtol(src, 0, 10);
}