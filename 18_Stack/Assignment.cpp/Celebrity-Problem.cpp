#include <iostream>
#include <stack>
#include <vector>
using namespace std;
// T.C.=O(n)
int celebrity(vector<vector<int>> &M, int n)
{
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        s.push(i);
    }

    while (s.size() > 1)
    {
        int p1 = s.top();
        s.pop();
        int p2 = s.top();
        s.pop();
        if (M[p1][p2])
        {
            s.push(p2);
        }
        else
        {
            s.push(p1);
        }
    }

    int ans = s.top();
    s.pop();
    // checking that is the last person is celebrity or not
    for (int i = 0; i < n; i++)
    {
        if (M[ans][i])
        {
            return -1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (M[i][ans] == 0 && i != ans)
        {
            return -1;
        }
    }
    return ans;
}

int main()
{
    int
}