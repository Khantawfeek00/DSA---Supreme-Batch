#include <bits/stdc++.h>
using namespace std;

// using recursion - include exclude technique
int getXor(vector<int> &nums, int i, int xorr)
{
    if (i >= nums.size())
        return xorr;

    // include
    return getXor(nums, i + 1, xorr ^ nums[i]) + getXor(nums, i + 1, xorr);
}
int subsetXORSum(vector<int> &nums)
{
    int i = 0;
    int xorr = 0;
    return getXor(nums, i, xorr);
}

int main()
{
    vector<int> arr{5, 1, 6}; // ans=28
    cout << subsetXorSum(arr);
}