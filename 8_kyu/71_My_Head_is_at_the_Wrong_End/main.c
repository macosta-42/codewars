#include <criterion/criterion.h>
#include <string.h>

const char **fix_the_meerkat(const char**);

int arrayEquals(const void **lhsArray, size_t lhsArrayLength,
                const void **rhsArray, size_t rhsArrayLength,
                size_t itemSize, int(*comparisonFunction)(const char*, const char*));

Test(CoreTests, ShouldPassAllTheTestsProvided) {
    {
        const char *arr[] = { "tail", "body", "head" };
        const char **result = fix_the_meerkat(arr);
        const char *expected[] = { "head", "body", "tail" };
        cr_assert(
        arrayEquals(
                (const void **)result, sizeof(arr) / sizeof(arr[0]),
        (const void **)expected, sizeof(arr) / sizeof(arr[0]),
        sizeof(char*), strcmp)
        );
    }

    {
        const char *arr[] = { "tails", "body", "heads" };
        const char **result = fix_the_meerkat(arr);
        const char *expected[] = { "heads", "body", "tails" };
        cr_assert(
        arrayEquals(
                (const void **)result, sizeof(arr) / sizeof(arr[0]),
        (const void **)expected, sizeof(arr) / sizeof(arr[0]),
        sizeof(char*), strcmp)
        );
    }

    {
        const char *arr[] = { "bottom", "middle", "top" };
        const char **result = fix_the_meerkat(arr);
        const char *expected[] = { "top", "middle", "bottom" };
        cr_assert(
        arrayEquals(
                (const void **)result, sizeof(arr) / sizeof(arr[0]),
        (const void **)expected, sizeof(arr) / sizeof(arr[0]),
        sizeof(char*), strcmp)
        );
    }

    {
        const char *arr[] = { "lower legs", "torso", "upper legs" };
        const char **result = fix_the_meerkat(arr);
        const char *expected[] = { "upper legs", "torso", "lower legs" };
        cr_assert(
        arrayEquals(
                (const void **)result, sizeof(arr) / sizeof(arr[0]),
        (const void **)expected, sizeof(arr) / sizeof(arr[0]),
        sizeof(char*), strcmp)
        );
    }

    {
        const char *arr[] = { "ground", "rainbow", "sky" };
        const char **result = fix_the_meerkat(arr);
        const char *expected[] = { "sky", "rainbow", "ground" };
        cr_assert(
        arrayEquals(
                (const void **)result, sizeof(arr) / sizeof(arr[0]),
        (const void **)expected, sizeof(arr) / sizeof(arr[0]),
        sizeof(char*), strcmp)
        );
    }
}

int arrayEquals(const void **lhsArray, size_t lhsArrayLength,
                const void **rhsArray, size_t rhsArrayLength,
                size_t itemSize, int(*comparisonFunction)(const char*, const char*))
{
    if (lhsArrayLength == rhsArrayLength) {
        size_t length = lhsArrayLength;
        for (size_t index = 0; index < length; ++index) {
            const void **lhsItem = (const void**)((char*)lhsArray + index * itemSize);
            const void **rhsItem = (const void**)((char*)rhsArray + index * itemSize);
            if (comparisonFunction(*lhsItem, *rhsItem) != 0) {
                return 0;
            }
        }
        return 1;
    }
    return 0;
}