#include <stddef.h>

size_t str_count(const char *str, char letter) {
    int count = 0;

    for (int i = 0; str && str[i] != '\0'; i++)
        if (str[i] == letter)
            count++;
    return count;
}