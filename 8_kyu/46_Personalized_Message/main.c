#include <criterion/criterion.h>

const char* greet(const char *name, const char *owner);

Test(ExampleTests, ShouldPassAllTheTestsProvided) {
    cr_assert_str_eq(greet("Daniel", "Daniel"), "Hello boss");
    cr_assert_str_eq(greet("Greg", "Daniel"), "Hello guest");
    static const char danielToo[] = "Daniel";
    cr_assert_str_eq(greet(danielToo, "Daniel"), "Hello boss");
    cr_assert_str_eq(greet("Cat", "Catherine"), "Hello guest", "Cat is not Catherine");
    cr_assert_str_eq(greet("Catherine", "Cat"), "Hello guest", "Caterine is not Cat");
}