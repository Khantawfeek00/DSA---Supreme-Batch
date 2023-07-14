#include <bits/stdc++.h>
using namespace std;
// T.C.=O(n^2) S.C.=O(n+2)==O(n)
// void printSubArrays_util(vector<int> &arr, int start, int end)
// {
//     if (start >= arr.size() || end >= arr.size())
//         return;
//     int a = start;
//     while (a <= end)
//         cout << arr[a++] << " ";
//     cout << endl;
//     printSubArrays_util(arr, start, end + 1);
// }

// void printSubArrays(vector<int> &arr)
// {
//     for (int i = 0; i < arr.size(); i++)
//     {
//         printSubArrays_util(arr, i, i);
//     }
// }

void printSubArrays(vector<int> &arr, int start, int end)
{

    if (start == arr.size())
        return;

    if (start > end)
        printSubArrays(arr, 0, end + 1);
    else
    {
        for (int i = start; i <= end; i++)
            cout << arr[i] << " ";
        cout << endl;
        printSubArrays(arr, start + 1, end);
    }
    return;
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 5};
    printSubArrays(arr, 0, 0);
}