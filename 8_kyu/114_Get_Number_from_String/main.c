/* Adapted from the test cases originally written by a code warrior wichu */

#include <criterion/criterion.h>

int get_number_from_string(const char *src);

Test(CoreTests, ShouldPassAllTheTestsProvided) {
    cr_assert_eq(get_number_from_string("1"), 1);
    cr_assert_eq(get_number_from_string("123"), 123);
    cr_assert_eq(get_number_from_string("this is number: 7"), 7);
    cr_assert_eq(get_number_from_string("$100 000 000"), 100000000);
    cr_assert_eq(get_number_from_string("hell5o wor6ld"), 56);
    cr_assert_eq(get_number_from_string("one1 two2 three3 four4 five5"), 12345);
}