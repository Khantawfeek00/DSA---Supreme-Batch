#include <bits/stdc++.h>
using namespace std;

vector<int> squares;
void findSqaures(int n)
{
    for (int i = 1; i * i <= n; i++)
    {
        squares.push_back(i * i);
    }
}
int getSum(int n, int j)
{
    if (n == 0)
    {
        return 0;
    }
    int minTemp = INT_MAX;
    for (int i = j; i >= 0; i--)
    {
        if (squares[i] <= n)
        {
            minTemp = min(minTemp, getSum(n - squares[i], i) + 1);
        }
    }
    return minTemp;
}

// T.C.=O(n^n)   S.C.=O(n)
int numSquares(int n)
{
    findSqaures(n);
    return getSum(n, squares.size() - 1);
}
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << numSquares(n);
}