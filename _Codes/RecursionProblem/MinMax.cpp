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

int main()
{
    int n;
    cout << "Enter the number of elements in array : ";
    cin >> n;
    long long arr[100000];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    pair<long long, long long> minMax = getMinMax(arr, n);
    cout << "Min - " << minMax.first << endl;
    cout << "Max - " << minMax.second << endl;
}