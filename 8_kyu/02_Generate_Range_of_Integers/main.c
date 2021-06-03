//
// Created by Matthieu Costa on 02/06/2021.
//

#include <criterion/criterion.h>

int *generate_range(int min, int max, int step, size_t *n);
void tester(int min, int max, int step, int *expected, size_t e);

Test(Sample_Cases, should_pass_all_the_tests_provided) {

// the generate_range function should return a dynamically allocated integer array
// this function should also assign the length of the return array to the pointer *n
// the allocated memory will be freed by tester function

{
int min = 2, max = 10, step = 2;
int expected[5] = {2, 4, 6, 8, 10};
tester(min, max, step, expected, 5);
}
{
int min = 1, max = 10, step = 3;
int expected[4] = {1, 4, 7, 10};
tester(min, max, step, expected, 4);
}
}