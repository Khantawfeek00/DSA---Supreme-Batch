#include <iostream>
#include <stack>
using namespace std;

// this question can be done using the stack or string push_back & pop_back()
string removeDuplicates(string str)
{

    // using string
    /*
    int n=str.length();
    string ans="";
    for(int i=0;i<n;i++){
        if(ans.size()>0 && ans[ans.size()-1]==str[i])
            ans.pop_back();
        else
            ans.push_back(str[i]);
    }
    return ans;
    */

    // using stack
    stack<char> s;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        char ch = str[i];
        if (s.empty() || s.top() != ch)
            s.push(ch);
        else
            s.pop();
    }
    string out;
    while (!s.empty())
    {
        out.push_back(s.top());
        s.pop();
    }
    return out;
}

int main()
{
    string str = "azxxzy";
    cout << "String Before Removing Adjacent Duplicates - " << str << endl;
    cout << "String after Removing Adjacent Duplicates - " << removeDuplicates(str);
}