#include <criterion/criterion.h>

unsigned long long to_binary(unsigned short num);

Test(Sample_Test, should_return_the_binary_representation)
{
cr_assert_eq(to_binary(1), 1ull);
cr_assert_eq(to_binary(2), 10ull);
cr_assert_eq(to_binary(3), 11ull);
cr_assert_eq(to_binary(5), 101ull);
cr_assert_eq(to_binary(15), 1111ull);
}