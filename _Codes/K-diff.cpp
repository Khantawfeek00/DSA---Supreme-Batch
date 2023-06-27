#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> arr, int start, int end, int target)
{
    int mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] > target)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}

int findPairs(vector<int> &nums, int k)
{

    // Brute force approach
    // T.C.=O(n^2) S.C.=O(n)
    //         int n=nums.size();
    //         int count=0;
    //         set<pair<int,int>> s;
    //         for(int i=0;i<n-1;i++){
    //             for(int j=i+1;j<n;j++){
    //                 if(abs(nums[i]-nums[j])==k && s.count({nums[i],nums[j]})==0 && s.count({nums[j],nums[i]})==0){
    //                     s.insert({nums[i],nums[j]});
    //                     count++;
    //                 }

    //             }
    //         }
    //         return count;

    // Sightly Optimized
    //  using STL Sort O(NlogN)and Two pointer approach O(n)
    //  T.C.=O(NLogN) S.C.=O(N)--because we are using set
    //         sort(nums.begin(),nums.end());
    //         int n=nums.size();
    //         set<pair<int,int>> s;
    //         int i=0;
    //         int j=1;
    //         while(j<n){
    //             int diff=abs(nums[j]-nums[i]);
    //             if(diff==k){
    //                 s.insert({nums[i],nums[j]});
    //                 i++;
    //                 j++;
    //             }
    //             else if(diff>k)
    //                 i++;
    //             else
    //                 j++;

    //             if(i==j) j++;
    //         }
    //         return s.size();

    // using STL Sort O(NlogN)and binary search of each element O(NLogN)
    // T.C.=O(NLogN) S.C.=O(N)--because we are using set
    int n = nums.size();
    set<pair<int, int>> s;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n - 1; i++)
    {
        if (binarySearch(nums, i + 1, n - 1, k + nums[i]) != -1)
        {
            s.insert({nums[i], nums[i] + k});
        }
    }
    return s.size();
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
    int k;
    cout << "Enter the value of k: ";
    cin >> k;
    cout << findPairs(arr, k);
}