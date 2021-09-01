#include <criterion/criterion.h>
#include <stdbool.h>

bool divisible_by_three(const char* strin);

Test(Sample_Cases, should_pass_all_the_tests_provided) {
    cr_assert_eq(divisible_by_three("123"), true, "Should return true if the sum of the given digits is divisible by 3.");
    cr_assert_eq(divisible_by_three("19254"), true, "Should return true if the sum of the given digits is divisible by 3.");
    cr_assert_eq(divisible_by_three("88"), false, "Should return false if the sum of the given digits is not divisible by 3.");
    cr_assert_eq(divisible_by_three("1"), false, "Should return false if the sum of the given digits is not divisible by 3.");
}