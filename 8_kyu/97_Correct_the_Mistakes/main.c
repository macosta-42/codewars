#include <criterion/criterion.h>

char *correct(char*);

Test(ExampleTests, ShouldPassAllTheTestsProvided) {
    {
        char source[] = "L0ND0N";
        cr_assert_str_eq(correct(source),"LONDON");
    }

    {
        char source[] = "DUBL1N";
        cr_assert_str_eq(correct(source),"DUBLIN");
    }

    {
        char source[] = "51NGAP0RE";
        cr_assert_str_eq(correct(source),"SINGAPORE");
    }

    {
        char source[] = "BUDAPE5T";
        cr_assert_str_eq(correct(source),"BUDAPEST");
    }

    {
        char source[] = "PAR15";
        cr_assert_str_eq(correct(source),"PARIS");
    }
}