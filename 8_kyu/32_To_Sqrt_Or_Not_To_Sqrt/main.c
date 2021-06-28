#include <criterion/criterion.h>

int* squareOrSquareRoot(int*, int);

void assertArray(int* actual, int* expected, int length)
{
    for(int i=0;i<length;i++)
    {
        if(actual[i] != expected[i])
        {
            cr_assert(false, "On position %d: Expected: %d But actual: %d", (i+1),actual[i], expected[i]);
        }
    }
    cr_assert(true);
}

Test(exampleTests, basicTests) {
int input1[] = { 4, 3, 9, 7, 2, 1 };
int expected1[] = { 2, 9, 3, 49, 4, 1 };
assertArray(squareOrSquareRoot(input1, 6), expected1, 6);

int input2[] = { 100, 101, 5, 5, 1, 1 };
int expected2[] = { 10, 10201, 25, 25, 1, 1 };
assertArray(squareOrSquareRoot(input2, 6), expected2, 6);

int input3[] = { 1, 2, 3, 4, 5, 6 };
int expected3[] = { 1, 4, 9, 2, 25, 36 };
assertArray(squareOrSquareRoot(input3, 6), expected3, 6);
}