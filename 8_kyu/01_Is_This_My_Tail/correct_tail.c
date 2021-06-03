//
// Created by Matthieu Costa on 01/06/2021.
//

#include <string.h>

int correct_tail(const char *body, const char *tail) {
    int i;

    i = 0;
    while (body[i] != '\0')
        i++;
    i--;
    if (body[i] == tail[0])
        return 1;
    else
        return 0;
}