#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // declaration
    // vector<vector<int>> arr;
    // vector<vector<int>> arr(100);
    // vector<vector<int>> arr{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // vector<vector<int>> arr(5);

    // vector<int> arr1{1, 2, 3};
    // vector<int> arr2{4, 5, 6};
    // vector<int> arr3{7, 8, 9};
    // vector<int> arr4{10, 11, 12};

    // arr.push_back(arr1);
    // arr.push_back(arr2);
    // arr.push_back(arr3);
    // arr.push_back(arr4);

    // vector<vector<int> > arr(3, vector<int>(3, 0));
    // vector<vector<int>> arr(5, vector<int>(5, -8));

    // cout << arr.size() << endl;
    // cout << arr[0].size() << endl;

    // printing the vector
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = 0; j < arr[i].size(); j++)
    //         cout << arr[i][j] << " ";
    //     cout << endl;
    // }

    // Revise
    vector<vector<int>> arr;
    // taking input
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }

    // printing
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}