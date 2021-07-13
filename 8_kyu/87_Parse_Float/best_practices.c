#include <stdbool.h>
#include <stdio.h>
#include <string.h>

struct maybe_double {
    bool value_exists;
    double value;
};

struct maybe_double parse_float(const char *input) {
    struct maybe_double out;
    int pos;
    out.value_exists = 1 == sscanf(input, "%lf%n", &out.value, &pos) && pos == strlen(input);
    return out;
}