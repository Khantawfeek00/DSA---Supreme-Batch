#include <iostream>
#include <vector>
#include <stack>
using namespace std;
// travelling left to check that curr histogram can store on left histogram
vector<int> previousSmallerEle(vector<int> &heights)
{
    int n = heights.size();
    vector<int> ans(n, -1);
    stack<int> s;
    s.push(-1);
    for (int i = 0; i < n; i++)
    {
        while (s.top() != -1 && heights[s.top()] >= heights[i])
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

// travelling left to check that curr histogram can store on right histogram
vector<int> nextSmallerEle(vector<int> &heights)
{
    int n = heights.size();
    vector<int> ans(n, -1);
    stack<int> s;
    s.push(-1);
    for (int i = n - 1; i >= 0; i--)
    {
        while (s.top() != -1 && heights[s.top()] >= heights[i])
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

int largestRectangleArea(vector<int> &heights)
{
    vector<int> previous = previousSmallerEle(heights);
    vector<int> next = nextSmallerEle(heights);
    int maxArea = 0;
    int n = heights.size();
    for (int i = 0; i < n; i++)
    {
        if (next[i] == -1)
        {
            next[i] = n;
        }
        int l = heights[i];
        int b = next[i] - previous[i] - 1;
        int area = l * b;
        maxArea = max(maxArea, area);
    }
    return maxArea;
}

int main()
{
    vector<int> heights = {2, 1, 5, 6, 2, 3};
    cout << "Largest Rectangle Area  = " << largestRectangleArea(heights);
}