#include <bits/stdc++.h>
using namespace std;
bool isSub(string &s, string &t, int i, int j)
{
    if (i == s.length() && j <= t.length())
    {
        return true;
    }
    if (j >= t.length() && i < s.length())
    {
        return false;
    }
    return s[i] == t[j] ? isSub(s, t, i + 1, j + 1) : isSub(s, t, i, j + 1);
}

bool isSubsequence(string &s, string &t)
{
    // using two pointer approach
    //         int fir=0,sec=0;
    //         int ns=s.length();
    //         int nt=t.length();
    //         while(fir<ns && sec<nt){
    //             if(t[sec]==s[fir]){
    //                 fir++;
    //                 sec++;
    //             }
    //             else
    //                 sec++;
    //         }
    //         if(fir==ns)
    //             return true;
    //         return false;

    // using recursion
    int i = 0, j = 0;
    return isSub(s, t, i, j);
}

int main()
{
    string s, t;
    cin >> s >> t;
    cout << isSubsequence(s, t);
}