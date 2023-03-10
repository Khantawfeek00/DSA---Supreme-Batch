#include <iostream>
#include <string>
using namespace std;

int main()
{
    // string str;
    // // cin >> str;
    // getline(cin, str);
    // cout << str;

    // char arr[8];
    // string str;
    // arr[0] = 'B';
    // arr[1] = 'a';
    // arr[2] = '\0';
    // arr[3] = 'b';
    // arr[4] = 'b';
    // arr[5] = 'a';
    // arr[6] = '\0';
    // arr[7] = 'r';

    // str.push_back('B');
    // str.push_back('a');
    // str.push_back('\0');
    // str.push_back('b');
    // str.push_back('b');
    // str.push_back('a');
    // str.push_back('\0');
    // str.push_back('r');
    // cout << arr << endl;
    // cout << arr << endl;

    // string str = "Love Babber Love";
    // if (str.find("Love") == string::npos)
    // {
    //     cout << "not found" << endl;
    // }
    // else
    // {
    //     cout << "found" << endl;
    // }
    // cout << str.find("aa");

    // string str = "Love Babber";
    // // str.replace(2, 3, "AAAgsdg");
    // str.replace(0, 5, 4,'A');
    // cout << str;

    string str = "Love Babber";
    str.erase(0, 5);
    cout << str;
}