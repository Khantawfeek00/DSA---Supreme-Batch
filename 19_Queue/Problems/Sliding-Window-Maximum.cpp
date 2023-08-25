#include <bits/stdc++.h>
#include <vector>
#include <queue>
using namespace std;
vector<int> maxSlidingWindow(vector<int> &nums, int k)
{
    vector<int> ans;

    deque<int> dq;

    // traversing first window
    for (int i = 0; i < k; i++)
    {

        // removing smallest element
        while (!dq.empty() && nums[dq.back()] < nums[i])
        {
            dq.pop_back();
        }

        // inserting index so that we can check out of window element
        dq.push_back(i);
    }

    // store answer of first window
    ans.push_back(nums[dq.front()]);

    // remaning window ko process karna hai
    for (int i = k; i < nums.size(); i++)
    {
        // out of window element ko remove kadia
        if (!dq.empty() && i - dq.front() >= k)
        {
            dq.pop_front();
        }

        // removing smallest element
        while (!dq.empty() && nums[dq.back()] < nums[i])
        {
            dq.pop_back();
        }

        // inserting index so that we can check out of window element
        dq.push_back(i);

        // store current window answer
        ans.push_back(nums[dq.front()]);
    }
    return ans;
}
int main()
{
    vector<int> arr = {
        1,
        2,
        3,
        54,
        5,
    };
    int k = 3;
    vector<int> ans = maxSlidingWindow(arr, k);
    for (auto ele : ans)
    {
        cout << ele << " ";
    }
}