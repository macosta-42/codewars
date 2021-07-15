#include <criterion/criterion.h>
#include <stddef.h>

char get_grade(int a, int b, int c);
void tester(int a, int b, int c, char grade);

Test(Example_Tests, should_return_A) {
    tester( 95,  90,  93, 'A');
    tester(100,  85,  96, 'A');
    tester( 92,  93,  94, 'A');
    tester(100, 100, 100, 'A');
}
Test(Example_Tests, should_return_B) {
    tester( 70,  70, 100, 'B');
    tester( 82,  85,  87, 'B');
    tester( 84,  79,  85, 'B');
}
Test(Example_Tests, should_return_C) {
    tester( 70,  70,  70, 'C');
    tester( 75,  70,  79, 'C');
    tester( 60,  82,  76, 'C');
}
Test(Example_Tests, should_return_D) {
    tester( 65,  70,  59, 'D');
    tester( 66,  62,  68, 'D');
    tester( 58,  62,  70, 'D');
}
Test(Example_Tests, should_return_F) {
    tester( 44,  55,  52, 'F');
    tester( 48,  55,  52, 'F');
    tester( 58,  59,  60, 'F');
    tester(  0,   0,   0, 'F');
}