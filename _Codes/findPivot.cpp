#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Also gives minimum number in sorted rotated array
int findPivotIndex(vector<int> &arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int m = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[m] >= arr[0])
            s = m + 1;
        else
            e = m;
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

    int peak = findPivotIndex(arr);
    cout << "Pivot Elemet in sorted rotated array is : " << peak;
    return 0;
}