#include <stdlib.h>

char *remove(char *s, int n) {
    char* r = (char*)calloc(strlen(s) + 1, sizeof(char));

    for (int i = 0, j = 0; i < strlen(s); i++)
        if (s[i] != '!' || --n < 0)
            r[j++] = s[i];
    return r;
}