#include <criterion/criterion.h>

int other_angle(int a, int b);
void tester(int a, int b, int c);

Test(Sample_Cases, should_pass_these_four_tests) {
    tester(30,  60,  90);
    tester(60,  60,  60);
    tester(43,  78,  59);
    tester(10,  20, 150);
}
