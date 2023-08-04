
#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &nums, int s, int e)
{
    // T.C.=O() S.C.=O(1)
    int totalEle = e - s + 1;
    int gap = totalEle / 2 + totalEle % 2;
    while (gap > 0)
    {
        int i = s;
        int j = s + gap;
        while (j <= e)
        {
            if (nums[i] > nums[j])
            {
                swap(nums[i], nums[j]);
            }
            i++;
            j++;
        }
        gap = gap <= 1 ? 0 : (gap / 2) + (gap % 2);
    }
}
/*
void merge(vector<int>& nums,int s,int m,int e){
    //T.C.=O(n) S.C.=O(n)
    int len1=m-s+1;
    int len2=e-m;

    int * left=new int[len1];
    int * right=new int[len1];

    int k=s;
    for(int i=0;i<len1;i++){
        left[i]=nums[k++];
    }
    k=m+1;
    for(int i=0;i<len2;i++){
        right[i]=nums[k++];
    }

    int i=0;
    int j=0;
    k=s;
    while(i<len1 && j<len2){
        if(left[i]<right[j]){
            nums[k++]=left[i++];
        }
        else{
            nums[k++]=right[j++];
        }
    }
    while(i<len1){
        nums[k++]=left[i++];
    }

    while(j<len2){
        nums[k++]=right[j++];
    }


}*/

void mergeSort(vector<int> &nums, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;
    mergeSort(nums, s, mid);
    mergeSort(nums, mid + 1, e);
    merge(nums, s, e);
}
vector<int> sortArray(vector<int> &nums)
{
    int n = nums.size();
    int s = 0;
    int e = n - 1;
    mergeSort(nums, s, e);
    return nums;
}
int main()
{
    vector<int> arr = {7, 3, 2, 16, 24, 4, 11, 9};
    vector<int> ans = sortArray(arr);

    for (auto ele : ans)
    {
        cout << ele << " ";
    }
}