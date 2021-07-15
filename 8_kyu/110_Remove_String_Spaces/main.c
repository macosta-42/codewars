#include <criterion/criterion.h>
#include <stdlib.h>

char *no_space(const char *str_in);
void tester(const char *input, char *expected);

Test(Sample_Test, should_return_sample_sans_spaces) {
    tester("HELLO WORLD", "HELLOWORLD");
}