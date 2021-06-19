#include <criterion/criterion.h>

int expression_matter(int, int, int);

Test(fixed_tests, should_pass_sample_tests) {
cr_assert_eq(expression_matter(2, 1, 2), 6);
cr_assert_eq(expression_matter(2, 1, 1), 4);
cr_assert_eq(expression_matter(1, 1, 1), 3);
cr_assert_eq(expression_matter(1, 2, 3), 9);
cr_assert_eq(expression_matter(1, 3, 1), 5);
cr_assert_eq(expression_matter(2, 2, 2), 8);

cr_assert_eq(expression_matter(5, 1, 3), 20);
cr_assert_eq(expression_matter(3, 5, 7), 105);
cr_assert_eq(expression_matter(5, 6, 1), 35);
cr_assert_eq(expression_matter(1, 6, 1), 8);
cr_assert_eq(expression_matter(2, 6, 1), 14);
cr_assert_eq(expression_matter(6, 7, 1), 48);

cr_assert_eq(expression_matter(2, 10, 3), 60);
cr_assert_eq(expression_matter(1, 8, 3), 27);
cr_assert_eq(expression_matter(9, 7, 2), 126);
cr_assert_eq(expression_matter(1, 1, 10), 20);
cr_assert_eq(expression_matter(9, 1, 1), 18);
cr_assert_eq(expression_matter(10, 5, 6), 300);
cr_assert_eq(expression_matter(1, 10, 1), 12);
}