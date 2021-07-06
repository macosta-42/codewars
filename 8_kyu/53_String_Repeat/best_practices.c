#include <string.h>

char *repeat_str(size_t count, const char *src) {
    int length = strlen(src);
    char* dest = malloc(count * length * sizeof(char));

    for (int i = 0; i < count; i++) {
        strcpy(dest + i * length, src);
    }
    return dest;
}