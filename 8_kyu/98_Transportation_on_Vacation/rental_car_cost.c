/* d - the days to rent */
unsigned rental_car_cost(unsigned d) {
    int discount = 0;

    if (3 <= d && d < 7)
        discount = 20;
    else if (7 <= d)
        discount = 50;
    return (d * 40) - discount;
}