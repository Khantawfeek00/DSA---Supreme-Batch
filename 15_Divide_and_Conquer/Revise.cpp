#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int mid, int e)
{
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *left = new int[len1];
    int *right = new int[len2];

    int k = s;
    for (int i = 0; i < len1; i++)
    {
        left[i] = arr[k++];
    }
    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        right[i] = arr[k++];
    }

    int i = 0;
    int j = 0;
    int start = s;
    while (i < len1 && j < len2)
    {
        if (left[i] < right[j])
            arr[start++] = left[i++];
        else
            arr[start++] = right[j++];
    }

    while (i < len1)
        arr[start++] = left[i++];
    while (j < len2)
        arr[start++] = right[j++];
}

void mergeSort(int *arr, int s, int e)
{
    // Base Case
    if (s >= e)
        return;
    int mid = s + (e - s) / 2;

    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    merge(arr, s, mid, e);
}
int main()
{
    int arr[] = {7, 3, 2, 16, 24, 4};
    int n = 6;
    int s = 0;
    int e = n - 1;
    mergeSort(arr, s, e);

    for (auto ele : arr)
        cout << ele << " ";
}