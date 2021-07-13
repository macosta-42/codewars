#include <criterion/criterion.h>
#include <stdbool.h>

bool is_opposite(const char* s1, const char* s2);

Test(Sample_Cases, should_pass_all_the_tests_provided) {
    cr_assert(is_opposite("ab","AB"));
    cr_assert(is_opposite("aB","Ab"));
    cr_assert(is_opposite("aBcd","AbCD"));
    cr_assert_not(is_opposite("AB","Ab"));
    cr_assert_not(is_opposite("",""));
    cr_assert_not(is_opposite("A","aa"));
}