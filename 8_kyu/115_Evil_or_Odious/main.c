#include <criterion/criterion.h>

const char *evil(int value);

Test(ExampleTests, ShouldPassAllTheTestsProvided) {
    cr_assert_str_eq(evil(1),"It's Odious!");
    cr_assert_str_eq(evil(2),"It's Odious!");
    cr_assert_str_eq(evil(3),"It's Evil!");
}