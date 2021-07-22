#include <stddef.h>
#include <string.h>

const char *well(size_t n, const char *ideas[n]) {
    int flag = 0;

    while(n--) {
        if (!strcmp(ideas[n], "good"))
            flag++;
    }
    return flag > 2 ? "I smell a series!" : flag > 0 ? "Publish!" : "Fail!";
}