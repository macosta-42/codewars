
int close_compare(int a, int b, int margin)
{
    if ((b - a) <= margin && (b - a) >= 0 || (a - b) <= margin && (a - b) >= 0)
        return 0;
    else if (a < b)
        return -1;
    else
        return 1;
}