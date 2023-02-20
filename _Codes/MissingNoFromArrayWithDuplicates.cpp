#include <iostream>
#include <vector>
using namespace std;

int MissingNoFromArrayWithDuplicates(vector<int> &nums, int n)
{

    // Using Multipy by -1 to check visited or not
    // O(n)-Time  O(1)-Space
    for (int i = 0; i < n; i++)
    {
        int index = abs(nums[i]);
        if (nums[index - 1] > 0)
            nums[index - 1] *= -1;
    }
    cout << "Missing Number : ";
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > 0)
        {
            cout << i + 1 << " ";
        }
    }
    return -1;

    // Using Cyclic Sort
    // O(n)-Time  O(1)-Space
    for (int i = 0; i < n;)
    {
        int index = nums[i] - 1;
        if (nums[i] != nums[index])
            swap(nums[i], nums[index]);
        else
            i++;
    }
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != i + 1)
        {
            cout << i + 1 << " ";
        }
    }
}

int main()
{
    int n, m;
    cout << "Enter the size of array : ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    MissingNoFromArrayWithDuplicates(arr, n);
    return 0;
}

// Test Case
//  i/p: 1 3 5 3 4
//  o/p: 2