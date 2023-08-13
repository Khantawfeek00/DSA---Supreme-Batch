#include <bits/stdc++.h>
#include <stack>
using namespace std;
// insert at end using recursion
void solve(stack<int> &s, int &sizeOfStack, int &data)
{
    // base case
    if (s.size() == 0)
    {
        s.push(data);
        return;
    }

    int temp = s.top();
    s.pop();

    // recursive call
    solve(s, sizeOfStack, data);

    // backtrack
    s.push(temp);
}
void insertAtBottom(stack<int> &s)
{
    if (s.empty())
    {
        cout << "stack is empty cannot insert at bottom " << endl;
        return;
    }
    int data = s.top();
    s.pop();
    int sizeOfStack = s.size();
    solve(s, sizeOfStack, data);
}

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    insertAtBottom(s);
    cout << "After insert into Stack - " << endl;
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}