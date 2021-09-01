#include <criterion/criterion.h>

char *HTMLGenA(const char *innerHTML);

char *HTMLGenB(const char *innerHTML);

char *HTMLGenBody(const char *innerHTML);

char *HTMLGenDiv(const char *innerHTML);

char *HTMLGenSpan(const char *innerHTML);

char *HTMLGenTitle(const char *innerHTML);

char *HTMLGenComment(const char *innerHTML);

Test(BasicTests, ShouldWorkForElementA)
{
#ifdef TAG_NAME
#undef TAG_NAME
#endif /* TAG_NAME */
#define TAG_NAME "a"

#ifdef TAG_GENERATOR
#undef TAG_GENERATOR
#endif /* TAG_GENERATOR */
#define TAG_GENERATOR HTMLGenA

// Test #00
{
const char *innerHTML  = "Hello world!";
const char *expected   = "<" TAG_NAME ">Hello world!</" TAG_NAME ">";
char       *actual     = TAG_GENERATOR(innerHTML);

cr_assert_str_eq(
        expected, actual, "Inner HTML: \"%s\" Expected: %s Actual: %s",
innerHTML, expected, actual);

free(actual); actual = NULL;
}
}

Test(BasicTests, ShouldWorkForElementB)
{
#ifdef TAG_NAME
#undef TAG_NAME
#endif /* TAG_NAME */
#define TAG_NAME "b"

#ifdef TAG_GENERATOR
#undef TAG_GENERATOR
#endif /* TAG_GENERATOR */
#define TAG_GENERATOR HTMLGenB

// Test #00
{
const char *innerHTML  = "Hello world!";
const char *expected   = "<" TAG_NAME ">Hello world!</" TAG_NAME ">";
char       *actual     = TAG_GENERATOR(innerHTML);

cr_assert_str_eq(
        expected, actual, "Inner HTML: \"%s\" Expected: %s Actual: %s",
innerHTML, expected, actual);

free(actual); actual = NULL;
}
}

Test(BasicTests, ShouldWorkForElementBody)
{
#ifdef TAG_NAME
#undef TAG_NAME
#endif /* TAG_NAME */
#define TAG_NAME "body"

#ifdef TAG_GENERATOR
#undef TAG_GENERATOR
#endif /* TAG_GENERATOR */
#define TAG_GENERATOR HTMLGenBody

// Test #00
{
const char *innerHTML  = "Hello world!";
const char *expected   = "<" TAG_NAME ">Hello world!</" TAG_NAME ">";
char       *actual     = TAG_GENERATOR(innerHTML);

cr_assert_str_eq(
        expected, actual, "Inner HTML: \"%s\" Expected: %s Actual: %s",
innerHTML, expected, actual);

free(actual); actual = NULL;
}
}

Test(BasicTests, ShouldWorkForElementDiv)
{
#ifdef TAG_NAME
#undef TAG_NAME
#endif /* TAG_NAME */
#define TAG_NAME "div"

#ifdef TAG_GENERATOR
#undef TAG_GENERATOR
#endif /* TAG_GENERATOR */
#define TAG_GENERATOR HTMLGenDiv

// Test #00
{
const char *innerHTML  = "Hello world!";
const char *expected   = "<" TAG_NAME ">Hello world!</" TAG_NAME ">";
char       *actual     = TAG_GENERATOR(innerHTML);

cr_assert_str_eq(
        expected, actual, "Inner HTML: \"%s\" Expected: %s Actual: %s",
innerHTML, expected, actual);

free(actual); actual = NULL;
}
}

Test(BasicTests, ShouldWorkForElementSpan){
#ifdef TAG_NAME
#undef TAG_NAME
#endif /* TAG_NAME */
#define TAG_NAME "span"

#ifdef TAG_GENERATOR
#undef TAG_GENERATOR
#endif /* TAG_GENERATOR */
#define TAG_GENERATOR HTMLGenSpan

// Test #00
{
const char *innerHTML  = "Hello world!";
const char *expected   = "<" TAG_NAME ">Hello world!</" TAG_NAME ">";
char       *actual     = TAG_GENERATOR(innerHTML);

cr_assert_str_eq(
        expected, actual, "Inner HTML: \"%s\" Expected: %s Actual: %s",
innerHTML, expected, actual);

free(actual); actual = NULL;
}
}

Test(BasicTests, ShouldWorkForElementTitle)
{
#ifdef TAG_NAME
#undef TAG_NAME
#endif /* TAG_NAME */
#define TAG_NAME "title"

#ifdef TAG_GENERATOR
#undef TAG_GENERATOR
#endif /* TAG_GENERATOR */
#define TAG_GENERATOR HTMLGenTitle

// Test #00
{
const char *innerHTML  = "Hello world!";
const char *expected   = "<" TAG_NAME ">Hello world!</" TAG_NAME ">";
char       *actual     = TAG_GENERATOR(innerHTML);

cr_assert_str_eq(
        expected, actual, "Inner HTML: \"%s\" Expected: %s Actual: %s",
innerHTML, expected, actual);

free(actual); actual = NULL;
}
}

Test(BasicTests, ShouldWorkForElementComments){
#ifdef TAG_NAME
#undef TAG_NAME
#endif /* TAG_NAME */
#define L_TAG "<!--"
#define R_TAG "-->"

#ifdef TAG_GENERATOR
#undef TAG_GENERATOR
#endif /* TAG_GENERATOR */
#define TAG_GENERATOR HTMLGenComment

// Test #00
{
const char *innerHTML  = "Hello world!";
const char *expected   = L_TAG "Hello world!" R_TAG;
char       *actual     = TAG_GENERATOR(innerHTML);

cr_assert_str_eq(
        expected, actual, "Inner HTML: \"%s\" Expected: %s Actual: %s",
innerHTML, expected, actual);

free(actual); actual = NULL;
}
}