#include <stdbool.h>
#include <stdlib.h>

typedef unsigned long long ull;

char *bonus_time(ull salary, bool bonus) {
    char *buf;
    asprintf(&buf, "$%llu", bonus ? 10 * salary : salary);
    return buf;
}