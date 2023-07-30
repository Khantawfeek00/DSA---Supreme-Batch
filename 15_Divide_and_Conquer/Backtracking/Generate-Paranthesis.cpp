#include <bits/stdc++.h>
using namespace std;

void getAllCombo(int n, vector<string> &ans, string &str, int open, int close)
{
    if (open <= 0 && close <= 0)
    {
        ans.push_back(str);
        return;
    }

    if (open > 0)
    {
        str.push_back('(');
        getAllCombo(n, ans, str, open - 1, close);
        str.pop_back();
    }

    if (close > 0 && close > open)
    {
        str.push_back(')');
        getAllCombo(n, ans, str, open, close - 1);
        str.pop_back();
    }
}
// Leetcode -  22. Generate Parentheses
vector<string> generateParenthesis(int n)
{
    vector<string> ans;
    string str;
    int open = n;
    int close = n;
    getAllCombo(n, ans, str, open, close);
    return ans;
}

int main()
{
    int n = 4;
    vector<string> ans = generateParenthesis(n);
    cout << "Pattern are -" << endl;
    for (string str : ans)
        cout << str << endl;
    return 0;
}