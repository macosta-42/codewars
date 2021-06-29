#include <criterion/criterion.h>
#include <stdbool.h>
#include <stdlib.h>

bool plural(const size_t value);

Test(ExampleTests, ShouldPassAllTheTestsProvided) {
const size_t values[] = { 0, 1, 2, 21, 100 };
const bool outputs[] = { true, false, true, true, true };
for (size_t index = 0; index < sizeof(values)/sizeof(values[0]); ++index) {
bool expected = outputs[index];
bool received = plural(values[index]);
cr_assert_eq(expected, received, "Expected: %s Received: %s", expected ? "true" : "false", received ? "true" : "false");
}
}