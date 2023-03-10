#include <vector>
#include <iostream>
#include <string.h>
using namespace std;

int findpivot(vector<int> arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] > arr[0])
            s = mid + 1;
        else
            e = mid;
        mid = s + (e - s) / 2;
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
    // Explicit implementation
    int index = findpivot(arr);
    if (index >= 0)
    {
        cout << "pivot is : " << arr[index];
    }
    else
    {
        cout << "no pivot ";
    }
    return 0;
}