#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

// Select the minimum element and swap with ith position
void selectionSort(vector<int> &arr, int n)
{
    int mini = INT_MAX;
    for (int i = 0; i < n - 1; i++)
    {
        mini = i;
        for (int j = i; j < n; j++)
        {
            if (arr[mini] > arr[j])
                mini = j;
        }
        swap(arr[mini], arr[i]);
    }

    // printing sorted array
    cout << "Sorted Array is : ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main()
{
    int n;
    cout << "Enter the size of vector : ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of vector : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    selectionSort(arr, n);
}