#include <bits/stdc++.h>
using namespace std;
long long getMax(long long a[], int n)
{
    if (n == 1)
    {
        return a[0];
    }
    return max(a[n - 1], getMax(a, n - 1));
}

long long getMin(long long a[], int n)
{
    if (n == 1)
    {
        return a[0];
    }
    return min(a[n - 1], getMin(a, n - 1));
}

pair<long long, long long> getMinMax(long long a[], int n)
{
    return {getMin(a, n), getMax(a, n)};
}

// int findMax(int arr[], int n, int i, int maxi)
// {
//     if (i == n - 1)
//         return arr[n - 1];
//     maxi = max(arr[i], findMax(arr, n, i + 1, maxi));
//     return maxi;
// }

// Using reference variable
void findMax(int arr[], int n, int i, int &maxi)
{
    if (i >= n)
        return;

    if (arr[i] > maxi)
    {
        maxi = arr[i];
    }
    findMax(arr, n, i + 1, maxi);
}

void findMin(int arr[], int n, int i, int &mini)
{
    if (i >= n)
        return;

    if (arr[i] < mini)
        mini = arr[i];
    findMin(arr, n, i + 1, mini);
}

int main()
{
    int n;
    cout << "Enter the number of elements in array : ";
    cin >> n;
    int arr[100000];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    // pair<long long, long long> minMax = getMinMax(arr, n);
    // cout <<"Min - "<<minMax.first << endl;
    // cout <<"Max - "<<minMax.second << endl;
    int maxi = INT_MIN; 
    findMax(arr, n, 0, maxi);
    cout << "Max - " << maxi << endl;
    int mini = INT_MAX;
    findMin5(arr, n, 0, mini);
    cout << "Mini - " << mini;
}