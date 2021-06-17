#include <stddef.h>
#include <ctype.h>

size_t find_longest(const char *words) {
    size_t length = 0, max_length = 0;
    const char *pchar = words;

    char c;
    do {
        c = *pchar++;
        if (isspace(c) || c == 0) {
            if (length > max_length) {
                max_length = length;
            }
            length = 0;
        } else {
            length++;
        }
    } while (c);

    return max_length;
}