#include <criterion/criterion.h>

char *makeUpperCase (char *string);

Test(The_makeUpperCase_function, should_pass_all_the_tests_provided) {
    char s[] = "hello";
    cr_assert_str_eq(makeUpperCase(s), "HELLO");
}