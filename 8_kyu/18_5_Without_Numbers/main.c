#include <stdio.h>
#include <stdlib.h>
#include <criterion/criterion.h>

int unusual_five();

Test(the_function, should_return_5) {
cr_assert_eq(unusual_five(), 5);
}