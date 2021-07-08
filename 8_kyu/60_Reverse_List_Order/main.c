#include <criterion/criterion.h>

int *reverse_list(const int *array, size_t length);
void verify(int *submission, size_t length, int *array);

Test(Sample_Test, should_return_a_reversed_list) {
    const int array[] = {1, 2, 3, 4};
    int *answer = reverse_list(array, 4);
    verify(answer, 4, (int *)array);
    free(answer);
}