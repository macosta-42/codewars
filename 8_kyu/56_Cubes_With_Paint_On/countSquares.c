#include <math.h>

int countSquares(int cuts) {
    return cuts == 0 ? 1 : pow(cuts + 1, 3) - pow(cuts - 1, 3);
}