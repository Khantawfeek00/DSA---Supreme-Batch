#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int x, int start, int end)
{
    if (start > end)
        return -1;
    int mid = start + (end - start) / 2;
    if (arr[mid] == x)
        return mid;
    return arr[mid] > x ? search(arr, x, start, mid - 1) : search(arr, x, mid + 1, end);
}

int main()
{
    int n, x;
    cout << "Enter the number of elements in array : ";
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter the value of X: ";
    cin >> x;
    int start = 0;
    int end = n - 1;
    int mid = (start + (end - start) / 2);
    cout << "Index = " << search(arr, x, start, end);
}