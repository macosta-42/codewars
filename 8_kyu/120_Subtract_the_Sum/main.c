#include <criterion/criterion.h>

char *subtract_sum(int);

Test(kata, basic_tests) {
    cr_assert_str_eq(subtract_sum(10), "apple");
}