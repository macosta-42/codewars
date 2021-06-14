unsigned long long to_binary(unsigned long long num)
{
    unsigned long long b = 0, x = 1;

    while (num > 0){
        b += (num & 1) * x;
        x *= 10;
        num >>= 1;
    }
    return b;
}
