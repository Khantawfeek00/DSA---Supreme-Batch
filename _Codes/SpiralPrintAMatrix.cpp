#include <iostream>
#include <vector>
using namespace std;

// Column-Wise Wave Form
//  void WavePrintMatrix(vector<vector<int>> arr)
//  {
//      int n = arr.size();
//      int m = arr[0].size();
//      bool flag = true;
//      for (int i = 0; i < m; i++)
//      {
//          if (flag)
//          {
//              for (int j = 0; j < n; j++)
//                  cout << arr[j][i] << " ";
//              flag = false;
//          }
//          else
//          {
//              for (int j = n - 1; j >= 0; j--)
//                  cout << arr[j][i] << " ";
//              flag = true;
//          }
//      }
//  }

// Row-Wise Wave Form
vector<int> WavePrintMatrix(vector<vector<int>> arr)
{
    vector<int> ans;
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = arr.size() - 1;
    int endingCol = arr[0].size() - 1;
    int count = 0;
    int total_element = arr[0].size() * arr.size();
    while (count < total_element)
    {
        // Printing starting row
        for (int j = startingCol; j <= endingCol && count < total_element; j++)
        {
            ans.push_back(arr[startingRow][j]);
            count++;
        }
        startingRow++;
        // Printing ending col
        for (int j = startingRow; j <= endingRow && count < total_element; j++)
        {
            ans.push_back(arr[j][endingCol]);
            count++;
        }
        endingCol--;

        // Printing ending row
        for (int j = endingCol; j >= startingCol && count < total_element; j--)
        {
            ans.push_back(arr[endingRow][j]);
            count++;
        }
        endingRow--;

        // Printing starting col
        for (int j = endingRow; j >= startingRow && count < total_element; j--)
        {
            ans.push_back(arr[j][startingCol]);
            count++;
        }
        startingCol++;
    }
    return ans;
}

int main()
{
    int n, m;
    cout << "Enter the value of n and m : ";
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    cout << "Enter the elements of array : ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    vector<int> ans = WavePrintMatrix(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}