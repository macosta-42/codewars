#include <criterion/criterion.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool feast(const char* beast, const char* dish);
const char* beasts[25]; const char* dishes[25];

Test(Sample_Cases, should_pass_all_the_tests_provided) {
    cr_assert_eq(feast("great blue heron", "garlic naan"), true, "should return true");
    cr_assert_eq(feast("chickadee", "chocolate cake"), true, "should return true");
    cr_assert_eq(feast("brown bear", "bear claw"), false, "should return false");
}