#include <bits/stdc++.h>
#include <vector>
#include <queue>
#include <deque>
using namespace std;
class MyQueue
{
public:
    stack<int> s1, s2;
    MyQueue()
    {
    }

    // O(1)
    void push(int x)
    {
        s1.push(x);
    }

    // O(n)
    int pop()
    {
        int x = -1;
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        if (!s2.empty())
        {
            x = s2.top();
            s2.pop();
        }
        return x;
    }

    // O(n)
    int peek()
    {
        int x = -1;
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        if (!s2.empty())
        {
            x = s2.top();
        }
        return x;
    }

    // O(1)
    bool empty()
    {
        return s1.empty() && s2.empty();
    }
};

/* GFG-Solution
void enqueue(int x)
{
    while (!input.empty())
    {
        output.push(input.top());
        input.pop();
    }
    input.push(x);
    while (!output.empty())
    {
        input.push(output.top());
        output.pop();
    }
}

int dequeue()
{
    if (input.empty())
    {
        return -1;
    }
    int x = input.top();
    input.pop();
    return x;
}

*/
int main()
{
    MyQueue queue;

    queue.push(1);
    queue.push(2);

    std::cout << "Front element: " << queue.peek() << std::endl; // Should print "Front element: 1"

    std::cout << "Removed element: " << queue.pop() << std::endl; // Should print "Removed element: 1"

    std::cout << "Is the queue empty? " << (queue.empty() ? "Yes" : "No") << std::endl; // Should print "Is the queue empty? No"

    return 0;
}