#include <bits/stdc++.h>
using namespace std;

int partition(int *arr, int s, int e)
{

    // step 1:choose right position of pivot element
    int pivotIndex = s;
    int pivotElement = arr[s];

    /* step 2:find the right poisiton of the pivot element
    and place it there */
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivotElement)
            count++;
    }

    int rightIndex = s + count;
    swap(arr[pivotIndex], arr[rightIndex]);
    pivotIndex = rightIndex;

    // step 3: left me chote and right me bade element
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
    // Base case
    if (s >= e)
        return;

    // partition logic
    int pivot = partition(arr, s, e);

    // left subarray
    quickSort(arr, s, pivot - 1);

    // right subarray
    quickSort(arr, pivot + 1, e);
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