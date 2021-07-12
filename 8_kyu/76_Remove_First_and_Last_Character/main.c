#include <criterion/criterion.h>
#include <string.h>
#include <stdlib.h>

char* remove_char(char*, const char*);

Test(basic_tests, should_pass_all_the_tests_provided) {
    size_t i;
    char* strings[] = {"eloquent", "country", "person", "place", "ok"};
    char* expected[] = {"loquen", "ountr", "erso", "lac", ""};
    char* buffer;
    for(i=0; i<sizeof(strings)/sizeof(char*); i++) {
        const size_t buffer_size = strlen(strings[i]) + 1;
        buffer = (char*) malloc(buffer_size);
        memset(buffer, '#', buffer_size);
        cr_assert_str_eq(remove_char(buffer, strings[i]), expected[i]);
        free(buffer);
    }
}