#include <bits/stdc++.h>
using namespace std;
/*
    bool isBeautiful(vector<int>& nums){
        for(int i=0;i<nums.size();i++){
            if(nums[i]%(i+1)!=0 && (i+1)%nums[i]!=0){
                return false;
            }
        }
        return true;
    }


    //using Backtraking
    void allPerm(vector<int>& nums,int i,int& count){
        if(i>=nums.size()){
            if(isBeautiful(nums))
                count++;
            return;
        }
        for(int j=i;j<nums.size();j++){
            swap(nums[i],nums[j]);
            allPerm(nums,i+1,count);
            swap(nums[i],nums[j]);
        }

    }*/

void generateBeauti(vector<int> &arr, int &n, int &count, int currNum)
{

    // Base case
    if (currNum > n)
    {
        count++;
        return;
    }

    // recursive call
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == 0 && ((currNum % i == 0) || (i % currNum == 0)))
        {
            arr[i] = currNum;
            generateBeauti(arr, n, count, currNum + 1);
            arr[i] = 0; // backtrack condition
        }
    }
}

int countArrangement(int n)
{
    // int count=0;
    // vector<int> nums;
    // for(int i=0;i<n;i++){
    //     nums.push_back(i+1);
    // }
    // allPerm(nums,0,count);
    // return count;

    vector<int> arr(n + 1);
    int count = 0;
    int currNum = 1;
    generateBeauti(arr, n, count, currNum);
    return count;
}

int main()
{
    int n = 15;
    cout << countArrangement(n);
}