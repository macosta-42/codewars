#include <string.h>
#include <criterion/criterion.h>

int* revR (int* array, int n);

Test (Reverse_array, should_pass_all_the_tests_provided) {
    cr_assert (!memcmp (revR (NULL, 0), (int[0]){}, 0));
    cr_assert (!memcmp (revR ((int[]){1}, 1), (int[]){1}, 1*sizeof(int)));
    cr_assert (!memcmp (revR ((int[]){1,2}, 2), (int[]){2,1}, 2*sizeof(int)));
}