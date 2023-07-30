#include <bits/stdc++.h>
using namespace std;

// 17. Letter Combinations of a Phone Number
void getAllCombos(string &digits, vector<string> &ans, int i, vector<string> &mapped, string &str)
{
    if (i >= digits.length())
    {
        ans.push_back(str);
        return;
    }

    string ith = mapped[digits[i] - '0'];
    for (int j = 0; j < ith.length(); j++)
    {
        str.push_back(ith[j]);
        getAllCombos(digits, ans, i + 1, mapped, str);
        // backtrack condition
        str.pop_back();
    }
}
vector<string> letterCombinations(string &digits)
{
    int i = 0;
    vector<string> ans;
    vector<string> mapped = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    string str;
    getAllCombos(digits, ans, i, mapped, str);
    return ans;
}
int main()
{
    string digits = "23";
    vector<string> ans = letterCombinations(digits);
    for (string str : ans)
        cout << str << endl;
    return 0;
}