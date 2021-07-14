#include <criterion/criterion.h>

unsigned rental_car_cost(unsigned d);

Test(Sample_Test, should_return_the_cost_for_rental)
{
    cr_assert_eq(rental_car_cost(1u), 40u);
    cr_assert_eq(rental_car_cost(2u), 80u);
    cr_assert_eq(rental_car_cost(5u), 180u);
    cr_assert_eq(rental_car_cost(9u), 310u);
    cr_assert_eq(rental_car_cost(0u), 0u);
}