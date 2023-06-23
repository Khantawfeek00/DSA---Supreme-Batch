#include <iostream>
#include <vector>
using namespace std;

// Row-Wise Wave Form
void WavePrintMatrixRow(vector<vector<int>> arr)
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

// Column-Wise Wave Form
void WavePrintMatrixColumn(vector<vector<int>> arr)
{
    int row = arr.size();
    int col = arr[0].size();
    bool isTrue = true;
    for (int i = 0; i < col; i++)
    {
        if (isTrue)
        {
            for (int j = 0; j < row; j++)
            {
                cout << arr[j][i] << " ";
            }
            isTrue = false;
            cout << " | ";
        }
        else
        {
            for (int j = row - 1; j >= 0; j--)
            {
                cout << arr[j][i] << " ";
            }
            isTrue = true;
            cout << " | ";
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
    WavePrintMatrixRow(arr);
    return 0;
}