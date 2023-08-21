#include <bits/stdc++.h>
#include <vector>
#include <queue>
#include <deque>
using namespace std;
string FirstNonRepeating(string A)
{
    int arr[26] = {0};
    deque<char> dq;
    string ans = "";
    for (int i = 0; i < A.size(); i++)
    {

        int index = (int)(A[i] - 'a');
        arr[index]++;
        dq.push_back(A[i]);

        while (!dq.empty() && arr[(int)dq.front() - 'a'] > 1)
        {
            dq.pop_front();
        }

        if (dq.empty())
        {
            ans.push_back('#');
        }
        else
        {
            ans.push_back(dq.front());
        }
    }
    return ans;
}

int main()
{

    string str = "aabbbc";

    cout << "Ans = " << FirstNonRepeating(str) << endl;
}