#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static int cmp(char *a, char *b) { return *b - *a; }

int super_size(int value) {
    char s[11];
    sprintf(s, "%d", value);
    qsort(s, strlen(s), 1, (int(*)(const void*,const void*))cmp);
    sscanf(s, "%d", &value);
    return value;
}