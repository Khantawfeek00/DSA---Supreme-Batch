#include <iostream>
#include <vector>
using namespace std;

vector<int> binarySearch(int arr[][100], int n, int m, int target)
{
    int s = 0;
    int e = n * m - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        int row = mid / m;
        int col = mid % m;
        if (arr[row][col] == target)
            return {row, col};
        if (arr[row][col] < target)
            s = mid + 1;
        else
            e = mid - 1;
        mid = s + (e - s) / 2;
    }
    return {-1, -1};
}

int main()
{
    int n, m;
    cout << "Enter the number of rows of array : ";
    cin >> n;
    cout << "Enter the number of cols of array : ";
    cin >> m;
    int arr[100][100];
    cout << "Enter the elements of array : ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int target;
    cout << "Enter the value of target : ";
    cin >> target;
    vector<int> ans = binarySearch(arr, n, m, target);
    cout << "Row Index = " << ans[0] << endl;
    cout << "Column Index = " << ans[1];
    return 0;
}