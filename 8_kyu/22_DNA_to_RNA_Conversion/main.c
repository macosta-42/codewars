#include <criterion/criterion.h>
#include <stdlib.h>

char *dna_to_rna(const char *);

Test(Sample_Test, should_return_the_dna_converted_to_rna)
{
    char *dna[] = {
            "TTTT",
            "GCAT",
            "GACCGCCGCC"
    };
    char *rna[] = {
            "UUUU",
            "GCAU",
            "GACCGCCGCC"
    };
    char *actual, *expected;
    size_t n;
    for (n=0; n < 3; ++n) {
        actual = dna_to_rna(*(dna+n));
        expected = *(rna+n);
        if (!actual || strcmp(actual, expected))
            cr_assert_fail("*Actual*: %s\nExpected: %s\n     DNA: %s", actual, expected, *(dna+n));
        else {
            free(actual);
            cr_assert(1);
        }
    }
}