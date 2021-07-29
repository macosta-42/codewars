#include <string.h>
char most_val_char(const char *str_in) {
    int maxi = -1;
    char start[256], c = 127;
    memset(start, -1, 256);

    for(char* p = (char*)str_in; *p; p++) {
        if(start[(int)*p] < 0)
            start[(int)*p] = p - str_in;

        int value = p - str_in - start[(int)*p];
        if(value > maxi) {
            maxi = value;
            c = *p;
        }
        else if(value == maxi && *p < c)
            c = *p;
    }

    return c;
}