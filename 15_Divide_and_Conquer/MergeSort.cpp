#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *left = new int[len1];
    int *right = new int[len2];

    // copying left part to leftarray
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        left[i] = arr[k];
        k++;
    }

    // copying right part to rightarray
    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        right[i] = arr[k];
        k++;
    }

    int i = 0;
    int j = 0;
    int start = s;
    while (i < len1 && j < len2)
    {
        if (left[i] > right[j])
        {
            arr[start] = right[j];
            j++;
            start++;
        }
        else
        {
            arr[start] = left[i];
            i++;
            start++;
        }
    }
    while (i < len1)
    {
        arr[start] = left[i];
        i++;
        start++;
    }

    while (j < len2)
    {
        arr[start] = right[j];
        j++;
        start++;
    }

    // TODO: delete left and right subarray
}
void mergeSort(int *arr, int s, int e)
{
    /*base case | when arrray has only one element then stop and sort them
    s==e -->single element
    s>e --> invalid array */
    if (s >= e)
        return;

    int mid = s + (e - s) / 2;
    // MergeSort Left subarray
    mergeSort(arr, s, mid);

    // MergeSort Right subarray
    mergeSort(arr, mid + 1, e);

    // Now Merging both the sorted array
    merge(arr, s, e);
}
int main()
{
    int arr[] = {7, 3, 2, 16, 24, 4, 11, 9};
    int n = 8;
    int s = 0;
    int e = n - 1;
    mergeSort(arr, s, e);

    for (auto ele : arr)
    {
        cout << ele << " ";
    }
}