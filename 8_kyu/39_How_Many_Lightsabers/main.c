#include <criterion/criterion.h>

int HowManyLightsabersDoYouOwn(char*);

Test(the_multiply_function, should_pass_all_the_tests_provided) {
    // Zach has 18 Lightsabers
    cr_assert_eq(HowManyLightsabersDoYouOwn("Zach"), 18);
    // Adam has 0
    cr_assert_eq(HowManyLightsabersDoYouOwn("Adam"), 0);
    // Alice has 0
    cr_assert_eq(HowManyLightsabersDoYouOwn("Alice"), 0);
}