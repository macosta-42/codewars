#include <criterion/criterion.h>

unsigned bin_to_decimal(const char *);

Test(ExampleTests, ShouldPassAllTheTestsProvided
) {
{
const char *source = "0";
const unsigned expected = 0;
const unsigned received = bin_to_decimal(source);
cr_assert_eq(expected, received,
"Expected: %u Received: %u", expected, received);
}

{
const char *source = "1";
const unsigned expected = 1;
const unsigned received = bin_to_decimal(source);
cr_assert_eq(expected, received,
"Expected: %u Received: %u", expected, received);
}

{
const char *source = "1010";
const unsigned expected = 10;
const unsigned received = bin_to_decimal(source);
cr_assert_eq(expected, received,
"Expected: %u Received: %u", expected, received);
}

{
const char *source = "1111";
const unsigned expected = 15;
const unsigned received = bin_to_decimal(source);
cr_assert_eq(expected, received,
"Expected: %u Received: %u", expected, received);
}

{
const char *source = "100000";
const unsigned expected = 32;
const unsigned received = bin_to_decimal(source);
cr_assert_eq(expected, received,
"Expected: %u Received: %u", expected, received);
}

{
const char *source = "11111111111111111111111111111111";
const unsigned expected = 4294967295;
const unsigned received = bin_to_decimal(source);
cr_assert_eq(expected, received,
"Expected: %u Received: %u", expected, received);
}
}