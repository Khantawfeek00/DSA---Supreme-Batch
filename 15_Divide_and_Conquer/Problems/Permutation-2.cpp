#include <bits/stdc++.h>
using namespace std;
/*
    void allPerm(vector<int>& nums,int i,set<vector<int>>& ans){
        if(i>=nums.size()){
            ans.insert(nums);
            return;
        }
        for(int j=i;j<nums.size();j++){
            swap(nums[i],nums[j]);
            allPerm(nums,i+1,ans);
            swap(nums[i],nums[j]);
        }

    }*/

void allPerm(vector<int> &nums, int i, vector<vector<int>> &ans)
{
    if (i >= nums.size())
    {
        ans.push_back(nums);
        return;
    }
    unordered_map<int, bool> visited;
    for (int j = i; j < nums.size(); j++)
    {
        if (visited.find(nums[j]) != visited.end())
        {
            continue;
        }
        visited[nums[j]] = true;

        swap(nums[i], nums[j]);
        allPerm(nums, i + 1, ans);
        swap(nums[i], nums[j]);
    }
}
vector<vector<int>> permuteUnique(vector<int> &nums)
{
    /*set<vector<int>> ans;
    vector<vector<int>> out;
    allPerm(nums,0,ans);
    for (const vector<int>& v : ans) {
        out.push_back(v);
    }
    return out;

    */
    vector<vector<int>> ans;
    allPerm(nums, 0, ans);
    return ans;
}
int main()
{
    vector<int> arr = {1, 1, 2};
    vector<vector<int>> ans = permuteUnique(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
