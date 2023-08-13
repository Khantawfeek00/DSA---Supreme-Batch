#include <bits/stdc++.h>
#include <stack>
using namespace std;
void deleteMid(stack<int> &s, int &sizeOfStack)
{
    // base case
    if ((sizeOfStack + 1) / 2 == s.size())
    {
        s.pop();
        return;
    }

    int temp = s.top();
    s.pop();

    // recursive call
    deleteMid(s, sizeOfStack);

    // backtrack
    s.push(temp);
}

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    int sizeOfStack = s.size();
    deleteMid(s, sizeOfStack);
    cout << "After Deleting Middle - " << endl;
    cout << "Size of Stack - " << s.size() << endl;
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}