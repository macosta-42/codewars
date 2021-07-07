#include <math.h>

int countSquares(int cuts) {
    return cuts ? 6 * pow(cuts, 2) + 2 : 1;
}