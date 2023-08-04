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

        if (i > index && candidates[i] == candidates[i - 1])
        {
            continue;
        }
        temp.push_back(candidates[i]);
        solve(candidates, target - candidates[i], ans, temp, i + 1);
        temp.pop_back();
    }
}
vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
{
    sort(candidates.begin(), candidates.end());
    vector<vector<int>> ans;
    vector<int> temp;
    solve(candidates, target, ans, temp, 0);
    return ans;
}

int main()
{
    vector<int> arr = {10, 1, 2, 7, 6, 1, 5};
    int target = 8;
    vector<vector<int>> ans = combinationSum2(arr, target);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}