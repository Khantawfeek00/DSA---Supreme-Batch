#include <bits/stdc++.h>
using namespace std;

// void merge(int *arr, int s, int mid, int e)
// {
//     int len1 = mid - s + 1;
//     int len2 = e - mid;
//     int *left = new int[len1];
//     int *right = new int[len2];
//     int k = s;
//     for (int i = 0; i < len1; i++)
//     {
//         left[i] = arr[k++];
//     }
//     k = mid + 1;
//     for (int i = 0; i < len2; i++)
//     {
//         right[i] = arr[k++];
//     }
//     int i = 0;
//     int j = 0;
//     int start = s;
//     while (i < len1 && j < len2)
//     {
//         if (left[i] < right[j])
//             arr[start++] = left[i++];
//         else
//             arr[start++] = right[j++];
//     }
//     while (i < len1)
//         arr[start++] = left[i++];
//     while (j < len2)
//         arr[start++] = right[j++];
// }
// void mergeSort(int *arr, int s, int e)
// {
//     // Base Case
//     if (s >= e)
//         return;
//     int mid = s + (e - s) / 2;
//     mergeSort(arr, s, mid);
//     mergeSort(arr, mid + 1, e);
//     merge(arr, s, mid, e);
// }
// int main()
// {
//     int arr[] = {7, 3, 2, 16, 24, 4};
//     int n = 6;
//     int s = 0;
//     int e = n - 1;
//     mergeSort(arr, s, e);
//     for (auto ele : arr)
//         cout << ele << " ";
// }

// Revise

void merge(int *arr, int s, int m, int e)
{
    int len1 = m - s + 1;
    int len2 = e - m;

    int *left = new int[len1];
    int *right = new int[len2];

    int k = s;
    for (int i = 0; i < len1; i++)
    {
        left[i] = arr[k++];
    }

    k = m + 1;
    for (int i = 0; i < len2; i++)
    {
        right[i] = arr[k++];
    }

    int i = 0;
    int j = 0;
    int originalIndex = s;

    while (i < len1 && j < len2)
    {
        if (left[i] > right[j])
            arr[originalIndex++] = right[j++];
        else
            arr[originalIndex++] = left[i++];
    }
    while (i < len1)
        arr[originalIndex++] = left[i++];
    while (j < len2)
        arr[originalIndex++] = right[j++];
}
void mergeSort(int *arr, int s, int e)
{
    if (s >= e)
        return;

    int mid = s + (e - s) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    merge(arr, s, mid, e);
}

int partition(int *arr, int s, int e)
{
    int pivotElement = arr[s];
    int pivotIndex = s;
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivotElement)
        {
            count++;
        }
    }

    int rightIndex = s + count;
    swap(arr[pivotIndex], arr[rightIndex]);
    pivotIndex = rightIndex;

    int i = s;
    int j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivotElement)
            i++;

        while (arr[j] > pivotElement)
            j--;

        if (i < pivotIndex && j > pivotIndex)
            swap(arr[i], arr[j]);
    }
    return pivotIndex;
}

void quickSort(int *arr, int s, int e)
{
    if (s >= e)
        return;

    int pivot = partition(arr, s, e);

    // left subarray
    quickSort(arr, s, pivot - 1);
    quickSort(arr, pivot + 1, e);
}

int main()
{

    int arr[] = {10, 80, 30, 90, 40};
    int n = 6;
    int s = 0;
    int e = n - 1;
    // mergeSort(arr, s, e);
    quickSort(arr, s, e);
    for (auto ele : arr)
        cout << ele << " ";
}