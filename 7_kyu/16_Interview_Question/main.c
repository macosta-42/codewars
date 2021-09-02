#include <criterion/criterion.h>
char* get_strings(const char *words);

void do_test(const char *city, const char *expected)
{
    char *actual = get_strings(city);
    cr_assert_str_eq(actual, expected);
    free(actual);
}

// practice TDD by writing your own tests
Test(get_strings_test, should_pass_some_fixed_tests)
{
    do_test("Chicago", "c:**,h:*,i:*,a:*,g:*,o:*");
    do_test("Bangkok", "b:*,a:*,n:*,g:*,k:**,o:*");
    do_test("Las Vegas", "l:*,a:**,s:**,v:*,e:*,g:*");
}
