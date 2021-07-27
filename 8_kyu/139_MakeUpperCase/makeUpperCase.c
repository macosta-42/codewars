#include <ctype.h>

char *makeUpperCase (char *str) {
    for (int i = 0; str && str[i] != '\0'; i++)
        str[i] = toupper(str[i]);
    return str;
}