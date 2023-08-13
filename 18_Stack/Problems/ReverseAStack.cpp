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
void ReverseStack(stack<int> &s, int i, int &sizeOfStack)
{
    if (i == sizeOfStack)
    {
        return;
    }
    int data = s.top();
    s.pop();
    ReverseStack(s, i + 1, sizeOfStack);
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
    int sizeOfStack = s.size();
    int i = 0;
    ReverseStack(s, i, sizeOfStack);
    cout << "After Reversing Stack - " << endl;
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}