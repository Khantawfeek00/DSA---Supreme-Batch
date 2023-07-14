#include <bits/stdc++.h>
#include <limits.h>
using namespace std;

// int findLastOcc(string str, int n, char key)
// {
//     if (n == 0)
//         return -1;
//     return str[n - 1] == key ? n - 1 : findLastOcc(str, n - 1, key);
// }

int findLastOcc(string str, int i, int index, char key)
{
    if (i >= str.length())
        return index;
    if (str[i] == key)
        index = i;
    return findLastOcc(str, i + 1, index, key);
}
int main()
{
    string str;
    cout << "Enter the string :";
    cin >> str;
    int n = str.length();
    char key = 'a';
    int i = 0;
    int index = -1;
    // cout << findLastOcc(str, n, key);
    cout << findLastOcc(str, i, index, key);
    // cout << strrchar(str, key);
}