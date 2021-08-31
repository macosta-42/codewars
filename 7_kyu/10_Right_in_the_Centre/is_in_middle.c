#include <string.h>

int is_in_middle(const char *str) {
    if (strlen(str) % 2 != 0)
        return str[(strlen(str) / 2) - 1] == 'a' && str[(strlen(str) / 2)] == 'b' && str[(strlen(str) / 2) + 1] == 'c';
    else
        return str[(strlen(str) / 2) - 2] == 'a' && str[(strlen(str) / 2) - 1] == 'b' && str[(strlen(str) / 2)] == 'c';
}