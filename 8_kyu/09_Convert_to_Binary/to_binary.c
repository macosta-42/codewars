unsigned long long to_binary(unsigned short num)
{
    unsigned long long bin = 0, i = 1;

    while(num > 0)
    {
        bin += num % 2 * i;
        num /= 2;
        i *= 10;
    }
    return bin;
}
