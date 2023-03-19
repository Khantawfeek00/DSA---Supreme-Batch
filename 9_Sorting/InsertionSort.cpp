#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

// if current element is greater than next element then swap
// void InsertionSort(vector<int> &arr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         int j = i;
//         while (j>0 && arr[j] < arr[j - 1])
//         {
//             swap(arr[j], arr[j - 1]);
//             j--;
//         }
//     }

//     // printing sorted array
//     cout << "Sorted Array is : ";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
// }

void InsertionSort(vector<int> arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int temp = arr[i];
        while (j >= 0 && temp < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
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
    InsertionSort(arr, n);
}