#include <criterion/criterion.h>

extern unsigned char move(unsigned char pos, unsigned char roll);

void assert_data(unsigned char pos, unsigned char roll, unsigned char expected)
{
    unsigned char actual = move(pos, roll);
    cr_assert_eq(actual, expected, "*Actual*: %cu\nExpected: %cu\n    Pos:  %cu\n    Roll: %cu\n", actual, expected, pos, roll);
}

Test(Sample_Test, should_return_the_new_position)
{
    assert_data(0, 4, 8);
    assert_data(3, 6, 15);
    assert_data(2, 5, 12);
}