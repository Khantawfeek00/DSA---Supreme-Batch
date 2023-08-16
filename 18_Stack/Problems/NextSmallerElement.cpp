#include <iostream>
#include <vector>
#include <stack>
using namespace std;
vector<int> prevSmallerEle(vector<int> &arr)
{
    int n = arr.size();

    vector<int> ans(n, -1);

    stack<int> s;
    s.push(-1);
    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && s.top() >= arr[i])
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(arr[i]);
    }
    return ans;
}
vector<int> nextSmallerEle(vector<int> &arr)
{
    int n = arr.size();

    vector<int> ans(n, -1);

    stack<int> s;
    s.push(-1);
    for (int i = n - 1; i >= 0; i--)
    {
        while (!s.empty() && s.top() >= arr[i])
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(arr[i]);
    }
    return ans;
}
int main()
{
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(4);
    arr.push_back(3);

    // vector<int> ans = nextSmallerEle(arr);
    vector<int> ansnext = nextSmallerEle(arr);
    cout << "Printing for next Smaller ele - " << endl;
    for (auto ele : ansnext)
    {
        cout << ele << " ";
    }

    cout << endl
         << "Printing for previous Smaller ele - " << endl;
    vector<int> ansprev = prevSmallerEle(arr);
    for (auto ele : ansprev)
    {
        cout << ele << " ";
    }
}