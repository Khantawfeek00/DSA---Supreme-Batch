#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int mySqrt(int x)
{

    // using inbuilt function
    //  return sqrt(x);

    // using binary search
    int s = 1;
    int e = x;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (mid == x / mid)
        {
            return mid;
        }
        else if (mid > x / mid)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return e;
}

double preciseSqrt(int x, int num, int precise)
{
    double factor = 1;
    double ans = num;
    for (int i = 0; i < precise; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < x; j += factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the value of n :";
    cin >> n;
    int ans = mySqrt(n);
    cout << "Sqaure Root is : " << ans << endl;
    cout << "Precise Sqaure Root is : " << preciseSqrt(n, ans, 4);
    return 0;
}