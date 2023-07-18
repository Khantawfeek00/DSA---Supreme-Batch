#include <bits/stdc++.h>
using namespace std;
int getMaxi(vector<int> &arr, int i, int sum)
{
    if (i >= arr.size())
        return sum;
    int m1 = getMaxi(arr, i + 2, sum + arr[i]);
    int m2 = getMaxi(arr, i + 1, sum);
    return max(m1, m2);
    if (si >= s.length() && pi < p.length())
    {
        while (pi < p.length())
            if (p[pi] != '*')
                return false;

        return true;
    }
}
int rob(vector<int> &nums)
{
    return getMaxi(nums, 0, 0);
}

int main()
{
    vector<int> arr{5, 7, 2, 6, 3};

    cout
        << rob(arr);
}
