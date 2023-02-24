#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int mySqrt(int n)
{
    int sqrt = 0;
    int s = 0;
    int e = n;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (mid * mid == n)
            return mid;
        else if (mid * mid < n)
        {
            sqrt = mid;
            s = mid + 1;
        }
        else

            e = mid - 1;
        mid = s + (e - s) / 2;
    }
    return sqrt;
}
double precise(int ans, int precise,int n)
{
    double factor = 1;
    double result = ans;
    for (int i = 0; i < precise; i++)
    {
        factor = factor / 10;
        for (double j = result; j * j < n; j += factor)
            result = j;
    }
    return result;
}

int main()
{
    int n;
    cout << "Enter the value of n :";
    cin >> n;
    int ans = mySqrt(n);
    // cout << "Sqaure Root is : " << ans << endl;
    cout << "Enter Precision : ";
    int precision;
    cin >> precision;
    cout << "Precise Sqaure Root is : " << precise(ans, precision,n);
    return 0;
}