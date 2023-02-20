#include <iostream>
#include <vector>
using namespace std;

void printColSum(int arr[][100], int n, int m)
{
    int sum = 0;
    cout << "Sum : " << endl;
    for (int i = 0; i < m; i++)
    {
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += arr[j][i];
        }
        cout << "Col " << (i + 1) << " : " << sum << endl;
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
    printColSum(arr, n, m);
    return 0;
}