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
void WavePrintMatrix(vector<vector<int>> arr)
{
    int n = arr.size();
    int m = arr[0].size();
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (flag)
        {
            for (int j = 0; j < m; j++)
                cout << arr[i][j] << " ";
            flag = false;
        }
        else
        {
            for (int j = m - 1; j >= 0; j--)
                cout << arr[i][j] << " ";
            flag = true;
        }
    }
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
    WavePrintMatrix(arr);
    return 0;
}