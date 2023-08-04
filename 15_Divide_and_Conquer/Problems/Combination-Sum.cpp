#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> &candidates, int target, vector<vector<int>> &ans, vector<int> &temp, int index)
{
    if (target < 0)
    {
        return;
    }
    if (target == 0)
    {
        ans.push_back(temp);
        return;
    }
    for (int i = index; i < candidates.size(); i++)
    {
        temp.push_back(candidates[i]);
        solve(candidates, target - candidates[i], ans, temp, i);
        temp.pop_back();
    }
}

vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    vector<vector<int>> ans;
    vector<int> temp;
    solve(candidates, target, ans, temp, 0);
    return ans;
}

int main()
{
    vector<int> arr = {2, 3, 6, 7};
    int target = 7;
    vector<vector<int>> ans = combinationSum(arr, target);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}