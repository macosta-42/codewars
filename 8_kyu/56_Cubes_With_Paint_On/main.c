#include <criterion/criterion.h>

int countSquares(int cuts);

void test(int cuts, int expected) {
    int submitted = countSquares(cuts);
    cr_assert_eq(expected,submitted,"Expected: %d  Submitted: %d\n",expected,submitted);
}

Test(Sample_Tests, should_pass_all_the_tests_provided) {
    test(5, 152);
    test(16, 1538);
    test(23, 3176);
}