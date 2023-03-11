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
    string str = "babber";
    sort(str.begin(), str.end(), cmp);
    cout << str;
}