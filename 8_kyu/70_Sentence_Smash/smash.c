#include <string.h>
#include <stdlib.h>

char *smash(const char **words, size_t count) {
    size_t len = 0, i = 0;

    while (i < count) {
        len += strlen(words[i]);
        i++;
    }

    char *str = calloc(len + count, sizeof(char));
    i = 0;
    while (i < count) {
        strcat(str, words[i]);
        if (i + 1 != count)
            strcat(str, " ");
        i++;
    }
    return str;
}