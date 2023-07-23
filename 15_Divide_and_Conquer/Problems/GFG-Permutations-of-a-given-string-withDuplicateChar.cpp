#include <bits/stdc++.h>
using namespace std;
set<string> ans;

void getPerm(string &s, int i, string str)
{

    if (i >= s.length())
    {
        ans.insert(str);
        return;
    }

    for (int j = i; j < s.length(); j++)
    {
        swap(s[i], s[j]);
        getPerm(s, i + 1, str + s[i]);
        swap(s[i], s[j]);
    }
}

vector<string> find_permutation(string &S)
{
    // Code here there
    getPerm(S, 0, "");

    vector<string> result;
    for (auto i : ans)
    {
        result.push_back(i);
    }
    sort(result.begin(), result.end());
    return result;
}

int main()
{
    string str;
    cin >> str;
    vector<string> vstr = find_permutation(str);

    for (auto ele : vstr)
        cout << ele << " ";
}