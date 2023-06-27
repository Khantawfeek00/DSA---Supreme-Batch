#include <bits/stdc++.h>
using namespace std;

// First Position
int lowerBound(vector<int> arr, int x)
{
    int start = 0;
    int end = arr.size() - 1;
    int index = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == x)
        {
            index = mid;
            end = mid - 1;
        }
        else if (arr[mid] < x)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return index;
}

// Last Position
int upperBound(vector<int> arr, int x)
{
    int start = 0;
    int end = arr.size() - 1;
    int index = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == x)
        {
            index = mid;
            start = mid + 1;
        }
        else if (arr[mid] < x)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return index;
}

vector<int> searchRange(vector<int> &nums, int target)
{
    return {lowerBound(nums, target), upperBound(nums, target)};
}

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the element of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout << "Enter the value of k: ";
    cin >> k;
    vector<int> out = searchRange(arr, k);
    for (auto ele : out)
        cout << ele << " ";
}