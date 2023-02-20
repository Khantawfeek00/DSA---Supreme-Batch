#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // declare 2d Array
    // int arr[10][20];

    // Initialization
    // int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Accessing all Elements Row-wise
    // cout << "Row Wise :" << endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // cout << "Column Wise :" << endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << arr[j][i] << " ";
    //     }
    //     cout << endl;
    // }

    // Taking input
    int arr[3][3];
    int row = 3;
    int cols = 3;
    cout << "Enter the values of 2D Array : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }
    // Printing
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}