#include <iostream>
#include <vector>
using namespace std;

//Rotate the Array by 1---O(n)
void Leftrotate(vector<int>& arr, int n)
{
    for (int i = n-1; i>=0; i--)
    {
        swap(arr[0], arr[i]);
    }
}

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Leftrotate(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}