#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *womens_age(int age) {
    char  *dst = (char *)calloc(32, sizeof(char));

    sprintf(dst, "%d? That's just 2%d, in base %d!", age, age % 2, age / 2);
    dst = (char *)realloc(dst, sizeof(char) * strlen(dst) + 1);
    return dst;
}