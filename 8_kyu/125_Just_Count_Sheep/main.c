#include <criterion/criterion.h>

char* count_sheep(int n);

Test(Sample_Tests, should_pass_all_the_tests_provided) {

    {char* expected = "1 sheep...";
    char* submission = count_sheep(1);
    if(submission) cr_assert_str_eq(expected, submission, "_____Expected_____\n\n%s\n\n_____Submitted_____\n\n%s\n\n", expected, submission);
    else cr_assert(NULL, "_____Expected_____\n\n%s\n\n_____Submitted_____\n\nNULL\n\n", expected);
    free(submission);
    submission = NULL;}

    {char* expected = "1 sheep...2 sheep...";
    char* submission = count_sheep(2);
    if(submission) cr_assert_str_eq(expected, submission, "_____Expected_____\n\n%s\n\n_____Submitted_____\n\n%s\n\n", expected, submission);
    else cr_assert(NULL, "_____Expected_____\n\n%s\n\n_____Submitted_____\n\nNULL\n\n", expected);
    free(submission);
    submission = NULL;}

    {char* expected = "1 sheep...2 sheep...3 sheep...";
    char* submission = count_sheep(3);
    if(submission) cr_assert_str_eq(expected, submission, "_____Expected_____\n\n%s\n\n_____Submitted_____\n\n%s\n\n", expected, submission);
    else cr_assert(NULL, "_____Expected_____\n\n%s\n\n_____Submitted_____\n\nNULL\n\n", expected);
    free(submission);
    submission = NULL;}

}