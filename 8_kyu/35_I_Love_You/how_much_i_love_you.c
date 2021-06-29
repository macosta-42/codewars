#include <stddef.h>

const char* how_much_i_love_you(int nb_petals) {
    char *love[] = {
            "I love you",
            "a little",
            "a lot",
            "passionately",
            "madly",
            "not at all"
    };
    return love[(nb_petals - 1) % 6];
}