#include <bits/stdc++.h>
using namespace std;

void printAllPermutation(string &str, int i)
{
    if (i >= str.length())
    {
        cout << str << endl;
        return;
    }
    for (int j = i; j < str.length(); j++)
    {
        // swapping values
        swap(str[i], str[j]);

        // recursive call
        printAllPermutation(str, i + 1);

        // backtraking condition
        swap(str[i], str[j]);
    }
}

// GFG
/*
void getAllPermutation(string &str, int i, vector<string> &ans)
{
    if (i < 0)
    {
        ans.push_back(str);
        return;
    }

    for (int j = i; j >= 0; j--)
    {
        swap(str[i], str[j]);
        getAllPermutation(str, i - 1, ans);
        swap(str[i], str[j]);
    }
}
vector<string> permutation(string &S)
{
    // Your code here
    vector<string> ans;
    int i = S.length() - 1;
    getAllPermutation(S, i, ans);
    sort(ans.begin(), ans.end());
    return ans;
}*/

int main()
{
    string str = "abc";
    printAllPermutation(str, 0);
}