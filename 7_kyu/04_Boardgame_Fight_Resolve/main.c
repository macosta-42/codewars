#include <criterion/criterion.h>

char fightResolve(char,char);

Test(example_test_cases, test_fights)
{
    cr_assert_eq(fightResolve('K', 'a'), ('K'));
    cr_assert_eq(fightResolve('A', 'a'), ('a'));
    cr_assert_eq(fightResolve('A', 'p'), ('p'));
    cr_assert_eq(fightResolve('k', 'P'), ('P'));
    cr_assert_eq(fightResolve('p', 'A'), ('A'));
}

Test(example_test_cases, test_friendly_fire)
{
    cr_assert_eq(fightResolve('S', 'P'), (-1));
    cr_assert_eq(fightResolve('A', 'K'), (-1));
    cr_assert_eq(fightResolve('k', 's'), (-1));
    cr_assert_eq(fightResolve('p', 'a'), (-1));
}