#include <iostream>
#include <stack>
using namespace std;
int checkRedundancy(string str)
{
    // use stack and pushing only '(' and operator and then check
    stack<char> s;
    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        if (ch == '(' || ch == '+' || ch == '-' || ch == '/' || ch == '*')
        {
            s.push(ch);
        }
        else if (ch == ')' && !s.empty())
        {
            bool isOperator = false;
            while (!s.empty() && s.top() != '(')
            {
                if (s.top() == '+' || s.top() == '-' || s.top() == '/' || s.top() == '*')
                {
                    isOperator = true;
                }
                s.pop();
            }
            if (s.empty())
            {
                return true;
            }
            s.pop();
            if (!isOperator)
            {
                return true;
            }
        }
        else if (ch == ')' && s.empty())
        {
            cout << ch << " ";
            return true;
        }
    }
    return false;
}

int main()
{
    // string str = "(a + b + c)";
    string str = "((a + b + (c)))";
    if (checkRedundancy(str))
    {
        cout << "Redundent Bracket is present " << endl;
    }
    else
    {
        cout << "Redundent Bracket is not present " << endl;
    }
}