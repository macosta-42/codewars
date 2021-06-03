//
// Created by Matthieu Costa on 01/06/2021.
//
/* Adapted from the tests originally written by a code warrior petergarvin1 */

#include <criterion/criterion.h>
#include <string.h>

int correct_tail(const char *body, const char *tail) {
    int i;

    i = 0;
    while (body[i] != '\0')
        i++;
    i--;
    if (body[i] == tail[0])
        return 1;
    else
        return 0;
}

int correct_tail(const char*, const char*);

Test(CoreTests, ShouldPassAllTheTestsProvided) {
cr_assert(correct_tail("Fox", "x"));
cr_assert(correct_tail("Rhino", "o"));
cr_assert(correct_tail("Meerkat", "t"));
cr_assert_not(correct_tail("Emu", "t"));
cr_assert_not(correct_tail("Badger", "s"));
cr_assert_not(correct_tail("Giraffe", "d"));
}
