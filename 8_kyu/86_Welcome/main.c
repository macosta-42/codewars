#include <criterion/criterion.h>

const char *greet(char *language);

Test(Fixed_Cases, greeting_should_match_language) {
    cr_assert_str_eq(greet("finnish"), "Tervetuloa", "should return \"Tervetuloa\"");
    cr_assert_str_eq(greet("polish"), "Witamy", "should return \"Witamy\"");
    cr_assert_str_eq(greet("latvian"), "Gaidits", "should return \"Gaidits\"");
}