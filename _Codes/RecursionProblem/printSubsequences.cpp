#include <bits/stdc++.h>
using namespace std;

// void printSubsequence(string &s, int i, string output)
// {
//     // base case
//     if (i >= s.length())
//     {
//         cout << output << endl;
//         return;
//     }

//     // exclude state
//     printSubsequence(s, i + 1, output);

//     output.push_back(s[i]);
//     // include state
//     printSubsequence(s, i + 1, output);
// }

void printSubsequence(vector<string> &arr, string &s, int i, string output)
{
    // base case
    if (i >= s.length())
    {
        arr.push_back(output);
        return;
    }

    // exclude state
    printSubsequence(arr, s, i + 1, output);

    output.push_back(s[i]);
    // include state
    printSubsequence(arr, s, i + 1, output);
}
int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;
    cout << "The subsequences are : " << endl;
    // printSubsequence(s, 0, "");

    vector<string> arr;
    printSubsequence(arr, s, 0, "");

    for (auto ele : arr)
    {
        cout << ele << " ";
    }

    cout << endl
         << "Size of array : " << arr.size() << endl;
}