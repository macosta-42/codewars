#include <criterion/criterion.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

char *smash(const char **words, size_t count);

Test(CoreTests, ShouldPassAllTheTestsProvided) {
    {
        const char *words[] = {
                "hello", "world"
        };
        const char *expected = "hello world";
        char *received = smash(words, sizeof(words)/sizeof(words[0]));

        cr_assert_str_eq(
                expected, received, "Expected: %s Received: %s", expected, received);

        free(received); received = NULL;
    }
}