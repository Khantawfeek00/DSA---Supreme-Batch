#include <iostream>
#include <vector>
using namespace std;

vector<int> Triplet(vector<int> arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            for (int k = j + 1; k < arr.size(); k++)
            {
                if (arr[i] + arr[j] + arr[k] == target)
                {
                    return {arr[i], arr[j], arr[k]};
                }
            }
        }
    }
    return {0};
}

vector<int> FourSum(vector<int> arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            for (int k = j + 1; k < arr.size(); k++)
            {
                for (int p = k + 1; p < arr.size(); p++)
                {
                    if (arr[i] + arr[j] + arr[k] + arr[p] == target)
                    {
                        return {arr[i], arr[j], arr[k], arr[p]};
                    }
                }
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
    vector<int> ans = FourSum(arr, target);
    cout << ans[0] << " " << ans[1] << " " << ans[2] << " " << ans[3];
}