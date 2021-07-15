#include <stdio.h>

char* are_you_playing_banjo(const char* name) {
    const char* banjo = (name[0] == 'R' || name[0] == 'r')
                        ? " plays banjo"
                        : " does not play banjo";
    char* ret = NULL;
    asprintf(&ret, "%s%s", name, banjo);
    return ret;
}