#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int> &nums, int n)
{

    // O(n)
    int i = 0;
    for (int j = 0; i < n && j < n; j++)
    {
        if (nums[j] != 0)
        {
            nums[i] = nums[j];
            if (i != j)
            {
                nums[j] = 0;
            }
            i++;
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
    moveZeroes(arr, n);

    // Printing Array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}