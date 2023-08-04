#include <bits/stdc++.h>
using namespace std;
int mergeSortApproach(vector<int> &nums, int s, int e)
{
    if (s >= e)
    {
        return nums[s];
    }

    int mid = s + (e - s) / 2;
    int leftSum = mergeSortApproach(nums, s, mid);
    int rightSum = mergeSortApproach(nums, mid + 1, e);

    int leftBorderedSum = 0, leftMaxBorder = INT_MIN;
    for (int i = mid; i >= s; i--)
    {
        leftBorderedSum += nums[i];
        if (leftBorderedSum > leftMaxBorder)
        {
            leftMaxBorder = leftBorderedSum;
        }
    }

    int rightBorderedSum = 0, rightMaxBorder = INT_MIN;
    for (int i = mid + 1; i <= e; i++)
    {
        rightBorderedSum += nums[i];
        if (rightBorderedSum >= rightMaxBorder)
        {
            rightMaxBorder = rightBorderedSum;
        }
    }

    int totalSum = rightMaxBorder + leftMaxBorder;

    return max(leftSum, max(rightSum, totalSum));
}
int maxSubArray(vector<int> &nums)
{
    /*
    int sum = 0;
    int max = nums[0];
    for (int i = 0; i < nums.size(); i++)
    {
        if (sum < 0)
            sum = 0;
        sum = sum + nums[i];
        if (sum > max)
            max = sum;
    }
    return max;
    */

    // using D&C approach
    // T.C.=O(nlogn)
    int s = 0;
    int e = nums.size() - 1;
    return mergeSortApproach(nums, s, e);
}
int main()
{
    // int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    // int n = 8;
    // cout << "Maximum Sum = " << MaxSubArraySum(arr, n);

    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Maximum Sum = " << maxSubArray(arr);
}