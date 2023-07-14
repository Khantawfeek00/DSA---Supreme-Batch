#include <bits/stdc++.h>
#include <limits.h>
using namespace std;

bool Palindrome(string &str, int s, int e)
{
    if (s >= e)
        return true;
    if (str[s] != str[e])
        return false;
    return Palindrome(str, s + 1, e - 1);
}

int main()
{
    string str;
    cout << "Enter the string :";
    cin >> str;
    bool isPali = Palindrome(str, 0, str.length() - 1);
    if (isPali)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}