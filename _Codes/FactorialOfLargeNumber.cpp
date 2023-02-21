#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> factorial(int n)
{
    vector<int> ans;
    ans.push_back(1);
    int carry = 0;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j < ans.size(); j++)
        {
            int value = (ans[j] * i) + carry;
            ans[j] = value % 10;
            carry = value / 10;
        }
        while (carry)
        {
            ans.push_back(carry % 10);
            carry /= 10;
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int n;
    cout << "Enter the value of n :";
    cin >> n;
    vector<int> ans = factorial(n);
    cout << "Factorial is : ";
    for (int ele : ans)
    {
        cout << ele;
    }
    return 0;
}