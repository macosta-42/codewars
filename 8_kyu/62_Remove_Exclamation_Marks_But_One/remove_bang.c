#include <string.h>
#include <stdlib.h>

char *remove_bang(const char *src) {
    int   i = 0, j = 0;
    char  *dst = (char *)calloc(strlen(src) + 1, sizeof(char));

    if (dst == NULL) return NULL;
    while (src && src[i] != '\0') {
        if (src[i] == '!')
            i++;
        else
            dst[j++] = src[i++];
    }
    dst[j] = '!';
    return dst;
}