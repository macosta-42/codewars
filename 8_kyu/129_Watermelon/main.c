#include <criterion/criterion.h>
#include <stdbool.h>
#include <stdio.h>

bool divide(unsigned weight);
static void do_test(unsigned weight, bool expected);
static void complete_tests();

Test(Solution_Test, basic_tests)
{
    do_test(  4, true );
    do_test(  2, false);
    do_test(  5, false);
    do_test( 88, true );
    do_test(100, true );
    do_test( 67, false);
    do_test( 90, true );
    do_test( 10, true );
    do_test( 99, false);
    do_test( 32, true );
    complete_tests();
}
static void do_test(unsigned weight, bool expected)
{
#define b2s(flag) ((flag) ? "true" : "false")
    printf("Testing for a weight of %uKg\n", weight);
    cr_assert_eq(divide(weight), expected, "Expected %s\nReceived %s\n", b2s(expected), b2s(!expected));
}
static void complete_tests()
{
    fflush(stdout);
    cr_assert(true);
}