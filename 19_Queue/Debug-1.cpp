#include <bits/stdc++.h>
#include <vector>
#include <queue>
#include <deque>
using namespace std;
class MyQueue
{
public:
    stack<int> s1;
    stack<int> s2;
    MyQueue()
    {
    }

    void push(int x)
    {
        s1.push(x);
    }

    int pop()
    {
        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        int t = s2.top();
        s2.pop();
        while (!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
        return t;
    }

    int peek()
    {
        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        int t = s2.top();
        while (!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
        return t;
    }

    bool empty()
    {
        return s1.empty();
    }
};
int firstUniqChar(string s)
{
    vector<int> c(26, 0);
    queue<char> q;

    for (auto i : s)
    {
        c[i - 'a']++;
        q.push(i);
    }

    int idx = 0;

    while (!q.empty())
    {
        auto elem = q.front();
        q.pop();

        if (c[elem - 'a'] == 1)
        {
            return idx;
        }
        else
        {
            idx++;
        }
    }
    return -1;
}
void reverseQueue(queue<int> &q)
{
    if (q.empty())
    {
        return;
    }
    int x = q.front();
    q.pop();
    reverseQueue(q);
    q.push(x);
}

int main()
{
    /*
    // 1. Debug the code. Queue using two stacks.
    MyQueue que;

    que.push(10);
    que.push(20);
    que.push(30);
    que.push(40);

    while (!que.empty())
    {
        cout << que.peek() << " ";
        que.pop();
    }
    */

    /*
     // 2. Debug the code. Return index of first non-repeating character.
     string str = "aabbc";
     cout << "Non- repeated string - " << firstUniqChar(str) << endl;
     */

    // 3.Debug the code. Idea is to use stack involved in recursion to reverse the queue.
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    reverseQueue(q);
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}