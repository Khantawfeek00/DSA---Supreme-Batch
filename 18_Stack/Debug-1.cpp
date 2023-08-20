#include <bits/stdc++.h>
#include <stack>
#include <vector>
using namespace std;

void reverseStack(stack<int> &input, stack<int> &extra)
{
    if (input.empty())
        return;
    int x = input.top();
    input.pop();
    reverseStack(input, extra);
    while (!input.empty())
    {
        extra.push(input.top());
        input.pop();
    }
    input.push(x);
    while (!extra.empty())
    {
        input.push(extra.top());
        extra.pop();
    }
}
vector<int> nextGreaterElementRight(vector<int> &input, int n)
{
    vector<int> right(n, -1);
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        if (s.empty())
        {
            s.push(i);
            continue;
        }
        while (!s.empty() && input[s.top()] < input[i])
        {
            right[s.top()] = input[i];
            s.pop();
        }
        s.push(i);
    }
    return right;
}

vector<int> nextGreaterElementLeft(vector<int> &input, int n)
{
    vector<int> left(n, -1);
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && input[s.top()] <= input[i])
        {
            s.pop();
        }
        if (!s.empty())
        {
            left[i] = input[s.top()];
        }
        s.push(i);
    }
    return left;
}
int main()
{
    // 1. Debug the code. Next Greater to the Right.
    // vector<int> arr = {1, 3, 4, 2};
    // vector<int> ans = nextGreaterElementRight(arr, arr.size());
    // for (auto ele : ans)
    // {
    //     cout << ele << " ";
    // }

    // 2. Debug the code. Next Greater to the Left.
    // vector<int> arr = {1, 3, 4, 2};
    // vector<int> ans = nextGreaterElementLeft(arr, arr.size());
    // for (auto ele : ans)
    // {
    //     cout << ele << " ";
    // }

    // 3. Debug the code. Reverse a given input stack using one empty extra stack.
    stack<int> s1;
    stack<int> extra;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.push(60);

    reverseStack(s1, extra);

    while (!s1.empty())
    {
        cout << s1.top() << " ";
        s1.pop();
    }

    // 4. Debug the code. Implement Stack using Linked List.
}