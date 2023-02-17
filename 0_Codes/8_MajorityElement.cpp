#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> &nums)
{

    // Brute Force Approach
    //  int count=0;
    //  for(int i=0;i<nums.size();i++){
    //      count=0;
    //      if(nums[i]!=INT_MIN){
    //          for(int j=i+1;j<nums.size();j++){
    //              if(nums[i]==nums[j]){
    //                  nums[j]=INT_MIN;
    //                  count++;
    //              }
    //          }
    //      }
    //      if(count>=nums.size()/2){
    //          return nums[i];
    //      }
    //  }
    //  return 0;

    // Using Sorting ---O(nlogn)
    //  int n=nums.size();
    //  int count=1;
    //  sort(nums.begin(), nums.end());
    //  for(int i=0,j=1;i<n&&j<n;){
    //      if(nums[i]==nums[j]){
    //          count++;
    //          j++;
    //      }
    //      else {
    //          i=j;
    //          count=1;
    //          j++;
    //      }
    //      if(count>n/2){
    //          return nums[i];
    //      }
    //  }
    //  return nums[0];

    // Increase and Decrese
    int major = nums[0];
    int count = 1;
    for (int i = 1; i < nums.size(); i++)
    {
        if (count == 0)
        {
            count++;
            major = nums[i];
        }
        else if (major == nums[i])
        {
            count++;
        }
        else
            count--;
    }
    return major;
}

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Majority Element = " << majorityElement(arr);
}
