#include <string.h>

char* position(char alphabet) {
    char *str;

    asprintf(&str, "Position of alphabet: %d", alphabet - 'a' + 1);
    return str;
}