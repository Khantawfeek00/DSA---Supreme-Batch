#include <bits/stdc++.h>
using namespace std;
bool canDistributeHelper(vector<int> &counts, vector<int> &quantity, int ithCustomer)
{

    // Base case
    if (ithCustomer >= quantity.size())
    {
        return true;
    }

    for (int i = 0; i < counts.size(); i++)
    {
        if (counts[i] >= quantity[ithCustomer])
        {
            counts[i] -= quantity[ithCustomer];
            if (canDistributeHelper(counts, quantity, ithCustomer + 1))
            {
                return true;
            }
            counts[i] += quantity[ithCustomer];
        }
    }

    return false;
}
bool canDistribute(vector<int> &nums, vector<int> &quantity)
{
    unordered_map<int, int> m;
    for (int i = 0; i < nums.size(); i++)
    {
        m[nums[i]]++;
    }
    vector<int> counts;
    for (auto ele : m)
    {
        counts.push_back(ele.second);
    }
    int ithCustomer = 0;
    sort(quantity.rbegin(), quantity.rend());
    return canDistributeHelper(counts, quantity, ithCustomer);
}

int main()
{
    vector<int> nums = {1, 1, 3, 3};
    vector<int> quantity = {2, 2};
    cout << canDistribute(nums, quantity);
}
