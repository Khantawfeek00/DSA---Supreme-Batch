#include <bits/stdc++.h>
using namespace std;
void removeOcc(string &s, string &t)
{
    int index = s.find(t);
    if (index == string::npos)
    {
        return;
    }
    else
    {
        // s.erase(index,t.length());
        // this erase function can also be done as
        string left = s.substr(0, index);
        string right = s.substr(index + t.size(), s.size());
        s = left + right;
        removeOcc(s, t);
    }
}
string removeOccurrences(string &s, string &part)
{
    // int index=s.find(part);
    // while(index!=string::npos){
    //     s.erase(index,part.length());
    //     index=s.find(part);
    // }
    // return s;

    // Recursion
    //  find=O(NM)
    // left=O(N)
    // Right=O(N)
    // concat=O(N)
    // Totoal=O(NM)+O(N)+O(N)

    // now for recursive call
    //  n=s.length
    // m=part.length
    //  N/M total call
    // O(N/M * N*M)==O(N^2)

    // T.C.=O(N^2) S.C.=O(N/M)
    removeOcc(s, part);
    return s;
}

int main()
{
    string str, part;
    cout << "Enter the string :";
    cin >> str >> part;
    cout << removeOccurrences(str, part);
}