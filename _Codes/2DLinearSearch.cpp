#include <iostream>
#include <vector>
using namespace std;

bool linearSearch(int arr[][100], int n, int m, int target)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
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
    if (linearSearch(arr, n, m, target))
    {
        cout << "The key is Present";
    }
    else
    {
        cout << "The key is Absent";
    }

    return 0;
}