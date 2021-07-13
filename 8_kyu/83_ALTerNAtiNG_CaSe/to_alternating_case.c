#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *to_alternating_case(const char *s) {
    int   i = 0;
    char  *d = (char *)calloc(strlen(s) + 1, sizeof(char));

    while (s && s[i] != '\0') {
        if (isupper(s[i]))
            d[i] = tolower(s[i]);
        else if (islower(s[i]))
            d[i] = toupper(s[i]);
        else
            d[i] = s[i];
        i++;
    }
    return d;
}