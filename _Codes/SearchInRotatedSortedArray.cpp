#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


    //First we Found Pivot the apply binary search on left of pivot (0,pivot-1)
    // if index ==-1 then search in right array (pivot,arr.size()-1)
    // else return -1
    int binary(vector<int> arr,int target,int s,int e){
        int mid=s+(e-s)/2;
        while(s<=e){
            if(arr[mid]==target)
                return mid;
            else if(arr[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        while(s<e){
            if(nums[mid]>=nums[0])
                s=mid+1;
            else
                e=mid;
            mid=s+(e-s)/2;
        }
        int pivot=s;
        // cout<<"Pivot = "<<pivot;
        int index=binary(nums,target,0,pivot-1);
        if(index!=-1)
            return index;
        else{
            index=binary(nums,target,pivot,nums.size()-1);
            if(index!=-1){
                return index;
            }
            else{
                return -1;
            }
        }
        return -1;
    }

int main()
{
    int n;
    cout << "Enter the size of vector :";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of vector :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cout<<"Enter the target  value : ";
    cin>>target;
    int peak = search(arr,target);
    cout << "found at index : " << peak;
    return 0;
}