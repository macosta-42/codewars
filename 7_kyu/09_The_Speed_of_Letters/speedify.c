#include <stdlib.h>
#include <string.h>

char *speedify(const char *input)
{
    int len = strlen(input);
    char *dst = calloc(len + 26, sizeof(char));

    for (int i = 0; i < len + 26; i++)
        dst[i] = ' ';

    for (int i = 0; i < len; i++)
        dst[input[i]-'A'+i] = input[i];

    for (int i = len + 25; i >= 0; i--) {
        if (dst[i] == ' ')
            dst[i] = '\0';
        else
            break;
    }

    dst = (char *)realloc(dst, sizeof(char) * strlen(dst) + 1);

    return dst;
}