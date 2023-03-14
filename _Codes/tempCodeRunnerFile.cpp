#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool cmp(char first, char second)
{
    return first > second;
}

int main()
{
    // string str = "babber";
    int a=10;
    int b=11;
    cout<<to_string(a).compare(to_string(b));
    // sort(str.begin(), str.end(), cmp);
    // cout << str;
}