#include <criterion/criterion.h>

int enough(int,int,int);

Test(the_enough_function, should_pass_all_the_tests_provided) {
    cr_assert_eq(enough(10,5,5), 0);
    cr_assert_eq(enough(100,60,50), 10);
    cr_assert_eq(enough(10,5,5), 0);
}