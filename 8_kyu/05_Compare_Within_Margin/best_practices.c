
int close_compare(int a, int b, int margin)
{
    if (abs(a - b) <= margin)
        return 0;
    return a > b ? 1 : -1;
}