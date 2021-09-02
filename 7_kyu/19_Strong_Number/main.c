// TODO: Replace examples and use TDD development by writing your own tests. The code provided here is just a how-to example.

#include <criterion/criterion.h>

const char* strong_num(const int number);

const char*const strong = "STRONG!!!!";
const char*const notStrong = "Not Strong !!";

Test(StrongNumber, _1) {
    const char*const expected = strong;
    const char*const actual = strong_num(1);

    cr_expect_str_eq (expected, actual);
}

Test(StrongNumber, _2) {
    const char*const expected = strong;
    const char*const actual = strong_num(2);

    cr_expect_str_eq (expected, actual);
}

Test(StrongNumber, _3) {
    const char*const expected = strong;
    const char*const actual = strong_num(145);

    cr_expect_str_eq (expected, actual);
}

Test(StrongNumber, _4) {
    const char*const expected = notStrong;
    const char*const actual = strong_num(7);

    cr_expect_str_eq (expected, actual);
}

Test(StrongNumber, _5) {
    const char*const expected = notStrong;
    const char*const actual = strong_num(93);

    cr_expect_str_eq (expected, actual);
}

Test(StrongNumber, _6) {
    const char*const expected = notStrong;
    const char*const actual = strong_num(185);

    cr_expect_str_eq (expected, actual);
}