#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// we are checking only next index from curr if not then put -1;
void immediateSmaller(vector<int> &arr, int n)
{
    int i = 0;
    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            arr[i] = arr[i + 1];
        }
        else
        {
            arr[i] = -1;
        }
    }
    arr[i] = -1;
}

int main()
{
    vector<int> arr = {4, 24, 5, 35, 1, 34, 3, 6, 63};
    int n = arr.size();
    immediateSmaller(arr, n);
    cout << "Next ele is Greater or not :" << endl;
    for (auto ele : arr)
    {
        cout << ele << " ";
    }
    cout << endl;
}