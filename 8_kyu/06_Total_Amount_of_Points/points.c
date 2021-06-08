int points(const char* const games[10])
{
    int   i = 0, x = 0, y = 0, res = 0;
    const char *tmp;

    while (i < 10)
    {
        tmp = games[i];
        x = tmp[0];
        y = tmp[2];
        if (x > y)
            res += 3;
        if (x < y)
            res += 0;
        if (x == y)
            res += 1;
        i++;
    }
    return res;
}