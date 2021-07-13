#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

bool is_opposite(const char *s1, const char *s2) {
    bool  res = false;
    int   i = 0;

    if (strlen(s1) != strlen(s2))
        return false;
    while (s1 && s1[i] != '\0' && s2 && s2[i] != '\0') {
        if (abs(s1[i] - s2[i]) == 32)
            res = true;
        else
            return false;
        i++;
    }
    return res;
}