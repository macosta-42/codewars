#include <criterion/criterion.h>
#include <string.h>
#include <limits.h>

unsigned short *reverse_seq(unsigned short num);

void assert_mem_eq(void *actual, void *expected, unsigned n, size_t size)
{
    unsigned i;
    if (!actual || !expected)
        if (actual != expected)
            cr_assert_fail();
    for (i=0; n--; i += size)
        if(memcmp((char *)actual+i, (char *)expected+i, size))
            cr_assert_fail();
    cr_assert(1);
}

Test(Sample_Test, should_return_the_reversed_sequence)
{
    unsigned short set[][CHAR_BIT*CHAR_BIT] = {
            { 1u },
            { 5u, 4u, 3u, 2u, 1u },
            { 0u }
    };
    assert_mem_eq(&set[0], reverse_seq(1u), 1u, sizeof(unsigned short));
    assert_mem_eq(&set[1], reverse_seq(5u), 5u, sizeof(unsigned short));
    assert_mem_eq(&set[2], reverse_seq(1u), 0u, sizeof(unsigned short));
}