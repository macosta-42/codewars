#include <criterion/criterion.h>
#include <stddef.h>

size_t str_count(const char *str, char letter);

Test(str_count, should_pass_sample_tests) {
    cr_assert_eq(str_count("Hello", 'o'), 1);
    cr_assert_eq(str_count("Hello", 'l'), 2);
    cr_assert_eq(str_count("", 'z'), 0);
}