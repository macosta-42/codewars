#include <stdio.h>
#include <stdlib.h>

char *integrate(int coef, int exp) {
    char  *buff = (char *)calloc(34, sizeof(char));
    sprintf(buff, "%dx^%d", coef / (exp + 1), exp + 1);
    return buff;
}