#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Declare the vector
    // vector<int> arr;

    // Initialization of the vector
    // vector<int> arr{10, 20, 30};
    // Printing the vector
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // vector<int> arr(5);
    // Printing the vector
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // vector<int> arr(5,-1);
    // Printing the vector
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // int n;
    // cout << "Enter the size of vector : ";
    // cin >> n;
    // vector<int> arr(n, -1);
    // // Printing the vector
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }

    vector<int> arr;
    for (int i = 0; i < 9; i++)
    {
        arr.push_back(i + 1);
    }
    cout << "Size = " << arr.size();
    cout << endl;
    cout << "Capacity = " << arr.capacity();
    cout << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    arr.pop_back();
    cout << endl
         << "After pop_back" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << "Capacity = " << arr.capacity() << endl;
    cout << arr.empty();
    cout << arr.size();
}