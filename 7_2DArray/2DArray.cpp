#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

void printRowSum(int arr[][10], int n, int m)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
}

void printColSum(int arr[][10], int n, int m)
{
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += arr[j][i];
        }
        cout << sum << " ";
    }
}

void linearSearch2D(int arr[][10], int n, int m, int target)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == target)
            {
                cout << "Found at " << (i + 1) << "th row " << (j + 1) << "th column";
                return;
            }
        }
    }
    cout << "Not found";
    return;
}

void minMax(int arr[][10], int n, int m)
{
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] < min)
                min = arr[i][j];
            if (arr[i][j] > max)
                max = arr[i][j];
        }
    }
    cout << "Max = " << max << endl
         << "Min = " << min << endl;
    return;
}

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
    // int arr[3][3];
    // int row = 3;
    // int cols = 3;
    // cout << "Enter the values of 2D Array : " << endl;
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }
    // // Printing
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // Revise
    // Declare
    // int arr[4][4] = {{1,2,3,4},{2,3,4,5}};
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int n, m;
    int arr[10][10];
    cout << "Enter number of rows: ";
    cin >> n;
    cout << "Enter number of columns: ";
    cin >> m;
    cout << "Enter the values of array: ";

    // Taking input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Printing Output
    // Row-wise printing
    // cout << "Row-wise Print: " << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // Column-wise printing
    // cout << "Column-wise Print: " << endl;
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << arr[j][i] << " ";
    //     }
    //     cout << endl;
    // }

    // Row-Sum print
    // printRowSum(arr, n, m);

    // Column-Sum print
    // printColSum(arr, n, m);

    // Linear Search in 2-D Array
    // int target;
    // cout << "Enter the key you want to search: ";
    // cin >> target;
    // linearSearch2D(arr, n, m, target);

    // find minimum and maximum in 2-D array
    minMax(arr, n, m);
}