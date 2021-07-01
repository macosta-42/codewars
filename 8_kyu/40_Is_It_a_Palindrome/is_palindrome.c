#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool is_palindrome(const char *str_in) {
    int l = 0, h = strlen(str_in) - 1;

    while (h > l ) {
        if (tolower(str_in[l++]) != tolower(str_in[h--]))
            return false;
    }
    return true;
}