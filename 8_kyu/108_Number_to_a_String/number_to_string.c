#include <stdlib.h>

const char* number_to_string(int number) {
    char  *buff = NULL;

    if (!asprintf(&buff, "%d", number))
        return NULL;
    return buff;
}