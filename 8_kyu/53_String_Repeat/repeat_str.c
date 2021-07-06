#include <string.h>
#include <stdlib.h>

char *repeat_str(size_t count, const char *src) {
    int     i = 0, j = 0;
    char    *dst = calloc(strlen(src) * count, sizeof(char));;

    while (count) {
        j = 0;
        while (src && src[j] != '\0') {
            dst[i] = src[j];
            i++;
            j++;
        }
        count--;
    }
    return dst;
}