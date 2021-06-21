#include <criterion/criterion.h>

typedef struct Point {
    double x;
    double y;
} point;

void tester(point a, point b, double expected);

Test(Examples, should_pass_all_tests)
{
tester((point){3, 3}, (point){3, 3}, 0);
tester((point){1, 6}, (point){4, 2}, 5);
tester((point){-10.2, 12.5}, (point){0.3, 14.7}, 10.728001);
}