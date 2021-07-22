#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char* position(char alphabet) {
    int   position = alphabet - 'a' + 1;
    char  *str = "Position of alphabet: ";
    char  *dst = malloc(sizeof(char) * 25);

    sprintf(dst, "%s%d", str, position);
    dst = (char *)realloc(dst, sizeof(char) * strlen(dst) + 1);
    return dst;
}