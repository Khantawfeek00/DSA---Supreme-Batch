#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &prices)
{

    // Brute Force
    //  int max=0;
    //  for(int i=0;i<prices.size();i++){
    //      for(int j=i+1;j<prices.size();j++){
    //          if(prices[j]-prices[i]>=max)
    //              max=prices[j]-prices[i];
    //      }
    //  }
    //  return max;

    // Kadanes Algorithm
    int min = prices[0], max = 0;
    for (int i = 0; i < prices.size(); i++)
    {
        if (prices[i] < min)
            min = prices[i];
        if (prices[i] - min > max)
            max = prices[i] - min;
    }
    return max;
}

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Max Profit = " << maxProfit(arr);
}
