#include <criterion/criterion.h>

char most_val_char(const char *str_in);
void tester(const char *str_in, char expected);

Test(Example_Tests, should_pass_all_the_tests_provided)
{
    tester("a",        'a');
    tester("aa",       'a');
    tester("bcd",      'b');
    tester("axyzxyz",  'x');
    tester("aabccc",   'c');
}