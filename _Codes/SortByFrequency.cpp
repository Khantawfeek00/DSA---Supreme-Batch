#include <bits/stdc++.h>
#include <limits.h>
using namespace std;
// 451. Sort Characters By Frequency
static bool cmp(pair<char, int> a, pair<char, int> b)
{
    return a.second > b.second;
}
string frequencySort(string s)
{
    vector<pair<char, int>> arr(123, {' ', 0});

    for (int i = 0; i < s.length(); i++)
    {
        arr[s[i]].second += 1;
        arr[s[i]].first = s[i];
    }

    sort(arr.begin(), arr.end(), cmp);

    // for(int i=0;i<256;i++){
    //     cout<< arr[i].second<<"== "<<arr[i].first<<endl;
    // }

    string str;
    for (int i = 0; i < arr.size(); i++)
    {
        while (arr[i].second-- > 0)
        {
            str.push_back(arr[i].first);
        }
    }
    return str;
}
int main()
{
    string str;
    cout << "Enter the string : ";
    cin >> str;
    cout << frequencySort(str);
}