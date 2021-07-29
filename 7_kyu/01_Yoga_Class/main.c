#include <criterion/criterion.h>
#include <stddef.h>
#include <stdio.h>

int yoga(size_t n, const int class[n][n], size_t p, const int poses[p]);

Test(Sample_Tests, should_pass_all_the_tests_provided) {
    {
        const int class[3][3] = {{1, 2, 3},
                                 {1, 3, 1},
                                 {1, 2, 2}};
        const int poses[8] = {1, 7, 5, 9, 10, 21, 4, 3};
        const int expected = 43;
        const int submitted = yoga(3, class, 8, poses);
        cr_assert_eq(expected, submitted,
        "Expected: %d  Submitted: %d\n", expected, submitted);
    }
    {
        const int class[4][4] = {{6, 2, 3, 1},
                                 {2, 9, 4, 6},
                                 {1, 2, 3, 1},
                                 {2, 3, 1, 2}};
        const int poses[10] = {1000, 20, 3, 105, 66, 204, 4, 1, 22, 86};
        const int expected = 56;
        const int submitted = yoga(4, class, 10, poses);
        cr_assert_eq(expected, submitted,
        "Expected: %d  Submitted: %d\n", expected, submitted);
    }
    {
        const int class[2][2] = {{1, 0},
                                 {6, 2}};
        const int poses[9] = {1, 1, 0, 1, 2, 3, 0, 1, 5};
        const int expected = 31;
        const int submitted = yoga(2, class, 9, poses);
        cr_assert_eq(expected, submitted,
        "Expected: %d  Submitted: %d\n", expected, submitted); // Don't forget poses/skill levels can be 0
    }
    {
        const int class[0][0] = {};
        const int poses[3] = {1, 3, 4};
        const int expected = 0;
        const int submitted = yoga(0, class, 3, poses);
        cr_assert_eq(expected, submitted,
        "Expected: %d  Submitted: %d\n", expected, submitted); // Empty Classes Should Return 0
    }
    {
        const int class[2][2] = {{0, 0},
                                 {0, 0}};
        const int poses[0] = {};
        const int expected = 0;
        const int submitted = yoga(2, class, 0, poses);
        cr_assert_eq(expected, submitted,
        "Expected: %d  Submitted: %d\n", expected, submitted); // Empty Poses Should Return 0
    }
    {
        const int class[1][0] = {{}};
        const int poses[0] = {};
        const int expected = 0;
        const int submitted = yoga(1, class, 0, poses);
        cr_assert_eq(expected, submitted,
        "Expected: %d  Submitted: %d\n", expected, submitted); // Empty Classes & Poses Should Return 0
    }
}