#include <criterion/criterion.h>
#include <stddef.h>

int sum_array(const int *values, size_t count);

Test(CoreTests, ShouldPassAllTheTestsProvided) {
    {
        const int values[] = { 0 };
        const size_t count = sizeof(values)/sizeof(values[0]);

        int expected = 0;
        int received = sum_array(values, count);

        cr_assert_eq(expected, received, "Expected: %d Received: %d", expected, received);
    }

    {
        const int values[] = { 100, 200, 300, -600 };
        const size_t count = sizeof(values)/sizeof(values[0]);

        int expected = 0;
        int received = sum_array(values, count);

        cr_assert_eq(expected, received, "Expected: %d Received: %d", expected, received);
    }

    {
        const int values[] = { 1, 2, 3 };
        const size_t count = sizeof(values)/sizeof(values[0]);

        int expected = 6;
        int received = sum_array(values, count);

        cr_assert_eq(expected, received, "Expected: %d Received: %d", expected, received);
    }

    {
        const int values[] = { 3, 2, 1, 1};
        const size_t count = sizeof(values)/sizeof(values[0]);

        int expected = 7;
        int received = sum_array(values, count);

        cr_assert_eq(expected, received, "Expected: %d Received: %d", expected, received);
    }

    {
        const int values[] = { 4, 5, 6 };
        const size_t count = sizeof(values)/sizeof(values[0]);

        int expected = 15;
        int received = sum_array(values, count);

        cr_assert_eq(expected, received, "Expected: %d Received: %d", expected, received);
    }
}