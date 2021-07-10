#include <stdio.h>

void derive(int coefficient, int exponent, char *derivative) {
    sprintf(derivative, "%dx^%d", coefficient * exponent, exponent - 1);
}