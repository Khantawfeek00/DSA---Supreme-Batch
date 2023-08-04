#include <bits/stdc++.h>
using namespace std;
void quickSort(int *arr, int s, int e)
{
    // Base case
    if (s >= e)
        return;

    // partition logic
    int pivot = e;
    int i = s - 1;
    int j = s;
    while (j < e)
    {
        if (arr[j] <= arr[pivot])
        {
            i++;
            swap(arr[i], arr[j]);
        }
        j++;
    }
    i++;
    swap(arr[i], arr[pivot]);
    // left subarray
    quickSort(arr, s, i - 1);

    // right subarray
    quickSort(arr, i + 1, e);
}

int main()
{
    int arr[] = {7, 3, 2, 16, 24, 4, 11, 9};
    int n = 8;
    int s = 0;
    int e = n - 1;
    quickSort(arr, s, e);
    for (auto ele : arr)
    {
        cout << ele << " ";
    }
}