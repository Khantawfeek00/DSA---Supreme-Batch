#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int divideNbyM(int dividend, int divisor)
{
    int s = 0;
    int e = abs(dividend);
    int mid = s + (e - s) / 2;
    int ans = 0;

    while (s <= e)
    {
        // Perfect Solution
        if (abs(mid * divisor) == abs(dividend))
        {
            ans = mid;
            break;
        }
        else if (abs(mid * divisor) < abs(dividend))
        {
            // right search
            ans = mid;
            s = mid + 1;
        }
        else
            e = mid - 1; // Left search
        mid = s + (e - s) / 2;
    }
    if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0))
        return -ans;
    else
        return ans;
}

double precise(int ans, int precise, int dividend, int divisor)
{
    double factor = 1;
    double result = ans;
    for (int i = 0; i < precise; i++)
    {
        factor = factor / 10;
        for (double j = result; j * divisor < dividend; j += factor)
            result = j;
    }
    return result;
}

int main()
{
    int a, b;
    cout << "Enter the value of a and b :";
    cin >> a >> b;
    int ans = divideNbyM(a, b);
    cout << "Ans = " << ans << endl;
    int precision;
    cout << "Enter Precision : ";
    cin >> precision;
    cout << endl
         << "Precised Division is : " << precise(ans, precision, a, b);
    return 0;
}