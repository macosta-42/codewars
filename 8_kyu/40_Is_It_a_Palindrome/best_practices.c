#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool is_palindrome(const char *s)
{
    int l = strlen(s);
    for(int i = 0; i < l; i++)
        if (tolower(s[i]) != tolower(s[--l]))
            return false;
    return true;
}