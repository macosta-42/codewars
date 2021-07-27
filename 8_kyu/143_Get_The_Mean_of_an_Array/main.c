#include <criterion/criterion.h>
#include <stddef.h>

int get_average(const int *marks, size_t count);

Test(CoreTests, ShouldPassAllTheTestsProvided) {
{
const int marks[] = { 2, 2, 2, 2 };
int expected = 2;
int received = get_average(marks, sizeof(marks)/sizeof(marks[0]));
cr_assert_eq(expected, received, "Expected: %d Received: %d", expected, received);
}

    {
        const int marks[] = { 1, 5, 87, 45, 8, 8 };
        int expected = 25;
        int received = get_average(marks, sizeof(marks)/sizeof(marks[0]));
        cr_assert_eq(expected, received, "Expected: %d Received: %d", expected, received);
    }

    {
        const int marks[] = { 2,5,13,20,16,16,10 };
        int expected = 11;
        int received = get_average(marks, sizeof(marks)/sizeof(marks[0]));
        cr_assert_eq(expected, received, "Expected: %d Received: %d", expected, received);
    }

    {
        const int marks[] = { 1,2,15,15,17,11,12,17,17,14,13,15,6,11,8,7 };
        int expected = 11;
        int received = get_average(marks, sizeof(marks)/sizeof(marks[0]));
        cr_assert_eq(expected, received, "Expected: %d Received: %d", expected, received);
    }
}