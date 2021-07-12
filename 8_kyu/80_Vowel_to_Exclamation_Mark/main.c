#include <criterion/criterion.h>
#include <stdio.h>

char *replace(const char *s);
static void doTest(const char *s, const char *expected);

Test(Sample_Test, Basic_Tests)
{
    doTest("Hi!",      "H!!");
    doTest("!Hi! Hi!", "!H!! H!!");
    doTest("aeiou",    "!!!!!");
    doTest("ABCDE",    "!BCD!");
    fflush(stdout);
    cr_assert(true);
}
static void doTest(const char *s, const char *expected)
{
    char *actual = replace(s);
    if ( !actual ) cr_assert_not_null(actual, "Received NULL ptr\n");
    if ( strcmp(actual, expected) != 0 ) cr_assert_str_eq(actual, expected, "Expected \"%s\"\nReceived \"%s\"", expected, actual);
    free(actual);
}