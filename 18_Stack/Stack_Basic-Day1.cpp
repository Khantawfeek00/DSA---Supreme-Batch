#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;

    // insertion
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    // remove
    s.pop();

    // top element in stack
    cout << "Top element in stack - " << s.top() << endl;

    // size()
    cout << "Size of stack = " << s.size() << endl;

    // empty
    if (s.empty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack is not empty" << endl;
    }

    // printing satck
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}