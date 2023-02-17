#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == target)
            {
                return {i, j};
            }
        }
    }
    return {0};
}

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout << "Enter the sum : ";
    cin >> target;
    vector<int> ans = pairSum(arr, target);
    cout << ans[0] << " " << ans[1];
}