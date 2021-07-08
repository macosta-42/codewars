#include <stdlib.h>
#include <string.h>

char *remove(const char *str_in, int n) {
    int   i = 0, j = 0;
    char  *str_out = calloc(strlen(str_in) + 1, sizeof(char));

    while (str_in && str_in[i] != '\0') {
        if (n && str_in[i] == '!') {
            i++;
            n--;
        }
        else
            str_out[j++] = str_in[i++];
    }
    return str_out;
}