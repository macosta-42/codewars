#include <criterion/criterion.h>

void tester(size_t n, const char answers[n], const char student[n], int expected);

Test(Sample_Tests, should_pass_all_the_tests_provided)
{
    {
        const char answers[4] = {'a', 'a', 'b', 'b'};
        const char student[4] = {'a', 'c', 'b', 'd'};
        tester(4, answers, student, 6);
    }
    {
        const char answers[4] = {'a', 'a', 'c', 'b'};
        const char student[4] = {'a', 'a', 'b', ' '};
        tester(4, answers, student, 7);
    }
    {
        const char answers[4] = {'a', 'a', 'b', 'c'};
        const char student[4] = {'a', 'a', 'b', 'c'};
        tester(4, answers, student, 16);
    }
    {
        const char answers[4] = {'b', 'c', 'b', 'a'};
        const char student[4] = {' ', 'a', 'a', 'c'};
        tester(4, answers, student, 0);
    }
}