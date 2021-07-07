#include <stdlib.h>

const char* elevator(int left, int right, int call) {
    return abs(left - call) >= abs(right - call) ? "right" : "left";
}
