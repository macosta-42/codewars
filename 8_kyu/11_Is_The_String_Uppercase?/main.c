#include <criterion/criterion.h>

int is_uppercase(const char *source);

Test(ExampleTests, ShouldPassAllTheTestsProvided) {
{
const char *source = "c";
const bool expected = false;
const bool actual = is_uppercase(source);
cr_assert_eq(
        expected, actual, "\"%s\" Expected: %s Actual: %s",
source, expected ? "is uppercase" : "is not uppercase",
actual ? "is uppercase" : "is not uppercase");
}