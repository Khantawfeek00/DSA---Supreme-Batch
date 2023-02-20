#include <iostream>
#include <vector>
#include <math.h>
#include <limits.h>
using namespace std;

int getMax(int arr[][100], int n, int m)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            maxi = max(arr[i][j], maxi);
        }
    }
    return maxi;
}

int getMin(int arr[][100], int n, int m)
{
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            mini = min(arr[i][j], mini);
        }
    }
    return mini;
}

int main()
{
    int n, m;
    cout << "Enter the number of rows of array : ";
    cin >> n;
    cout << "Enter the number of cols of array : ";
    cin >> m;
    int arr[100][100];
    cout << "Enter the elements of array : ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Maximum = " << getMax(arr, n, m) << endl;
    cout << "Minimum = " << getMin(arr, n, m) << endl;
    return 0;
}