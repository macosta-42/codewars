#include <string.h>

char *integrate(int coefficient, int exponent) {
    char* res;
    asprintf(&res, "%dx^%d", coefficient/++exponent, exponent);
    return res;
}