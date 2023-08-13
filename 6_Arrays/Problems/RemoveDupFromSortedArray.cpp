#include <iostream>
#include <vector>
using namespace std;

int remove_duplicate(int a[], int n)
{
    // code here
    int prev = 0;
    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[curr])
        {
            a[prev] = a[curr];
            curr = i;
            prev++;
        }
    }
    a[prev] = a[curr];
    prev++;
    return prev;
}
int main()
{
    int arr[] = {1, 1, 2, 2, 2, 3, 4, 4, 5};
    int length = 9;

    cout << "Original array:";
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }

    length = remove_duplicate(arr, length);

    cout << "\nArray after removing duplicates:";
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
}