#include <criterion/criterion.h>

void count_positives_sum_negatives(int *values, size_t count, int *positivesCount, int *negativesSum);

Test(CoreTests, ShouldPassAllTheTestsProvided) {
    {
        int posCountReceived = 0;
        int negSumReceived = 0;

        int values[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15 };

        count_positives_sum_negatives(
                values, sizeof(values)/sizeof(values[0]),
        &posCountReceived, &negSumReceived);

        int posCountExpected = 10;
        int negSumExpected = -65;

        cr_assert_eq(
                posCountExpected, posCountReceived,
        "Positives count expected: %d Positives count received: %d",
        posCountExpected, posCountReceived);

        cr_assert_eq(
                negSumExpected, negSumReceived,
        "Negatives sum expected: %d Negatives sum received: %d",
        negSumExpected, negSumReceived);
    }

    {
        int posCountReceived = 0;
        int negSumReceived = 0;

        int values[] = { 0, 2, 3, 0, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14 };

        count_positives_sum_negatives(
                values, sizeof(values)/sizeof(values[0]),
        &posCountReceived, &negSumReceived);

        int posCountExpected = 8;
        int negSumExpected = -50;

        cr_assert_eq(
                posCountExpected, posCountReceived,
        "Positives count expected: %d Positives count received: %d",
        posCountExpected, posCountReceived);

        cr_assert_eq(
                negSumExpected, negSumReceived,
        "Negatives sum expected: %d Negatives sum received: %d",
        negSumExpected, negSumReceived);
    }

    {
        int posCountReceived = 0;
        int negSumReceived = 0;

        int values[] = { 1 };

        count_positives_sum_negatives(
                values, sizeof(values)/sizeof(values[0]),
        &posCountReceived, &negSumReceived);

        int posCountExpected = 1;
        int negSumExpected = 0;

        cr_assert_eq(
                posCountExpected, posCountReceived,
        "Positives count expected: %d Positives count received: %d",
        posCountExpected, posCountReceived);

        cr_assert_eq(
                negSumExpected, negSumReceived,
        "Negatives sum expected: %d Negatives sum received: %d",
        negSumExpected, negSumReceived);
    }

    {
        int posCountReceived = 0;
        int negSumReceived = 0;

        int values[] = { -1 };

        count_positives_sum_negatives(
                values, sizeof(values)/sizeof(values[0]),
        &posCountReceived, &negSumReceived);

        int posCountExpected = 0;
        int negSumExpected = -1;

        cr_assert_eq(
                posCountExpected, posCountReceived,
        "Positives count expected: %d Positives count received: %d",
        posCountExpected, posCountReceived);

        cr_assert_eq(
                negSumExpected, negSumReceived,
        "Negatives sum expected: %d Negatives sum received: %d",
        negSumExpected, negSumReceived);
    }

    {
        int posCountReceived = 0;
        int negSumReceived = 0;

        int values[] = { 0,0,0,0,0,0,0,0,0 };

        count_positives_sum_negatives(
                values, sizeof(values)/sizeof(values[0]),
        &posCountReceived, &negSumReceived);

        int posCountExpected = 0;
        int negSumExpected = 0;

        cr_assert_eq(
                posCountExpected, posCountReceived,
        "Positives count expected: %d Positives count received: %d",
        posCountExpected, posCountReceived);

        cr_assert_eq(
                negSumExpected, negSumReceived,
        "Negatives sum expected: %d Negatives sum received: %d",
        negSumExpected, negSumReceived);
    }
}