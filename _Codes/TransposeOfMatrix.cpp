#include <iostream>
#include <vector>
using namespace std;

// Only Work for n*n matrix
//  void Transpose(int arr[][100], int n, int m)
//  {
//      cout << "Transpose : " << endl;
//      for (int i = 0; i < n; i++)
//      {
//          for (int j = i; j < m; j++)
//          {
//              swap(arr[i][j], arr[j][i]);
//          }
//      }
//  }

void printArray(int arr[][100], int n, int m)
{
    // Printing tha Transpose
    cout << "Array : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void Transpose(int matrix[][100], int m, int n)
{

    // Using Extra Space
    int temp[100][100];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp[j][i] = matrix[i][j];
        }
    }
    cout << "Transpose : " << endl;
    printArray(temp, n, m);
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
    printArray(arr, n, m);
    Transpose(arr, n, m);
    printArray(arr, n, m);
    return 0;
}