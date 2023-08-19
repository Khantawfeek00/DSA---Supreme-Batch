#include <bits/stdc++.h>
#include <stack>
#include <vector>
using namespace std;
bool isValid(string str)
{

    // working but very slow
    // T.C.=O(n^2)
    /*
    int index=str.find("abc");
    while(index!=string::npos){
        str.erase(index,3);
        index=str.find("abc");
    }
    return s.size()==0?true:false;

    */

    // T.C.=O(n) S.C.=O(n)
    if (str[0] != 'a')
        return false;

    stack<char> s;
    for (char ch : str)
    {
        if (ch == 'a')
        {
            s.push(ch);
        }
        else if (ch == 'b')
        {
            if (!s.empty() && s.top() == 'a')
            {
                s.push(ch);
            }
            else
            {
                return false;
            }
        }
        else if (ch == 'c')
        {
            if (!s.empty() && s.top() == 'b')
            {
                s.pop();
                if (!s.empty() && s.top() == 'a')
                {
                    s.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }
    return s.empty();
}

int main()
{
    string str = "abcabcaabcbc";
    if (isValid(str))
    {
        cout << "Valid" << endl;
    }
    else
    {
        cout << "InValid" << endl;
    }
    return 0;
}