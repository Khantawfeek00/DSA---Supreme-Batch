#include <iostream>
#include <vector>
using namespace std;

int LinearSearch(vector<int> arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == target)
        {
            return i + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the size of vector :";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of vector :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    int index = LinearSearch(arr, target);
    if (index >= 0)
    {
        cout << target << " is found at " << index << " th position";
    }
    else
    {
        cout << target << " is not found ";
    }
    return 0;
}