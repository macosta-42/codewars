#include <stdlib.h>

int getAge(const char *str) {
    return strtol(str, 0, 10);
}