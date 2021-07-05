#include <math.h>

float opposite(float num) {
    return num <= 0 ? fabsf(num) : -fabsf(num);
}