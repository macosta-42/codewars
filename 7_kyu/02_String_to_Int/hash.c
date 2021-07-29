#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int hash(char* str);

int hash(char* str) {
    int a = 0, b = 0, c = 0, d = 0, total_number_of_spaces = 0;

    for (int i = 0; str && str[i] != '\0'; i++){
        a += str[i];
        if (str[i] == ' ')
            total_number_of_spaces++;
    }
    for (int i = 0, j = i + 1; j < (int)strlen(str); i++, j++)
        b += str[j] - str[i];

    c = (a | b) & ((~a) << 2);
    d = c ^ (32 * (total_number_of_spaces + 1));

    return d;
}
