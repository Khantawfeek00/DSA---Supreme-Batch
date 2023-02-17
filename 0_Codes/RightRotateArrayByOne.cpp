#include <iostream>
#include <vector>
using namespace std;

//Rotate the Array by 1---O(n)
void Rightrotate(vector<int>& arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        swap(arr[i], arr[n - 1]);
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
    Rightrotate(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}