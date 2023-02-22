#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findPeakIndex(vector<int> &arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int m = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[m] > arr[m + 1])
            e = m;
        else
            s = m + 1;
        m = s + (e - s) / 2;
    }
    return s;
}

int main()
{
    int n;
    cout << "Enter the size of vector :";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of vector :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int peak = findPeakIndex(arr);
    cout << "Peak of the Mountain Array is at index : " << peak;
    return 0;
}