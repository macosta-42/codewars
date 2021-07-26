#include <criterion/criterion.h>

double total_pressure(double molar_mass1, double molar_mass2, double given_mass1, double given_mass2, double v, double t);
void tester(double mM1, double mM2, double gM1, double gM2, double v, double t, double exp);

Test(Example_Tests, should_pass_all_the_tests_provided)
{
    tester(44.0, 30.0,  3.0,  2.0,  5.0,  50.0, 0.714651121212121);
    tester(60.0, 20.0, 10.0, 30.0, 10.0, 100.0, 5.099716666666667);
}