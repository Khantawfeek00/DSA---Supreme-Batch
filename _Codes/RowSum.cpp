#include <iostream>
#include <vector>
using namespace std;

void printRowSum(int arr[][100], int n, int m)
{
    int sum = 0;
    cout << "Sum : " << endl;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += arr[i][j];
        }
        cout << "Row " << (i + 1) << " : " << sum << endl;
    }
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
    printRowSum(arr, n, m);
    return 0;
}