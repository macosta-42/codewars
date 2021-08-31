#include <stdlib.h>
#include <string.h>

char* stringLeftStrip(char* target, const char* chars) {
    if (chars == NULL) chars = " ";
    size_t strip_len = strspn(target, chars);

    return memmove(target, target + strip_len, strlen(target) - strip_len + 1);
}