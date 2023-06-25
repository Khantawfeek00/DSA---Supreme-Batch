#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// while comparing picking index and previous and next elements to find the numbers
int finOddOccElement(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = 0;
    while (start < end)
    {
        mid = start + (end - start) / 2;
        if (mid + 1 >= 0 && mid & 1 == 0 && arr[mid] == arr[mid + 1])
            start = mid + 2;
        else if (mid - 1 <= arr.size() - 1 && mid & 1 == 1 && arr[mid] == arr[mid - 1])
            start = mid + 1;
        else
            end = mid;
    }
    return arr[start];
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
    int ans = finOddOccElement(arr);
    cout << "found at index : " << ans;
    return 0;
}