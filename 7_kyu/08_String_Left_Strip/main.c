#include <criterion/criterion.h>

char *stringLeftStrip(char *target, const char *chars);

Test(Example, ShouldPassAllTheTestsProvided) {
    {
        char str[] = "!!!!###@hello";
        const char *chars = "!#@";
        (void)stringLeftStrip(str, chars);
        cr_assert(strcmp(str, "hello") == 0);
    }
    {
        char str[] = "a!!!!###@hello";
        const char *chars = "!#@";
        (void)stringLeftStrip(str, chars);
        cr_assert(strcmp(str, "a!!!!###@hello") == 0);
    }
    {
        char str[] = "   waffles!    ";
        const char *chars = " ";
        (void)stringLeftStrip(str, chars);
        cr_assert(strcmp(str, "waffles!    ") == 0);
    }
    {
        char str[] = "   waffles!    ";
        const char *chars = NULL;
        (void)stringLeftStrip(str, chars);
        cr_assert(strcmp(str, "waffles!    ") == 0);
    }
    {
        char str[] = "   waffles!    ";
        const char *chars = "";
        (void)stringLeftStrip(str, chars);
        cr_assert(strcmp(str, "   waffles!    ") == 0);
    }
}