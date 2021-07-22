#include <criterion/criterion.h>

void tester(int mpg, double kpl);

Test(Example_Cases, should_pass_all_tests) {
    tester( 12,  4.25 );
    tester( 24,  8.50 );
    tester( 36, 12.74 );
}