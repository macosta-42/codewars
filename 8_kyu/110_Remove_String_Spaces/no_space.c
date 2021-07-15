#include <stdlib.h>
#include <string.h>

char *no_space(const char *src) {
    char  *dst = (char *)calloc(strlen(src) + 1, sizeof(char));

    for (int i = 0, j = 0; src && src[i] != '\0'; i++)
        if (src[i] != ' ')
            dst[j++] = src[i];
    dst = realloc(dst, sizeof(char) * strlen(dst) + 1);
    return dst;
}