#include <bits/stdc++.h>
#include <vector>
#include <queue>
using namespace std;

// T.C.=O(n) S.C.=O(n)
void rearrangeQueue(queue<int> &q)
{
    if (q.empty())
    {
        return;
    }
    queue<int> q1;
    int size = q.size();
    int first = size / 2;
    int i = 0;

    // remove and add first half to temporary queue
    while (i < first)
    {
        q1.push(q.front());
        q.pop();
        i++;
    }

    while (!q1.empty())
    {

        // answer without vector, modify the queue itself
        q.push(q1.front());
        q1.pop();
        q.push(q.front());
        q.pop();
    }
    if (size & 1)
    {
        q.push(q.front());
        q.pop();
    }

    // use of vector to store the answer
    // ans.push_back(q1.front());
    // q1.pop();
    // if (j < second)
    // {
    //     ans.push_back(q.front());
    //     q.pop();
    //     j++;
    // }
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
    que.push(70);
    que.push(80);

    // while (!que.empty())
    // {
    //     cout << que.front() << " ";
    //     que.pop();
    // }
    rearrangeQueue(que);
    while (!que.empty())
    {
        cout << que.front() << " ";
        que.pop();
    }
}