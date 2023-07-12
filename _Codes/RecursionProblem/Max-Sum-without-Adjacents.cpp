#include <bits/stdc++.h>
using namespace std;

void maxSumWithoutAdjacent(vector<int> arr, int i, int &maxi, int sum)
{
    if (i >= arr.size())
    {
        maxi = max(maxi, sum);
        return;
    }
    maxSumWithoutAdjacent(arr, i + 2, maxi, sum + arr[i]);
    maxSumWithoutAdjacent(arr, i + 1, maxi, sum);
    return;
}
int main()
{
    // int n;
    // cin>>n;
    vector<int> arr{1, 2, 4};
    int maxi = 0;
    int sum = 0;
    int i = 0;
    maxSumWithoutAdjacent(arr, i, maxi, sum);
    cout << "Maximum Sum = " << maxi << endl;
}