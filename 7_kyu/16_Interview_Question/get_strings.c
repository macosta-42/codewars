#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char* get_strings(const char *city) {
    int i = 0, j = 0, sum = 0;
    int used[255] = {0};
    char *str = (char *)calloc(strlen(city) + 1, sizeof(char));

    while (city && city[i] != '\0') {
        str[i] = tolower(city[i]);
        i++;
    }
    i = 0;
    while (str && str[i] != '\0') {
        used[(unsigned char)str[i]]++;
        i++;
    }
    i = 0;
    while (i < 255) {
        sum += used[i];
        i++;
    }
    char *dst = (char *)calloc(strlen(city) * 3 + sum + 1, sizeof(char));
    i = 0;
    while (str && str[i] != '\0') {
        if (used[(unsigned char)str[i]] > 0 && isalpha(str[i])) {
            dst[j] = str[i];
            j++;
            dst[j] = ':';
            j++;
            while (used[(unsigned char)str[i]] > 0) {
                dst[j] = '*';
                used[(unsigned char)str[i]]--;
                j++;
            }
            dst[j] = ',';
            j++;
            i++;
        }
        else
            i++;
    }
    dst[j - 1] = '\0';
    free(str);
    return dst;
}
