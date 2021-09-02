#include <criterion/criterion.h>

void tester(const char *stones, unsigned expected);

Test(Examples, should_pass_all_tests)
{
    tester("RGBRGBRGGB",   1);
    tester("RGGRGBBRGRR",  3);
    tester("RRRRGGGGBBBB", 9);
}