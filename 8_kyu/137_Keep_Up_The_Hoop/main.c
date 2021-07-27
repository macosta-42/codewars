#include <criterion/criterion.h>
#include <time.h>
#include <stdint.h>
#include <stdlib.h>

char *hoop_count(uint32_t);

Test(ExampleTests, should_pass_all_the_tests_provided) {
    cr_assert_str_eq(hoop_count(6), "Keep at it until you get it");
    cr_assert_str_eq(hoop_count(22), "Great, now move on to tricks");
    cr_assert_str_eq(hoop_count(135), "Great, now move on to tricks");
}