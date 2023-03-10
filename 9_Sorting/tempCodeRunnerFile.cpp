#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

// Select the minimum element and swap with ith position
void selectionSort(vector<int> arr, int n)
{
    int mini = INT_MAX;
    for (int i = 0; i < n - 1; i++)
    {
        mini = i;
        for (int j = i + 1; j < n; j++)
            if (arr[mini] > arr[j])
                mini = j;
        swap(arr[i], arr[mini]);
    }
}
void printArray(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cout << "Enter the size of vector : ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of vector : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    selectionSort(arr, n);
    printArray(arr);
}