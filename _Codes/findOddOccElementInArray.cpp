#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//while comparing picking index and previous and next elements to find the numbers
int finOddOccElement(vector<int> arr)
{
    int n = arr.size();
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (s == e)
            return mid;
        if (mid % 2 == 0)
        {
            if (arr[mid] == arr[mid + 1])
                s = mid + 2;
            else
                e = mid;
        }
        else
        {
            if (arr[mid] == arr[mid - 1])
                s = mid + 1;
            else
                e = mid - 1;
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
    int ans = finOddOccElement(arr);
    cout << "found at index : " << ans;
    return 0;
}