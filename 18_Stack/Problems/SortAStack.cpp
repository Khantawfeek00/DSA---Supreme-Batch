#include <iostream>
#include <stack>
using namespace std;

void correctPos(stack<int> &s, int &data)
{
    // base case (use logic of insertion sort)

    // Gretest element at top
    //  if (s.empty() || s.top() <= data)
    //  {
    //      s.push(data);
    //      return;
    //  }

    // Gretest element at bottom
    if (s.empty() || s.top() >= data)
    {
        s.push(data);
        return;
    }
    int topData = s.top();
    s.pop();
    // recursive call
    correctPos(s, data);
    // backtack
    s.push(topData);
}
// using recursion
void sortStack(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }
    int data = s.top();
    s.pop();
    sortStack(s);
    correctPos(s, data);
}
int main()
{
    stack<int> s;
    s.push(40);
    s.push(20);
    s.push(100);
    s.push(450);
    s.push(300);
    int i = 0;
    sortStack(s);

    // printing stack
    cout << "After sorting stack - " << endl;
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}