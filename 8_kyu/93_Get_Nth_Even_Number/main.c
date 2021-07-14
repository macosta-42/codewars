#include <criterion/criterion.h>

int nth_even(int n);

Test(nth_even, should_pass_some_example_test_cases){
    cr_assert(nth_even(1) == 0);
    cr_assert(nth_even(3) == 4);
    cr_assert(nth_even(100) == 198);
    cr_assert(nth_even(1298734) == 2597466);
}