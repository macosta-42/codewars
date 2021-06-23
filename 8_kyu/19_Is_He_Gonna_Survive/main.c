#include <criterion/criterion.h>
#include <stdbool.h>
#include <stdint.h>

bool hero(uint32_t bullets, uint32_t dragons);

Test(sample_tests, should_indiciate_if_hero_survives) {
cr_assert_eq(hero(10, 5), true);
cr_assert_eq(hero(7, 4), false);
cr_assert_eq(hero(4, 5), false);
cr_assert_eq(hero(100, 40), true);
cr_assert_eq(hero(1500, 751), false);
cr_assert_eq(hero(0, 1), false);
}