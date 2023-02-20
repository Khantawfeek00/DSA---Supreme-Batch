#include <iostream>
#include <vector>
using namespace std;

//
void MoveNeagtiveToLeft(vector<int> &nums, int n)
{

    // Brute Force Solution
    //  for (int i = 0, j = 0; i < n && j < n; j++)
    //  {
    //      if (nums[j] < 0)
    //          swap(nums[i++], nums[j]);
    //  }

    // Dutch National flag
    int low = 0;
    int high = nums.size() - 1;
    while (low < high)
    {
        if (nums[low] < 0)
            low++;
        else if (nums[high] > 0)
            high--;
        else
            swap(nums[low], nums[high]);
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
    MoveNeagtiveToLeft(arr, n);

    // Printing Array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}