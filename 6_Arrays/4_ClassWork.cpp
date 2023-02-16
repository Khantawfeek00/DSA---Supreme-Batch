#include <cstring>
#include <iostream>
#include <limits.h>
using namespace std;

int countZeros(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            count++;
        }
    }
    return count;
}

int countOnes(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            count++;
        }
    }
    return count;
}

int countTwos(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 2)
        {
            count++;
        }
    }
    return count;
}

int Max(int arr[], int size)
{
    int max = INT_MIN;
    // long max= LONG_MAX;  -- For long array
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int Min(int arr[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

void printExtremes(int arr[], int size)
{
    cout << "Extremes : " << endl;
    // bool flag = true;
    // for (int i = 0, j = size - 1; i < j;)
    // {
    //     if (flag)
    //     {
    //         cout << arr[i++] << " ";
    //         flag = false;
    //     }
    //     else
    //     {
    //         cout << arr[j--] << " ";
    //         flag = true;
    //     }
    // }

    // OR

    int i = 0, j = size - 1;
    while (i <= j)
    {
        if (i == j)
        {
            cout << arr[i];
            break;
        }
        else
        {
            cout << arr[i] << " " << arr[j] << " ";
        }
        i++;
        j--;
    }
}

void printReverse(int arr[], int size)
{
    cout << "reverse : ";
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;

        // OR
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    // Count Number of 0 and 1 in an array
    // int arr[1000];
    // int n;
    // cout << "Enter the size of the array : ";
    // cin >> n;
    // cout << "Enter the elements of the array : ";
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // cout << "Number of 0's : " << countZeros(arr, n) << endl;
    // cout << "Number of 1's : " << countOnes(arr, n) << endl;

    // Count number of 2 in an array
    // int arr[1000];
    // int n;
    // cout << "Enter the size of the array : ";
    // cin >> n;
    // cout << "Enter the elements of the array : ";
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // cout << "Number of 0's : " << countTwos(arr, n) << endl;

    // Maximum number in an Array
    //  int arr[1000];
    //  int n;
    //  cout << "Enter the size of the array : ";
    //  cin >> n;
    //  cout << "Enter the elements of the array : ";
    //  for (int i = 0; i < n; i++)
    //  {
    //      cin >> arr[i];
    //  }
    //  cout << "Max : " << Max(arr, n) << endl;

    // Minimum number in an Array
    // int arr[1000];
    // int n;
    // cout << "Enter the size of the array : ";
    // cin >> n;
    // cout << "Enter the elements of the array : ";
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // cout << "Min : " << Min(arr, n) << endl;

    // Extreme Print in Array
    // int arr[1000];
    // int n;
    // cout << "Enter the size of the array : ";
    // cin >> n;
    // cout << "Enter the elements of the array : ";
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // printExtremes(arr, n);

    // int arr[1000];
    // int n;
    // cout << "Enter the size of the array : ";
    // cin >> n;
    // cout << "Enter the elements of the array : ";
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // printReverse(arr, n);
}
