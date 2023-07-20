#include <bits/stdc++.h>
using namespace std;

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