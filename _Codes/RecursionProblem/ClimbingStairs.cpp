#include <bits/stdc++.h>
using namespace std;

// TLE for big input
// optimise with DP
// which will done after DP
int climbStairs(int n)
{
    if (n == 2)
        return 2;
    if (n == 1 || n == 0)
        return 1;
    return climbStairs(n - 1) + climbStairs(n - 2);
}

int main()
{
    int n;
    cout << "Enter the number of stairs : ";
    cin >> n;
    cout << climbStairs(n);
}