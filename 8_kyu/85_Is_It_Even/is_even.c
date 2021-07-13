#include <stdbool.h>
#include <math.h>

bool is_even(double n) {
    return !fmod(n, 2);
}