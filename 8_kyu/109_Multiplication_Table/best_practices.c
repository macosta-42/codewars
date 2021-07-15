#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *multi_table(int num)
{
    char* result=calloc(1024, sizeof(char)); // return value will be passed to free

    for(int i=1;i<10;i++)
        sprintf(result,"%s%d * %d = %d\n",result,i,num,num*i);
    sprintf(result,"%s10 * %d = %d",result,num,num*10);
    result = (char *)realloc(result, sizeof(char) * strlen(result) + 1);
    return result;
}