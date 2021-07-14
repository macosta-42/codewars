#include <criterion/criterion.h>
#include <stdbool.h>

typedef unsigned long long ull;

char *bonus_time(ull salary, bool bonus);
void tester(ull salary, bool bonus, char *expected);


Test(Example_Tests, should_pass_all_the_tests_provided)
{
    tester(10000, true , "$100000");
    tester(25000, true , "$250000");
    tester(10000, false,  "$10000");
    tester(60000, false,  "$60000");
    tester(    2, true ,     "$20");
    tester(   78, false,     "$78");
    tester(67890, true , "$678900");
}