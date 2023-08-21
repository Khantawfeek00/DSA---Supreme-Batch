#include <bits/stdc++.h>
#include <vector>
#include <queue>
using namespace std;
/*
// T.C.=O(n) S.C.=O(n)
void ReverseQueue(queue<int> &que)
{
    stack<int> s;F

    // pushing the element in stack from queue
    while (!que.empty())
    {
        s.push(que.front());
        que.pop();
    }

    // pushing the element in queue from stack
    while (!s.empty())
    {
        que.push(s.top());
        s.pop();
    }
}
*/
// T.C.=O(n) S.C.=O(n)
void ReverseQueue(queue<int> &que)
{
    // Base case
    if (que.empty())
    {
        return;
    }

    int x = que.front();
    que.pop();

    // recursive call
    ReverseQueue(que);

    que.push(x);
}
* /

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

    ReverseQueue(que);
    while (!que.empty())
    {
        cout << que.front() << " ";
        que.pop();
    }
}