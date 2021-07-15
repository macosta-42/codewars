#include <criterion/criterion.h>

const char* number_to_string(int number);
void tester(int number, const char* expected);

Test(Sample_Case, should_return_number_as_string) {
    tester(123, "123");
    tester(999, "999");
}