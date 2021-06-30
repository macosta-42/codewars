#include <stdio.h>
#include <stdlib.h>

static int  nbr_digit(n) {
    int count = 0;

    while(n != 0) {
        n = n / 10;
        count++;
    }
    return count;
}

int super_size(int value) {
    int   i = 0, j;
    char  str[nbr_digit(value) + 1];
    char  tmp;

    sprintf(str, "%d", value);
    while (i < nbr_digit(value)) {
        j = i + 1;
        while (j < nbr_digit(value)) {
            if (str[j] > str[i]) {
                tmp = str[i];
                str[i] = str[j];
                str[j] = tmp;
            }
            j++;
        }
        i++;
    }
    return strtol(str, 0, 10);
}