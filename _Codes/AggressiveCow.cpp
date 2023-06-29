#include <bits/stdc++.h>
using namespace std;

// Similar Questions:
//  leetcode: 1552. Magnetic Force Between Two Balls
 
// Problem Statement
//  You are given an array consisting of n integers which denote the position of a stall. You are also given an integer k which denotes the number of aggressive cows. You are given the task of assigning stalls to k cows such that the minimum distance between any two of them is the maximum possible.
//  The first line of input contains two space-separated integers n and k.
//  The second line contains n space-separated integers denoting the position of the stalls.

int isPossibleSolution(vector<int> arr, int k, int mid)
{
    int pos = arr[0];
    int c = 1;
    for (int i = 1; i < arr.size(); i++)
    {
        if ((arr[i] - pos) >= mid)
        {
            c++;
            pos = arr[i];
        }
        if (c == k)
        {
            return true;
        }
    }
    return false;
}

int solve(int n, int k, vector<int> &stall)
{

    // Write your code here
    sort(stall.begin(), stall.end());
    int start = 0;
    int end = stall[stall.size() - 1] - stall[0];
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isPossibleSolution(stall, k, mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the element of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k, x;
    cout << "Enter the value of k: ";
    cin >> k;
    cout << solve(n, k, arr);
}