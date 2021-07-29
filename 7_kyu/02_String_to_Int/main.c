#include <criterion/criterion.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int hash(char* str);

Test(Basic_hash, should_pass_all_the_tests_provided) {
    cr_assert_eq(hash("a"), 64);
    cr_assert_eq(hash("Hi"), 16);
    cr_assert_eq(hash(" Yo - What's Good?! "), 460);
}