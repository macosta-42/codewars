#include <criterion/criterion.h>

void tester(int co, int ex, const char *expected);

Test(Sample_Tests, should_pass_all_the_tests_provided)
{
    tester(  3, 2,  "1x^3" );
    tester( 12, 5,  "2x^6" );
    tester( 20, 1, "10x^2" );
    tester( 40, 3, "10x^4" );
    tester( 90, 2, "30x^3" );
}