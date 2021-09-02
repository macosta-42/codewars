const char* strong_num(const int number) {
    int sum = 0, num = number;

    while (num > 10) {
        sum += sum * (num % 10);
        num /= 10;
    }

    if (sum == number)
        return "STRONG!!!!";
    else
        return "Not Strong !!";
}