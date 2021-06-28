#include <criterion/criterion.h>

// replace with the actual method being tested
int nearest_sq(int);

Test(Sample_Tests, Basic_Tests) {
cr_assert_eq(nearest_sq(1), 1, "For n = %d, Expected: %d, Received: %d", 1, 1, nearest_sq(1));
cr_assert_eq(nearest_sq(2), 1, "For n = %d, Expected: %d, Received: %d", 2, 1, nearest_sq(2));
cr_assert_eq(nearest_sq(10), 9, "For n = %d, Expected: %d, Received: %d", 10, 9, nearest_sq(10));
cr_assert_eq(nearest_sq(111), 121, "For n = %d, Expected: %d, Received: %d", 111, 121, nearest_sq(111));
cr_assert_eq(nearest_sq(9999), 10000, "For n = %d, Expected: %d, Received: %d", 9999, 10000, nearest_sq(9999));
}