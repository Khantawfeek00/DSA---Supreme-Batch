#include <bits/stdc++.h>
using namespace std;

int fibonacciNumber(int n)
{
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    return fibonacciNumber(n - 1) + fibonacciNumber(n - 2);
}
int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    cout << fibonacciNumber(n);
}