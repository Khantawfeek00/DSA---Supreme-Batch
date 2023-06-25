#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = 0;
    int miss = -1;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == mid + 1)
        {
            start = mid + 1;
        }
        else if (arr[mid] != mid + 1)
        {
            miss = mid + 1;
            end = mid - 1;
        }
    }
    return miss;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Missing Number is : " << missingNumber(arr);
}