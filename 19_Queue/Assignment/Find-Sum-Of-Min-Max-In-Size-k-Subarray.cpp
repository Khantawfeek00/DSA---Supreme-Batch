#include <bits/stdc++.h>
#include <vector>
#include <deque>
using namespace std;
vector<int> SumMinMaxSlidingWindow(vector<int> &nums, int k)
{
    vector<int> ans;

    deque<int> qMax;
    deque<int> qMin;

    // process first window
    for (int i = 0; i < k; i++)
    {

        while (!qMax.empty() && nums[qMax.back()] < nums[i])
        {
            qMax.pop_back();
        }
        qMax.push_back(i);

        while (!qMin.empty() && nums[qMin.back()] > nums[i])
        {
            qMin.pop_back();
        }
        qMin.push_back(i);
    }

    // store ans of first window
    ans.push_back(nums[qMax.front()] + nums[qMin.front()]);

    for (int i = k; i < nums.size(); i++)
    {

        // Remove out of window elements
        while (!qMax.empty() && i - qMax.front() >= k)
        {
            qMax.pop_front();
        }

        while (!qMax.empty() && i - qMin.front() >= k)
        {
            qMin.pop_front();
        }

        // removing greater elements
        while (!qMax.empty() && nums[qMax.back()] < nums[i])
        {
            qMax.pop_back();
        }
        qMax.push_back(i);

        while (!qMin.empty() && nums[qMin.back()] > nums[i])
        {
            qMin.pop_back();
        }
        qMin.push_back(i);

        // store ans of remaining windows
        ans.push_back(nums[qMax.front()] + nums[qMin.front()]);
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
    vector<int> ans = SumMinMaxSlidingWindow(arr, k);
    for (auto ele : ans)
    {
        cout << ele << " ";
    }
}