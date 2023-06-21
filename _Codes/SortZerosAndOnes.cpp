#include <iostream>
#include <vector>
using namespace std;

// void Sorted(vector<int> &arr)
// {
//     int start = 0;
//     int end = arr.size() - 1;
//     while (start < end)
//     {
//         if (arr[start] == 0)
//         {
//             start++;
//         }
//         else if (arr[end] == 1)
//         {
//             end--;
//         }
//         else
//         {
//             swap(arr[start], arr[end]);
//         }
//     }
//     cout << "Array : ";
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

void Sorted(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start < end)
    {
        if (arr[end] == 1)
            end--;
        else if (arr[start] == 0)
            start++;
        else
            swap(arr[start], arr[end]);
    }

    for (int ele : arr)
    {
        cout << ele << " ";
    }
}

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Sorted(arr);
}
