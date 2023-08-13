#include <bits/stdc++.h>
#include <stack>
using namespace std;
void findMid(stack<int> &s, int &sizeOfStack)
{
    // base case
    if ((sizeOfStack + 1) / 2 == s.size())
    {
        cout << "Middle element - " << s.top() << endl;
        return;
    }

    int temp = s.top();
    s.pop();

    // recursive call
    findMid(s, sizeOfStack);

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
    findMid(s, sizeOfStack);
    return 0;
}