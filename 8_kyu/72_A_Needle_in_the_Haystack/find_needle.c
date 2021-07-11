#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char *find_needle(const char **haystack, size_t count) {
    while (count--)
        if (!strcmp(haystack[count], "needle")) {
            char  *str = calloc(46, sizeof(char));
            sprintf(str, "found the needle at position %zu", count);
            return str;
        }
    return NULL;
}