#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int ExponentialSearch(vector<int> arr, int k)
{
    // Exponential Search is the binary search which is applied on part of array in which the target in lie
    int n = arr.size();
    if (arr[0] == k)
        return 0;
    int i = 1;
    while (i < n && arr[i] <= k)
    {
        i = i * 2;
    }
    int start = i / 2;
    int end = min(n - 1, i);
    // cout<<"Start = "<<start<<endl;
    // cout<<"End = "<<end<<endl;
    // Now apply binary search to this part
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == k)
            return mid;
        else if (arr[mid] > k)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
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
    int target;
    cout << "Enter Targeted Element : ";
    cin >> target;

    // Explicit implementation
    int index = ExponentialSearch(arr, target);
    if (index >= 0)
    {
        cout << target << " is found at " << index << " th position";
    }
    else
    {
        cout << target << " is not found ";
    }
    return 0;
}