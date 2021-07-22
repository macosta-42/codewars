#include <criterion/criterion.h>

char* position(char);

Test(basicTests, should_pass_all_the_tests_provided) {
    cr_assert_str_eq(position('a'), "Position of alphabet: 1");
    cr_assert_str_eq(position('z'), "Position of alphabet: 26");
    cr_assert_str_eq(position('e'), "Position of alphabet: 5");
}