#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// bool cmp(int first, int second)
// {
//     return to_string(first).compare(to_string(second)) >= 0 ? true : false;
// }
// string largestNumber(vector<int> &nums)
// {
//     sort(nums.begin(), nums.end(), cmp);
//     string ans = "";
//     for (int i = 0; i < nums.size(); i++)
//         ans += to_string(nums[i]);
//     return ans;
//     ans.substr(0,8);
// }

int main()
{
    // int n;
    // cout << "Enter the size of vector :";
    // cin >> n;
    // vector<int> arr(n);
    // cout << "Enter the elements of vector :";
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // // cout << largestNumber(arr);
    // return 0;

    vector<string> arr={"flower","flow","flight"};
    sort(arr.begin(),arr.end());
    for(string str:arr){
        cout<<str<<endl;
    }
}
