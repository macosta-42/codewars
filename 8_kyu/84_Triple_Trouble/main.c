#include <criterion/criterion.h>

char *triple_trouble(const char *one, const char *two, const char *three);
void tester(const char *one, const char *two, const char *three, char *expected);

Test(Example_Tests, should_pass_all_the_tests_provided)
{
    tester( "aaa",    "bbb",    "ccc",    "abcabcabc"          );
    tester( "aaaaaa", "bbbbbb", "cccccc", "abcabcabcabcabcabc" );
    tester( "burn",   "reds",   "roll",   "brrueordlnsl"       );
    tester( "Bm",     "aa",     "tn",     "Batman"             );
    tester( "LLh",    "euo",    "xtr",    "LexLuthor"          );
}