#include <criterion/criterion.h>
#include <stdbool.h>
#include <stdlib.h>

bool set_alarm(bool employed, bool vacation);

Test(Sample_Cases, should_pass_all_the_tests_provided) {
cr_assert_eq(set_alarm(true, true), false, "Fails when input is true, true");
cr_assert_eq(set_alarm(false, true), false, "Fails when input is false, true");
cr_assert_eq(set_alarm(false, false), false, "Fails when input is false, false");
cr_assert_eq(set_alarm(true, false), true, "Fails when input is true, false");
}