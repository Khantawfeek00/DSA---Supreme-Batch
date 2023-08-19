#include <bits/stdc++.h>
#include <stack>
#include <vector>
using namespace std;
string decodeString(string str)
{
    stack<string> s;

    for (auto ch : str)
    {
        if (ch != ']')
        {
            string temp(1, ch);
            s.push(temp);
        }
        else
        {
            string substr = "";
            while (!s.empty() && s.top() != "[")
            {
                substr += s.top();
                s.pop();
            }
            s.pop(); // remove opening bracket

            string countstr = "";
            while (!s.empty() && isdigit(s.top()[0]))
            {
                countstr = s.top() + countstr;
                s.pop();
            }
            int count = stoi(countstr);

            string out = "";
            while (count > 0)
            {
                out += substr;
                count--;
            }
            s.push(out);
        }
    }
    string out = "";
    while (!s.empty())
    {
        out += s.top();
        s.pop();
    }
    reverse(out.begin(), out.end());
    return out;
}

int main()
{
    string str = "30[a]2[bc]";
    // string str = "3[a2[c]]";
    // string str = "2[abc]3[cd]ef";
    cout << "Decoded String - " << decodeString(str);
}