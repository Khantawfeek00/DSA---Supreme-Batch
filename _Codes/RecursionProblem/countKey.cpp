#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int N, int X, int count)
{
    // Using Recursion
    if (N == 0)
        return count;
    return arr[N - 1] == X ? search(arr, N - 1, X, count + 1) : search(arr, N - 1, X, count);
}
int main()
{
    int n, x;
    cout << "Enter the number of elements in array : ";
    cin >> n;
    int arr[100000];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter the value of X: ";
    cin >> x;
    cout << "Index = " << search(arr, n, x, 0);
}