#include <criterion/criterion.h>

int centuryFromYear(int year);

Test(centuryFromYear, FixedTests)
{
    cr_assert_eq(centuryFromYear(1705), 18);
    cr_assert_eq(centuryFromYear(1900), 19);
    cr_assert_eq(centuryFromYear(1601), 17);
    cr_assert_eq(centuryFromYear(2000), 20);
}