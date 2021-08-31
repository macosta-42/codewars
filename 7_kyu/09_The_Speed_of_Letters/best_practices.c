#include <stdlib.h>
#include <string.h>

char *speedify(const char *input)
{
    int len = strlen(input);
    char *rtn = calloc(len + 26, sizeof(char));

    for (int i = 0; i < len + 26; i++) {
        rtn[i] = ' ';
    }
    for (int i = 0; i < len; i++) {
        rtn[input[i]-'A'+i] = input[i];
    }
    for (int i = len + 25; i >= 0; i--) {
        if (rtn[i] == ' ') {
            rtn[i] = '\0';
        }
        else {
            break;
        }
    }
    return rtn;
}