#include <stdbool.h>

bool is_opposite(const char *s1, const char *s2) {

    if (((s1[0] == '\0') && (s2[0] == '\0')) || (strlen(s1) != strlen(s2)))
        return false;

    for (int i = 0; i < strlen(s1); i++)
        if (abs(s1[i]-s2[i]) != 32)
            return false;

    return true;
}