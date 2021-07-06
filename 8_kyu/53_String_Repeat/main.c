#include <criterion/criterion.h>
#include <stdlib.h>
#include <string.h>

char *repeat_str(size_t count, const char *src);

Test(ExampleTests, ShouldPassAllTheTestsProvided) {
    {
        size_t count = 4;
        const char *str = "a";
        char *result = repeat_str(count, str);
        cr_assert(strcmp(result, "aaaa") == 0);
        free(result);
    }

    {
        size_t count = 3;
        const char *str = "hello ";
        char *result = repeat_str(count, str);
        cr_assert(strcmp(result, "hello hello hello ") == 0);
        free(result);
    }

    {
        size_t count = 2;
        const char *str = "abc";
        char *result = repeat_str(count, str);
        cr_assert(strcmp(result, "abcabc") == 0);
        free(result);
    }
}