double precise(int ans, int precise, int dividend, int divisor)
{
    double factor = 1;
    double result = ans;
    for (int i = 0; i < precise; i++)
    {
        factor = factor / 10;
        for (int j = result; j * divisor < dividend; j += factor)
            result = j;
    }
    return result;
}