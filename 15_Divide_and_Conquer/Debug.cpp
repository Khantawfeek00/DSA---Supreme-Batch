#include <bits/stdc++.h>
using namespace std;
/*
1. Debug the code.
void merge(int arr[], int start, int mid, int end)
{
    int left[mid - start + 1];
    int right[end - mid];
    for (int i = 0; i < mid - start + 1; i++)
    {
        left[i] = arr[start + i];
    }
    for (int j = 0; j < end - mid; j++)
    {
        right[j] = arr[mid + 1 + j];
    }
    int i = 0, j = 0, k = start;
    while (i < mid - start + 1 && j < end - mid)
    {
        if (left[i] < right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while (i < mid - start + 1)
    {
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < end - mid)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void merge_sort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int mid = start + (end - start) / 2;
    merge_sort(arr, start, mid);
    merge_sort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}
int main()
{
    int arr[] = {5, 3, 8, 4, 2, 7, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << n << endl;
    merge_sort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
*/

/*2. Debug the code.

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
int main()
{
    int arr[] = {3, 7, 1, 8, 4, 6, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}*/

/*3. Debug the code.

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

int kthSmallest(int arr[], int l, int r, int k)
{
    int index = partition(arr, l, r);
    if (index == k)
        return arr[index];
    if (index > k)
        return kthSmallest(arr, l, index - 1, k);
    return kthSmallest(arr, index + 1, r, k);
}

int main()
{
    int arr[] = {31, 78, 1, 18, 74, 65, 22, 51};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
        cout << "Kth Smallest= " << kthSmallest(arr, 0, n - 1, i) << endl;

    return 0;
}
*/

/*4. Debug the code. This code uses binary search to find ceil index of the target number.
int ceilSearch(int arr[], int low, int high, int x)
{
    int mid;
    if (x <= arr[low])
        return low;
    if (x > arr[high])
        return -1;
    mid = (low + high) / 2;
    if (arr[mid] == x)
        return mid;
    else if (arr[mid] < x)
    {
        if (mid + 1 <= high && x <= arr[mid + 1])
            return mid + 1;
        else
            return ceilSearch(arr, mid + 1, high, x);
    }
    else
    {
        if (mid - 1 >= low && x > arr[mid - 1])
            return mid;
        else
            return ceilSearch(arr, low, mid - 1, x);
    }
}

int main()
{
    int arr[] = {1, 2, 8, 10, 10, 12, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int index = ceilSearch(arr, 0, n - 1, x);
    if (index == -1)
        cout << "Doesn't Exist";
    else
        cout << "Value at ceil index of " << x << " is " << index;

    return 0;
}

*/

/*5. Debug the code*/

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main()
{
    cout << gcd(13, 39);
}