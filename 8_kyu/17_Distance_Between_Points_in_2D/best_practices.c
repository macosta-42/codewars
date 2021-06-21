#include <math.h>

typedef struct Point {
    double x;
    double y;
} point;

double distance_between_points(point a, point b) {
    return hypot(a.x - b.x, a.y - b.y);
}