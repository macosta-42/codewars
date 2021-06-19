int expression_matter(int a, int b, int c)
{
    int result = 0, tmp = 0;

    if ((tmp = a + b + c) > result) result = tmp;
    if ((tmp = (a + b) * c) > result) result = tmp;
    if ((tmp = a * (b + c)) > result) result = tmp;
    if ((tmp = a * b * c) > result) result = tmp;

    return result;
}