//
// Created by Matthieu Costa on 01/06/2021.
//

#include <string.h>

int correct_tail(const char *body, const char tail[1]) {
    return body[strlen(body) - 1] == *tail;
}