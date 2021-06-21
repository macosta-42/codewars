#include <math.h>

typedef struct Point {
    double x;
    double y;
} point;

double distance_between_points(point a, point b) {
    double result = 0;

    result = sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
    return result;
}