#include <bits/stdc++.h>
#include <vector>
#include <queue>
#include <deque>
using namespace std;

int main()
{
    /*
    queue<int> que;

    // insertion
    que.push(10);
    que.push(20);
    que.push(30);
    que.push(40);
    que.push(50);
    que.push(60);

    cout << "Queue size - " << que.size() << endl;

    // remove
    que.pop();

    // size
    cout << "Queue size - " << que.size() << endl;

    if (que.empty())
    {
        cout << "Empty " << endl;
    }
    else
    {
        cout << "Not Empty" << endl;
    }

    cout << "Top element - " << que.front() << endl;

    cout << "Back Element - " << que.back() << endl;

    */

    deque<int> dq;

    // pushing from front
    dq.push_front(10);
    dq.push_front(20);
    dq.push_front(30);

    // pushing from back
    dq.push_back(60);
    dq.push_back(50);
    dq.push_back(40);

    cout << "Size of deque - " << dq.size() << endl;
    cout << "Rear - " << dq.back() << endl;
    dq.pop_back();

    cout << "Rear - " << dq.back() << endl;
    cout << "Size of deque - " << dq.size() << endl;

    cout << "Front - " << dq.front() << endl;
    dq.pop_front();
    cout << "Front - " << dq.front() << endl;
    cout << "Size of deque - " << dq.size() << endl;
    cout << "Rear - " << dq.back() << endl;
    dq.push_back(1000);
    cout << "Rear - " << dq.back() << endl;

    cout << "Size of deque - " << dq.size() << endl;

    if (dq.empty())
    {
        cout << "Deque is empty" << endl;
    }
    else
    {
        cout << "Not Empty" << endl;
    }
}
