#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

typedef unsigned long long ull;

char *bonus_time(ull salary, bool bonus) {
    char  *dst = (char *)calloc(21, sizeof(char)); // long long = 19 max digits + 1 currency + 1 '\0'
    sprintf(dst, "$%llu", bonus ? salary * 10 : salary);
    return dst;
}