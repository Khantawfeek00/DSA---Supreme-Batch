#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int BinarySearch(vector<int> arr, int target)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            return mid + 1;
        }
        else if (arr[mid] > target)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
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
    int index = BinarySearch(arr, target);

    // STL: Binary Search - to use include<algorithm>
    // this STL binary search only return 1 or 0 i.e either present or not present
    // int index = binary_search(arr.begin(), arr.end(), target); //For Vector
    // int index = binary_search(arr, arr+n, target); //For array
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