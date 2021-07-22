#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int get_number_from_string(const char *src) {
    int   ans = 0, j = 0;
    char  *tmp = calloc(strlen(src), sizeof(char));

    for (int i = 0; src && src[i] != '\0'; i++) {
        if (isdigit(src[i])) {
            tmp[j] = src[i];
            j++;
        }
    }
    ans = strtol(tmp, 0, 10);
    free(tmp);
    return ans;
}