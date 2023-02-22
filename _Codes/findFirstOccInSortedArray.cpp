#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findFirst(vector<int> &nums, int target)
{
    int index = -1;
    int s = 0;
    int e = nums.size() - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (nums[mid] == target)
        {
            index = mid;
            e = mid - 1;
        }
        else if (nums[mid] > target)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return index;
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
    int index = findFirst(arr, target);
    if (index >= 0)
    {
        cout << "First Occurence of " << target << " is found at " << index << "th index";
    }
    else
    {
        cout << target << " is not found ";
    }
    return 0;
}