#include <criterion/criterion.h>

#define assert cr_assert

#define ASSERT_ARRAY_EQUALS(lhs, lhsSize, rhs, rhsSize)            \
do {                                                               \
  int areEqual = 1;                                                \
  if (lhsSize == rhsSize) {                                        \
    for (size_t index = 0; index < lhsSize && areEqual; ++index) { \
      if ((lhs)[index] != (rhs)[index]) {                          \
        areEqual = 0;                                              \
      }                                                            \
    }                                                              \
  } else {                                                         \
    areEqual = 0;                                                  \
  }                                                                \
  assert(areEqual);                                                \
} while (0)

size_t *monkey_count(size_t n, size_t *pResultCount);

Test(CoreTests, ShouldPassAllTheTestsProvided) {
    {
        const size_t n = 5;
        size_t count = 0;
        const size_t *received = monkey_count(n, &count);

        const size_t expected[] = { 1, 2, 3, 4, 5 };
        const size_t expectedCount = sizeof(expected)/sizeof(expected[0]);

        ASSERT_ARRAY_EQUALS(received, count, expected, expectedCount);
    }

    {
        const size_t n = 3;
        size_t count = 0;
        const size_t *received = monkey_count(n, &count);

        const size_t expected[] = { 1, 2, 3 };
        const size_t expectedCount = sizeof(expected)/sizeof(expected[0]);

        ASSERT_ARRAY_EQUALS(received, count, expected, expectedCount);
    }

    {
        const size_t n = 9;
        size_t count = 0;
        const size_t *received = monkey_count(n, &count);

        const size_t expected[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
        const size_t expectedCount = sizeof(expected)/sizeof(expected[0]);

        ASSERT_ARRAY_EQUALS(received, count, expected, expectedCount);
    }
}