#include <criterion/criterion.h>

int multiply(int, int);

Test(the_multiply_function, should_pass_all_the_tests_provided) {
    cr_assert_eq(multiply(2, 3), 6);
}