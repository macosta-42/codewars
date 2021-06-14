#include <string.h>

int hex_to_dec(const char *source)
{
    int lenght = 0, decimal = 0, base = 1;

    lenght = strlen(source);
    while (lenght-- >= 0)
    {
        if (source[lenght] >= '0' && source[lenght] <= '9')
        {
            decimal += (source[lenght] - 48) * base;
            base *= 16;
        }
        else if (source[lenght] >= 'A' && source[lenght] <= 'F')
        {
            decimal += (source[lenght] - 55) * base;
            base *= 16;
        }
        else if (source[lenght] >= 'a' && source[lenght] <= 'f')
        {
            decimal += (source[lenght] - 87) * base;
            base *= 16;
        }
    }
    return decimal;
}