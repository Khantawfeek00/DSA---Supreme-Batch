#include <bits/stdc++.h>
using namespace std;

// bool isSorted(int arr[], const int &n, int i)
// {
//     if (i >= n)
//     {
//         return true;
//     }
//     if (arr[i] < arr[i - 1])
//         return false;
//     return isSorted(arr, n, i + 1);
// }

// without using i
bool isSorted(int arr[], int n)
{
    // if (n == 1)
    // {
    //     return true;
    // }
    // if (arr[n - 1] < arr[n - 2])
    //     return false;
    // return isSorted(arr, n - 1);

    if (n == 1)
        return true;
    return arr[n - 1] < arr[n - 2] ? false : isSorted(arr, n - 1);
}
int main()
{
    int n, x;
    cout << "Enter the number of elements in array : ";
    cin >> n;
    int arr[100000];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int i = 1;
    // cout << isSorted(arr, n, i);
    cout << isSorted(arr, n);
}