#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char *replace(const char *src) {
    bool  is_vowel = false;
    int   i = 0, j = 0, k = 0;
    char  *vowel = "aeiouAEIOU";
    char  *dst = (char *)calloc(strlen(src) + 1, sizeof(char));

    while (src && src[i] != '\0') {
        k = 0;
        is_vowel = false;
        while (vowel && vowel[k] != '\0') {
            if (src[i] == vowel[k])
                is_vowel = true;
            k++;
        }
        if (is_vowel) {
            dst[j++] = '!';
            i++;
        }
        else
            dst[j++] = src[i++];
    }
    return dst;
}