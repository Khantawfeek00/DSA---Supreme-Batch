#include <iostream>
#include <stack>
#include <vector>
using namespace std;
string simplifyPath(string path)
{
    stack<string> s;
    int i = 0;
    while (i < path.size())
    {

        int start = i;
        int end = i + 1;
        while (end < path.size() && path[end] != '/')
        {
            end++;
        }

        string str = path.substr(start, end - start);
        i = end;

        if (str == "/" || str == "/.")
        {
            continue;
        }

        if (str != "/..")
        {
            s.push(str);
        }
        else if (!s.empty())
        {
            s.pop();
        }
    }
    string ans = s.empty() ? "/" : "";
    while (!s.empty())
    {
        ans = s.top() + ans;
        s.pop();
    }
    return ans;
}

int main()
{
    string str = "/home/";
    cout << "Simplified Path >> " << simplifyPath(str) << endl;
}