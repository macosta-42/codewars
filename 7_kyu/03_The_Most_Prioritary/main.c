#include <criterion/criterion.h>

char* arbitrate(const char* input, int len);

Test(sample_tests, should_pass_all_the_tests_provided) {
    cr_assert_str_eq(arbitrate("001000101", 9), "001000000");
    cr_assert_str_eq(arbitrate("000000101", 9), "000000100");
    cr_assert_str_eq(arbitrate("0000", 4), "0000");
}