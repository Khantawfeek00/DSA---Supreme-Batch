#include <bits/stdc++.h>
#include <limits.h>
using namespace std;

int isTargetSum(vector<int> arr, int target)
{
    if (target == 0)
        return 0;
    if (target < 0)
        return INT_MAX;
    int mini = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        int ans = isTargetSum(arr, target - arr[i]);
        if (ans < INT_MAX)
            mini = min(mini, ans + 1);
    }
    return mini;
}

int isTarget(vector<int> arr, int target, int output)
{
    if (target == output)
        return 0;
    if (output > target)
        return INT_MAX;
    int mini = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        int ans = isTarget(arr, target, output + arr[i]);
        if (ans != INT_MAX)
            mini = min(ans + 1, mini);
    }
    return mini;
}

// Revise
int coinChangeProblem(int target, vector<int> &arr)
{
    if (target == 0)
        return 0;
    if (target < 0)
        return INT_MAX;

    long mini = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        int ans = mini, coinChangeProblem(target - arr[i], arr);
        if (ans != INT_MAX)
            mini = min(mini, ans + 1);
    }

    return mini;
}

int main()
{
    // int n;
    // cout << "Enter the value of n: ";
    // cin >> n;
    vector<int> arr{2, 4, 5, 3, 2};
    // int n = 6;
    cout << "Minimum Number of elements : ";
    int target = 20;
    int output = 0;
    cout << isTargetSum(arr, target) << endl;

    cout << "Minimum Number of elements : ";
    cout << isTarget(arr, target, output) << endl;
}