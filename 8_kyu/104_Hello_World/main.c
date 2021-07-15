#include <criterion/criterion.h>

const char* greet();

Test(Sample_Case, should_return_correct_message) {
    cr_assert_str_eq(greet(), "hello world!");
}