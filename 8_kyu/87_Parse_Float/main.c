#include <criterion/criterion.h>

struct maybe_double {
    bool value_exists;
    double value;
};

struct maybe_double parse_float(const char *);

void assert_ok(const char *str, double val) {
    if (!parse_float(str).value_exists)
        cr_assert_fail("parse_float(\"%s\") should not fail", str);
    else if(parse_float(str).value != val)
        cr_assert_fail("parse_float(\"%s\") should return %s, not %lf", str, str, parse_float(str).value);
    else
        cr_assert(1);
}

void assert_not_ok(const char *str) {
    if (parse_float(str).value_exists)
        cr_assert_fail("parse_float(\"%s\") should fail", str);
    else
        cr_assert(1);
}

Test(Sample_tests, Tests) {
    assert_ok("1.0", 1.0);
    assert_not_ok("a");
    assert_ok("234.0234", 234.0234);
}