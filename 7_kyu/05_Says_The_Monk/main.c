#include <stdlib.h>
#include <criterion/criterion.h>

char *center(const char *strng, size_t width, char fill);

void test_center(const char *strng, size_t width, char fill, const char* expected)
{
    char *actual = center(strng, width, fill);
    if (actual)
        cr_assert_str_eq(actual, expected,
                         "center(\"%s\", %zd, '%c') should return \"%s\", actual: \"%s\"",
                         strng, width, fill, expected, actual);
    else
        cr_assert_fail(
                "center(\"%s\", %zd, '%c') should return \"%s\", actual: NULL",
                strng, width, fill, expected);
    free(actual);
}

Test(center, should_pass_some_example_tests)
{
    test_center("a", 3, ' ', " a ");
    test_center("____abc___", 10, '_', "____abc___");
    test_center("abcdefg", 2, ' ', "abcdefg");
}