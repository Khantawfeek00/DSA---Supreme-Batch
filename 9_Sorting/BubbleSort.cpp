#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

// if current element is greater than next element then swap
// void BubbleSort(vector<int> &arr, int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//                 swap(arr[j], arr[j + 1]);
//         }
//     }

//     // printing sorted array
//     cout << "Sorted Array is : ";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
// }

// //check that if no swap done then stop the iteration because the array is sorted when
// void OptimisedBubbleSort(vector<int> &arr, int n)
// {
//     bool flag = true;
//     for (int i = 0; i < n - 1; i++)
//     {
//         flag = true;
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//                 flag = false;
//             }
//         }
//         if (flag)
//         {
//             break;
//         }
//     }

//     // printing sorted array
//     cout << "Sorted Array is : ";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
// }

// Revise
int bubbleSort(vector<int> arr)
{
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
    BubbleSort(arr, n);
}