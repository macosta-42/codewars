#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *hello(const char *name) {
    int len = strlen(name), i = 0;
    char *str = calloc(8 + strlen(name) + 1, sizeof(char));

    strcpy(str, "Hello, ");
    if (len) {
        strcat(str, name);
        str[7] = toupper(str[7]);
        while (i++ < len)
            str[i + 7] = tolower(str[i + 7]);
        strcat(str, "!");
    }
    else strcat(str, "World!");
    return str;
}