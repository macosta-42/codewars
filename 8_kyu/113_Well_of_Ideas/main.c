#include <criterion/criterion.h>
#include <stddef.h>

void tester(size_t tn, const char *tideas[tn], const char *expected);

Test(Example_Tests, should_pass_all_the_tests_provided) {
    {
        const char *ideas[3] = {"bad", "bad", "bad"};
        tester(3, ideas, "Fail!");
    }
    {
        const char *ideas[5] = {"good", "bad", "bad", "bad", "bad"};
        tester(5, ideas, "Publish!");
    }
    {
        const char *ideas[9] = {"good", "bad", "bad", "bad", "bad", "good", "bad", "bad", "good"};
        tester(9, ideas, "I smell a series!");
    }
}