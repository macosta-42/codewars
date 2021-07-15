#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *multi_table(int num)
{
    char  *dst = (char *)calloc(43 * 10, sizeof(char));
    char  *buff = (char *)calloc(43, sizeof(char));
    for (int  i = 1, len = 0; i <= 10; i++){
        sprintf(buff, "%d * %d = %d\n", i, num, i * num);
        memcpy(dst + len, buff, strlen(buff));
        len += strlen(buff);
    }
    dst[strlen(dst) - 1] = '\0';
    dst = (char *)realloc(dst, sizeof(char) * strlen(dst) + 1);
    return dst;
}