#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Check for mid ,mid+1,mid-1 because mid value may be at i,i-1,i+1
//  position because array is nearly sorted
// int SearchInNearlySortedArray(vector<int> arr, int target)
// {
//     int n = arr.size();
//     int s = 0;
//     int e = n - 1;
//     int mid = s + (e - s) / 2;

//     while (s <= e)
//     {
//         if (arr[mid] == target)
//             return mid;
//         else if (arr[abs(mid - 1) % n] == target)
//             return abs(mid - 1) % n;
//         else if (arr[(mid + 1) % n] == target)
//             return (mid + 1) % n;

//         if (arr[mid] > target)
//             e = mid - 2;
//         else
//             s = mid + 2;
//         mid = s + (e - s) / 2;
//     }
//     return -1;
// }

int SearchInNearlySortedArray(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;

    int mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
            return mid;
        else if (mid > 0 && arr[mid - 1] == target)
            return mid - 1;
        else if (mid < arr.size() - 1 && arr[mid + 1] == target)
            return mid + 1;
        else if (arr[mid] > target)
            end = mid - 2;
        else
            start = mid + 2;
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
    cout << "Enter the target  value : ";
    cin >> target;
    int ans = SearchInNearlySortedArray(arr, target);
    cout << "found at index : " << ans;
    return 0;
}