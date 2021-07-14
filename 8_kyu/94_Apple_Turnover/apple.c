// you can return a string literal instead of allocating memory
#include <math.h>

const char *apple (int x) {
    return pow(x, 2) > 1000 ? "It's hotter than the sun!!" : "Help yourself to a honeycomb Yorkie for the glovebox." ;
}