#include <criterion/criterion.h>

size_t find_longest(const char *words);

Test(CoreTests, ShouldPassAllTheTestsProvided) {
cr_assert_eq(find_longest("The quick white fox jumped around the massive dog"), 7);
cr_assert_eq(find_longest("Take me to tinseltown with you"), 10);
cr_assert_eq(find_longest("Sausage chops"), 7);
cr_assert_eq(find_longest("Wind your body and wiggle your belly"), 6);
cr_assert_eq(find_longest("Lets all go on holiday"), 7);
}