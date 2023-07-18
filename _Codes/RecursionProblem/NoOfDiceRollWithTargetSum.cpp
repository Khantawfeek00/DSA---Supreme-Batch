#include <bits/stdc++.h>
using namespace std;

int nRollTargetHelper(int n, int k, int target)
{

    if (target < 0)
        return 0;
    if (n == 0 && target == 0)
        return 1;
    if (n == 0 && target != 0)
        return 0;
    if (n != 0 && target == 0)
        return 0;

    int count = 0;
    for (int i = 1; i <= k; i++)
    {
        count += nRollTargetHelper(n - 1, k, target - i);
    }
    return count;
}

// T.C.=O(k^n)  S.C.=O(n)
int numRollsToTarget(int n, int k, int target)
{
    return nRollTargetHelper(n, k, target);
}
int main()
{
    int n = 1, k = 6, target = 3;
    cout << numRollsToTarget(n, k, target);
}