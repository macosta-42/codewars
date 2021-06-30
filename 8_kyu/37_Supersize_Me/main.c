#include <criterion/criterion.h>

int super_size(int value);

Test(ExampleTests, ShouldPassAllTheTestsProvided) {
    cr_assert_eq(super_size(69),96);
    cr_assert_eq(super_size(513),531);
    cr_assert_eq(super_size(2017),7210);
    cr_assert_eq(super_size(414),441);
    cr_assert_eq(super_size(608719),987610);
    cr_assert_eq(super_size(123456789),987654321);
    cr_assert_eq(super_size(666666),666666);
    cr_assert_eq(super_size(2),2);
    cr_assert_eq(super_size(0),0);
}