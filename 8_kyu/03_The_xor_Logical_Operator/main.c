
#include <criterion/criterion.h>
#include <stdbool.h>

int xor(int, int);

Test(ExampleTests, ShouldPassAllTheTestsProvided) {
cr_assert_eq(xor(false, false), false, "false xor false == false");
cr_assert_eq(xor(true, false), true, "true xor false == true");
cr_assert_eq(xor(false, true), true, "false xor true == true");
cr_assert_eq(xor(true, true), false, "true xor true == false");
}