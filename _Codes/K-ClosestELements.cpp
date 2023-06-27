#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> arr, int x)
{
    int start = 0;
    int end = arr.size() - 1;
    int index = arr.size();
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
            start = mid + 1;
        else
            end = mid;
    }
    return end;
}

vector<int> findClosestElements(vector<int> &arr, int k, int x)
{

    // Using 2 pointers
    //  T.C.=O(n-k) S.C.=O(1)
    //         int n=arr.size();
    //         int start=0;
    //         int end=n-1;

    //         while(end-start>=k){
    //             if(abs(arr[start]-x)>abs(arr[end]-x)){
    //                 start++;
    //             }
    //             else end--;
    //         }
    //         return vector<int>(arr.begin()+start, arr.begin()+end+1);

    // Slightly better approach same as previous using 2 pointers
    //  step1: find smallest element which is greter than x
    //  after that expand the start and end after comparing
    int n = arr.size();
    int up = binarySearch(arr, x);
    int start = up - 1;
    int end = up;
    cout << "Start = " << start << endl;
    cout << "End = " << end << endl;
    while (start >= 0 && end < n && k > 0)
    {
        if (abs(arr[start] - x) <= abs(arr[end] - x))
        {
            start--;
        }
        else
        {
            end++;
        }
        k--;
    }

    while (start >= 0 && k > 0)
    {
        start--;
        k--;
    }
    while (end < n && k > 0)
    {
        end++;
        k--;
    }
    return vector<int>(arr.begin() + start + 1, arr.begin() + end);
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
    cout << "Enter the value of x: ";
    cin >> x;
    vector<int> out = findClosestElements(arr, k, x);
    for (auto ele : out)
        cout << ele << " ";
}