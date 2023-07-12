#include <bits/stdc++.h>
#include <limits.h>
using namespace std;
int findLastOcc(string str, int n, char key)
{
    if (n == 0)
        return -1;

    return str[n - 1] == key ? n - 1 : findLastOcc(str, n - 1, key);
}
int main()
{
    string str;
    cout << "Enter the string :";
    cin >> str;
    int n = str.length();
    char key = 'a';
    // cout << findLastOcc(str, n, key);
    cout << strrchar(str, key);
}