int duty_free(int price, int discount, int holiday_cost) {
    float saving = 0;

    saving = (float)(price * discount) / 100;
    return holiday_cost / saving;
}