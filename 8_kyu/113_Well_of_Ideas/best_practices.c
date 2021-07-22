#include <stddef.h>
const char* well(size_t n, const char const* ideas[n]) {
    int good_ideas = 0;

    for(int i=0; i < n; i++) if(ideas[i][0] == 'g') good_ideas++;
    return !good_ideas?"Fail!":((good_ideas<=2)?"Publish!":"I smell a series!");
}