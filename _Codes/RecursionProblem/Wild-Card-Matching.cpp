#include <bits/stdc++.h>
using namespace std;

bool isMatchHelper(string s, int si, string p, int pi)
{
    if (s.length() == si && p.length() == pi)
        return true;

    if (s.length() == si && pi < p.length())
    {
        while (pi < p.length())
        {
            if (p[pi++] != '*')
                return false;
        }
        return true;
    }

    if (s[si] == p[pi] || '?' == p[pi])
    {
        return isMatchHelper(s, si + 1, p, pi + 1);
    }

    if (p[pi] == '*')
    {
        return isMatchHelper(s, si + 1, p, pi) || isMatchHelper(s, si, p, pi + 1);
    }

    return false;
}
bool isMatch(string s, string p)
{
    int si = 0;
    int pi = 0;
    return isMatchHelper(s, si, p, pi);
}

int main()
{
    string s, t;
    cout << "Enter the string s: ";
    cin >> s;
    cout << "Enter the string t: ";
    cin >> t;
    cout << isMatch(s, t);
}