#include <criterion/criterion.h>

int basic_op(char op, int value1, int value2);

Test(ExampleTests, ShouldPassAllTheTestsProvided) {
    cr_assert_eq(basic_op('+', 4, 7), 11);
    cr_assert_eq(basic_op('-', 15, 18), -3);
    cr_assert_eq(basic_op('*', 5, 5), 25);
    cr_assert_eq(basic_op('/', 49, 7), 7);
}