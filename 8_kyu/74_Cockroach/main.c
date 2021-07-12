#include <criterion/criterion.h>
#include <stdio.h>

int cockroach_speed(double s);
static void do_test(double s, int expected);

Test(Sample_Tests, Basic_Tests)
{
    do_test(cockroach_speed(1.08), 30);
    do_test(cockroach_speed(1.09), 30);
    do_test(cockroach_speed(0),     0);
    fflush(stdout);
    cr_assert(true);
}
static void do_test(double s, int expected)
{
    int actual = cockroach_speed(s);
    if ( s != expected )
        cr_assert_eq(actual, expected, "Expected %d\nReceived %d\n", expected, actual);
}