#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char* are_you_playing_banjo(const char* name) {
    char  *dst = (char *)calloc(strlen(name) + 21, sizeof(char)); //Allocation for the longest sentence

    if (name[0] == 'r' || name[0] == 'R')
        sprintf(dst, "%s plays banjo", name);
    else
        sprintf(dst, "%s does not play banjo", name);
    dst = (char*)realloc(dst, sizeof(char) * strlen(dst) + 1); //realloc in case of shortest sentence
    return dst;
}