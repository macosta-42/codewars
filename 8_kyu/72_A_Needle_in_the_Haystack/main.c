#include <criterion/criterion.h>
#include <stddef.h>

char *find_needle(const char **haystack, size_t count);

Test(CoreTests, ShouldPassAllTheTestsProvided) {
    {
        const char *haystack[] = { "3", "123124234", "None", "needle", "world", "hay", "2", "3" };
        char *received = find_needle(haystack, sizeof(haystack)/sizeof(haystack[0]));
        char expected[] = "found the needle at position 3";
        cr_assert_str_eq(expected, received, "Expected: %s Received: %s", expected, received);
    }

    {
        const char *haystack[] = { "283497238987234", "a dog", "a cat", "some random junk", "a piece of hay", "needle", "something somebody lost a while ago" };
        char *received = find_needle(haystack, sizeof(haystack)/sizeof(haystack[0]));
        char expected[] = "found the needle at position 5";
        cr_assert_str_eq(expected, received, "Expected: %s Received: %s", expected, received);
    }

    {
        const char *haystack[] = {
                "1","2","3","4","5","6","7","8","8","7","5","4","3","4","5","6","67","5","5","3","3","4","2","34",
                "234","23","4","234","324","324","needle","1","2","3","4","5","5","6","5","4","32","3","45","54"
        };
        char *received = find_needle(haystack, sizeof(haystack)/sizeof(haystack[0]));
        char expected[] = "found the needle at position 30";
        cr_assert_str_eq(expected, received, "Expected: %s Received: %s", expected, received);
    }
}