#include <criterion/criterion.h>

const char* bool_to_word (int value);

Test (Bool_to_word, should_pass_all_the_tests_provided) {
cr_assert_eq (bool_to_word (0!=0), "No");
cr_assert_eq (bool_to_word (0==0), "Yes");
}