#include <criterion/criterion.h>
#include <stdlib.h>
#include <string.h>

char *remove_bang(const char *s);

char *greetings[] = {"Hi", "Hi!", "Hi!!!!", "!Hi", "!Hi!", "Hi Hi!!", "Hi!\nHi"};
char *expected[] = {"Hi!", "Hi!", "Hi!", "Hi!", "Hi!", "Hi Hi!", "Hi\nHi!"};

Test(the_multiply_function, should_pass_all_the_tests_provided) {
    for(unsigned i=0; i<sizeof(greetings)/sizeof(char*); i++) {
        char* modified = remove_bang(greetings[i]);
        cr_assert_eq(strcmp(modified, expected[i]), 0);
        free(modified);
    }
}