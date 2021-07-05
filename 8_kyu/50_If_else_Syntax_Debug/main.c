#include <criterion/criterion.h>
#include <stdbool.h>

bool checkAlive(int health);

Test(the_multiply_function, should_pass_all_the_tests_provided) {
    cr_assert_eq(checkAlive(5), true, "Health: 5 should return true");
    cr_assert_eq(checkAlive(0), false, "Health: 0 should return false");
}