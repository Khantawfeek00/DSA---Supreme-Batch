#include <bits/stdc++.h>
using namespace std;
string reverseString(string str)
{
    stack<char> s;
    for (int i = 0; i < str.size(); i++)
    {
        s.push(str[i]);
    }
    for (int i = 0; i < str.size(); i++)
    {
        str[i] = s.top();
        s.pop();
    }
    return str;
}
int main()
{
    string str = "Love Babber";
    cout << "Original String - " << str << endl;
    cout << "Reverse String - " << reverseString(str) << endl;
}