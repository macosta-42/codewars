//FALSE

#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

struct maybe_double {
    bool value_exists;
    double value;
};

struct maybe_double parse_float(const char *input) {
    int                 i = 0;
    bool                minus = false;
    char *              endPtr;
    struct maybe_double out = {.value_exists = false};
    char *              before = (char *)calloc(strlen(input) + 1, sizeof(char));
    char *              after = (char *)calloc(strlen(input) + 1, sizeof(char));
    char *              dst = (char *)calloc(strlen(input) + 1, sizeof(char));

    while (input && input[i] != '.' && input[i] != '\0') {
        if (input[i] == '-') {
            minus = true;
            i++;
        }
        else if (isdigit(input[i])) {
            before[i] = input[i];
            i++;
        }
        else
            return out;
    }
    if (input[i] == '.'){
        i++;
        while (input && input[i] != '\0') {
            if (isdigit(input[i])) {
                after[i] = input[i];
                i++;
            }
            else
                return out;
        }
    }
    if (minus == true)
        sprintf(dst, "-%s.%s", before, after);
    else
        sprintf(dst, "%s.%s", before, after);
    out.value_exists = true;
    out.value = strtof(dst, &endPtr);
    free(before);
    free(after);
    free(dst);
    return out;
}
