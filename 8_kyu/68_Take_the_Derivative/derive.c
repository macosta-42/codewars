#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void derive(int coefficient, int exponent, char *derivative) {
    char *str = (char *)calloc(16, sizeof(char));

    sprintf(str, "%d", exponent - 1);
    sprintf(derivative, "%d", coefficient * exponent);
    strcat(derivative, "x^");
    strcat(derivative, str);
    free(str);
}