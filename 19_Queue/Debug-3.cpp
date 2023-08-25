#include <bits/stdc++.h>
#include <vector>
#include <queue>
#include <deque>
using namespace std;
class MyStack
{
public:
    queue<int> q1;
    queue<int> q2;

    MyStack()
    {
    }

    void push(int x)
    {
        while (!q1.empty())
        {
            int temp = q1.front();
            q1.pop();
            q2.push(temp);
        }

        q1.push(x);

        while (!q2.empty())
        {
            int temp = q2.front();
            q2.pop();
            q1.push(temp);
        }
    }

    int pop()
    {
        int ans = q1.front();
        q1.pop();
        return ans;
    }

    int top()
    {
        return q1.front();
    }

    bool empty()
    {
        return q1.empty();
    }
};

int main()
{
    MyStack myStack;

    // Push elements onto the stack
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    // Print the top element
    cout << "Top element: " << myStack.top() << endl;

    // Pop elements from the stack
    cout << "Popped element: " << myStack.pop() << endl;
    cout << "Popped element: " << myStack.pop() << endl;

    // Check if the stack is empty
    if (myStack.empty())
    {
        cout << "Stack is empty." << endl;
    }
    else
    {
        cout << "Stack is not empty." << endl;
    }

    return 0;
}