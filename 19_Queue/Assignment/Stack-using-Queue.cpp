#include <bits/stdc++.h>
#include <vector>
#include <queue>
#include <deque>
using namespace std;
/*
class MyStack
{
public:
    queue<int> q;
    MyStack()
    {
    }

    void push(int x)
    {
        q.push(x);

        for (int i = 0; i < q.size() - 1; i++)
        {
            int x = q.front();
            q.pop();
            q.push(x);
        }
    }

    int pop()
    {
        int topEle = q.front();
        q.pop();
        return topEle;
    }

    int top()
    {
        return q.front();
    }

    bool empty()
    {
        return q.empty();
    }
};
*/

// Method 2 :
class MyStack
{
public:
    queue<int> q1, q2;
    MyStack()
    {
    }

    void push(int x)
    {
        q2.push(x);

        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        while (!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
    }

    int pop()
    {
        int topEle = q1.front();
        q1.pop();
        return topEle;
    }

    int top()
    {
        return q1.front();
    }

    bool empty()
    {
        return q1.empty() && q2.empty();
    }
};

int main()
{
    MyStack stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);

    std::cout << "Top element: " << stack.top() << std::endl; // Output: 3
    std::cout << "Pop: " << stack.pop() << std::endl;         // Output: 3
    std::cout << "Top element: " << stack.top() << std::endl; // Output: 2

    return 0;
}