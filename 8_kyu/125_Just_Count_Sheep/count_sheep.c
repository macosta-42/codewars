#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char* count_sheep(int n) {
    int   j = 0;
    char  *str = (char *)calloc(25 * n + 1, sizeof(char));

    for (int i = 0; i < n; i++) {
        sprintf(str + j, "%d sheep...", i + 1);
        j = strlen(str);
    }
    str = (char *)realloc(str, sizeof(char) * strlen(str) + 1);
    return str;
}