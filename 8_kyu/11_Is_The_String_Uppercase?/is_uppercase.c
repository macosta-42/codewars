#include <stdbool.h>

bool is_uppercase(const char *source)
{
    bool    flag = true;

    while (*source)
    {
        if (*source >= 97 && *source <= 122)
            flag = false;
        source++;
    }
    return flag;
}