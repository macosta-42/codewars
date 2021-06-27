#include <criterion/criterion.h>

double solution(const double* values, const char** units);

Test(Sample_Cases, should_pass_all_the_tests_provided) {
{
const double values[3] = {1000.0, 1000.0, 100.0};
const char*  units[3]  = {   "g",   "kg",   "m"};
double expected = 6.67e-12;
double submitted = solution(values, units);
cr_assert_float_eq(expected, submitted, 1e-15,
"Expected:\n%.16f\n\nSubmitted:\n%.16f\n\n", expected, submitted);
}
{
const double values[3] = {1000.0, 1000.0, 100.0};
const char*  units[3]  = {  "kg",   "kg",   "m"};
double expected = 6.67e-9;
double submitted = solution(values, units);
cr_assert_float_eq(expected, submitted, 1e-15,
"Expected:\n%.16f\n\nSubmitted:\n%.16f\n\n", expected, submitted);
}
{
const double values[3] = {1000.0, 1000.0, 100.0};
const char*  units[3]  = {  "kg",   "kg",  "cm"};
double expected = 6.67e-05;
double submitted = solution(values, units);
cr_assert_float_eq(expected, submitted, 1e-15,
"Expected:\n%.16f\n\nSubmitted:\n%.16f\n\n", expected, submitted);
}
}