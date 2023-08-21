#include <bits/stdc++.h>
#include <vector>
#include <queue>
using namespace std;
void modifyQueue(queue<int> &q, int k)
{
    if (q.empty())
    {
        return;
    }
    stack<int> s;
    int i = 0;
    int n = q.size();

    // push in stack
    while (i < k)
    {
        s.push(q.front());
        q.pop();
        i++;
    }

    // remove from stack for reverse order
    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }

    // push front element from queue for only first k reverse
    while (i < n)
    {
        int x = q.front();
        q.pop();
        q.push(x);
        i++;
    }
}

int main()
{
    queue<int> que;

    que.push(10);
    que.push(20);
    que.push(30);
    que.push(40);
    que.push(50);
    que.push(60);

    // while (!que.empty())
    // {
    //     cout << que.front() << " ";
    //     que.pop();
    // }
    int k = 3;
    modifyQueue(que, k);
    while (!que.empty())
    {
        cout << que.front() << " ";
        que.pop();
    }
}