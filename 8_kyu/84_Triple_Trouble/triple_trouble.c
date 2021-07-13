#include <string.h>
#include <stdlib.h>


char *triple_trouble(const char *one, const char *two, const char *three) {
    int   i = 0, j = 0;
    int   len = strlen(one) + strlen(two) + strlen(three) + 1;
    char  *dst = (char *)calloc(len, sizeof(char));

    while (one && one[i] != '\0' && two && two[i] != '\0' && three && three[i] != '\0') {
        dst[j++] = one[i];
        dst[j++] = two[i];
        dst[j++] = three[i];
        i++;
    }
    return dst;
}