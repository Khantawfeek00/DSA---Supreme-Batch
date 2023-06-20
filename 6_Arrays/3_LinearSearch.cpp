#include <cstring>
#include <limits.h>
#include <iostream>
using namespace std;

// bool linearSearch(int arr[], int size, int key)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == key)
//             return true;
//     }
//     return false;
// }
// int main()
// {
//     int arr[1000];
//     int n, key;
//     cout << "Enter the size of array : ";
//     cin >> n;
//     cout << "Enter the elements of array : ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "Enter the key to find : ";
//     cin >> key;
//     if (linearSearch(arr, n, key))
//     {
//         cout << "Found" << endl;
//     }
//     else
//     {
//         cout << "Not Found" << endl;
//     }
// }

// Revise
int linearSearch(int key, int arr[], int size)
{
    for (int i = 0; i < size; i++)
        if (arr[i] == key)
            return i;
    return -1;
}

int main()
{

    // int arr[1000], n, key;
    // cout << "Enter the size of array: ";
    // cin >> n;
    // cout << "Enter the values of array: ";
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // cout << "Enter the key you want to search: ";
    // cin >> key;
    // int index = linearSearch(key, arr, n);
    // if (index == -1)
    //     cout << "The key is not found";
    // else
    //     cout << "The key is found at index : " << index;

    // Note:
    cout << INT_MIN << endl;
    cout << INT_MAX << endl;
}