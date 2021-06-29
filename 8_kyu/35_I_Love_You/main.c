/* Adapted from the tests originally written by a code warrior - nbeck. */

#include <criterion/criterion.h>

const char* how_much_i_love_you(int nb_petals);

Test(CoreTests, ShouldPassAllTheTestsProvided) {
    cr_assert(strcmp(how_much_i_love_you(7), "I love you") == 0);
    cr_assert(strcmp(how_much_i_love_you(3), "a lot") == 0);
    cr_assert(strcmp(how_much_i_love_you(6), "not at all") == 0);
}