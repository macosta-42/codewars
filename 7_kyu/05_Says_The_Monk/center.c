#include <string.h>
#include <stdlib.h>

char *center(const char *str, int width, char fill) {
    int len = strlen(str);

    if (len >= width)
        return strdup(str);

    char * dst = calloc(width + 1, 1);

    memset(dst, fill, width);
    memcpy(&dst[(width - len + 1) / 2], str, len);

    return dst;
}