#include <string.h>

int
is_in_middle (const char* str)
{
    const size_t str_len = strlen(str);

    const char* substr = "abc";
    const size_t substr_len = strlen(substr);

    if (str_len % 2 != 0)
        return !strncmp(&str[str_len / 2 - 1], substr, substr_len);

    return !strncmp(&str[str_len / 2 - 1], substr, substr_len) ||
           !strncmp(&str[str_len / 2 - 2], substr, substr_len);
}