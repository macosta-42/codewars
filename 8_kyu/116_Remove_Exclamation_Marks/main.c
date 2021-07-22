#include <criterion/criterion.h>
#include <string.h>

void remove_exclamation_marks(const char *str_in, char *str_out);
static void tester(const char *string, const char *expected);

Test(Example_Cases, should_pass_all_tests)
{
    tester( "Hello World!"   , "Hello World" );
    tester( "Hello World!!!" , "Hello World" );
    tester( "Hi! Hello!"     , "Hi Hello"    );
    tester( "!Hi Hello!"     , "Hi Hello"    );
    tester( ""               , ""            );
    tester( "Oh, no!!!"      , "Oh, no"      );
}


static void tester(const char *string, const char *expected) {
    char submitted[strlen(string) + 1];
    remove_exclamation_marks(string, submitted);
    cr_assert_str_eq(          submitted,            expected,
                               "string:    \"%s\"\n \nSubmitted: \"%s\"\n \nExpected:  \"%s\"\n \n",
                               string,               submitted,            expected
    );
}