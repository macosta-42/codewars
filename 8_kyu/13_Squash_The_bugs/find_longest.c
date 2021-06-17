#include <stddef.h>
#include <ctype.h>

size_t find_longest(const char *words)
{
    size_t length = 0, max_length = 0, i = 0, j = 0;
    const char *pchar = words;

    while (pchar && pchar[i] != '\0')
    {
        if (isspace(pchar[i]))
        {
            if (length > max_length)
            {
                max_length = length;
            }
            length = 0;
        }
        else if (pchar[j] == '\0')
        {
            length++;
            if (length > max_length)
            {
                max_length = length;
            }
        }
        else
            length++;
        i++;
        j = i + 1;
    }

    return max_length;
}