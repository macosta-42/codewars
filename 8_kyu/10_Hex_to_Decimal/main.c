#include <criterion/criterion.h>

int hex_to_dec(const char*);

Test(ExampleTests, ShouldPassAllTheTestsProvided) {
cr_assert_eq(hex_to_dec("1"), 1);
cr_assert_eq(hex_to_dec("a"), 10);
cr_assert_eq(hex_to_dec("10"), 16);
}