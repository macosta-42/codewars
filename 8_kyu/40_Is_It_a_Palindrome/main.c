#include <criterion/criterion.h>
#include <stdbool.h>

void tester(char* strin, bool expected);

bool is_palindrome(const char *str_in);

Test(Sample_Tests, should_pass_all_the_tests_provided) {
    tester("a",      true);
    tester("aba",    true);
    tester("Abba",   true);
    tester("hello", false);
}