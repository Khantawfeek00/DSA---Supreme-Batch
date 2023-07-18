#include <bits/stdc++.h>
using namespace std;

int mincostTicketsHelper(vector<int> &days, vector<int> &costs, int i)
{
    // Base case
    if (i >= days.size())
        return 0;

    // 1 Case
    // 1-Day Pass
    int cost1 = costs[0] + mincostTicketsHelper(days, costs, i + 1);

    // 7-days Pass
    int PassEndDay7 = days[i] + 7 - 1;
    int j = i;
    while (j < days.size() && days[j] <= PassEndDay7)
    {
        j++;
    }
    int cost7 = costs[1] + mincostTicketsHelper(days, costs, j);

    // 30-days Pass
    int PassEndDay30 = days[i] + 30 - 1;
    int k = i;
    while (k < days.size() && days[k] <= PassEndDay30)
    {
        k++;
    }
    int cost30 = costs[2] + mincostTicketsHelper(days, costs, k);

    return min(cost1, min(cost7, cost30));
}

// T.C.=O(3^n)  S.C.=O(n)
int mincostTickets(vector<int> &days, vector<int> &costs)
{
    return mincostTicketsHelper(days, costs, 0);
}
int main()
{
    vector<int> days{1, 4, 6, 7, 8, 20};
    vector<int> costs{2, 7, 15};
    cout << mincostTickets(days, costs);
}