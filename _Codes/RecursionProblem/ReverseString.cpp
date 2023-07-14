#include <bits/stdc++.h>
#include <limits.h>
using namespace std;

void reverseString(string &str, int start, int end)
{
    if (start >= end)
        return;
    swap(str[start], str[end]);
    reverseString(str, start + 1, end - 1);
}

int main()
{
    string str;
    cout << "Enter the string :";
    cin >> str;
    int n = str.length();
    int s = 0;
    int e = n - 1;
    reverseString(str, s, e);
    cout << str;
}