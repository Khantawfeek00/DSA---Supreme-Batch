#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

bool searchChar(const string &str, int &n, int &i, const int &key)
{
    if (i >= n)
        return false;

    if (str[i] == key)
        return true;
    return searchChar(str, n, ++i, key);
}

// int searchCharIndex(const string &str, int &n, int &i, const int &key)
// {
//     if (i >= n)
//         return -1;

//     if (str[i] == key)
//         return i;
//     return searchCharIndex(str, n, ++i, key);
// }

// void searchCharIndex(const string &str, int &n, int &i, const int &key)
// {
//     if (i >= n)
//         return;
//     if (str[i] == key)
//     {
//         cout << "Found at = " << i << endl;
//     }
//     searchCharIndex(str, n, ++i, key);
// }

void searchCharIndex(string &str, int &n, int &i, const int &key, vector<int> &arr)
{
    if (i >= n)
        return;

    if (str[i] == key)
    {
        arr.push_back(i);
    }
    searchCharIndex(str, n, ++i, key, arr);
}
int main()
{
    string str = "Tawfeek";
    // cout << "Enter string : ";
    // cin >> str;
    char key = 'e';
    // cout << "Enter character to find : ";
    // cin >> key;
    int n = str.length();
    int i = 0;
    // int index = searchCharIndex(str, n, i, key);
    // searchCharIndex(str, n, i, key);
    // cout << "index = " << index << endl;
    // if (index != -1)
    // {
    //     cout << "The character is present";
    // }
    // else
    //     cout << "The character is not present";

    vector<int> arr;
    searchCharIndex(str, n, i, key, arr);
    cout << "Found at indexes: ";
    for (auto ele : arr)
        cout << ele << " ";
}