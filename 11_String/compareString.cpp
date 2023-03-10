#include <iostream>
#include <string>
using namespace std;

// this funcion checks only the strings are equal or not
// int compare(string str1, string str2)
// {
//     if (str1.length() != str2.length())
//         return 0;
//     else
//         for (int i = 0; i < str1.length(); i++)
//         {
//             if (str1[i] != str2[i])
//                 return 0;
//         }
//     return 1;
// }

int compare(string str1, string str2)
{
    int n1 = str1.length();
    int n2 = str2.length();
    int i = 0;
    while (i < n1 && i < n2)
    {
        if (str1[i] == str2[i])
            i++;
        else if (str1[i] > str2[i])
            return 1;
        else
            return -1;
    }
    if (i != n1)
        return 1;
    else if (i != n2)
        return -1;
    else
        return 0;
}

int main()
{
    string str1, str2;
    cout << "Enter value of str1 : ";
    getline(cin, str1);
    cout << "Enter value of str2 : ";
    getline(cin, str2);
    int value = compare(str1, str2);
    if (value == 0)
    {
        cout << "Both String are not equal";
    }
    else if (value == 1)
    {
        cout << "First String is Big";
    }
    else
    {
        cout << "Second String is Big";
    }
    cout << endl
         << "value : " << value << endl;
    cout << str1.compare(str2) << endl;
    // if (str1.compare(str2) == 0)
    // {
    //     cout << "Both String is identical";
    // }
    // else
    // {
    //     cout << "Not identical";
    // }
}