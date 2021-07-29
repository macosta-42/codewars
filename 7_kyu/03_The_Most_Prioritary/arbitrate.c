#include <stdlib.h>
#include <string.h>

char* arbitrate(const char* src, int len){
    int   flag = 0;
    char  *dst = calloc(strlen(src) + 1, sizeof(char));

    for (int i = 0; i < len; i++) {
        if (src[i] == '1' && flag == 0) {
            dst[i] = src[i];
            flag = 1;
        }
        else if (src[i] == '1' && flag == 1)
            dst[i] = '0';
        else
            dst[i] = src[i];
    }
    return dst;
}