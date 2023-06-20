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

void count01(int arr[], int size)
{
    int one = 0;
    int zero = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
            zero++;
        else
            one++;
    }
    cout << endl
         << "Number of zeros is : " << zero;
    cout << endl
         << "Number of ones is : " << one;
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
// Revise

int maxInArray(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
            max = arr[i];
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
// Revise
int minInArray(int arr[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (min > arr[i])
            min = arr[i];
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
// Revise
void printExtreme(int arr[], int size)
{
    cout << "Extremes : ";
    int start = 0;
    int end = size - 1;
    bool isStart = true;
    while (start <= end)
    {
        if (isStart)
        {
            cout << arr[start++] << " ";
            isStart = false;
        }
        else
        {
            cout << arr[end--] << " ";
            isStart = true;
        }
    }
    return;
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
// Revise
void printReverseofArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        // Swap methods
        // Method: 1
        //  swap(arr[start++], arr[end--]);

        // Method: 2
        // arr[start] = arr[start] + arr[end];
        // arr[end] = arr[start] - arr[end];
        // arr[start] = arr[start] - arr[end];

        // Method: 3
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;

        // Method: 3
        arr[start] = arr[start] ^ arr[end];
        arr[end] = arr[start] ^ arr[end];
        arr[start] = arr[start] ^ arr[end];

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

    // Revise
    // int arr[1000], n;
    // cout << "Enter the size of array: ";
    // cin >> n;
    // cout << "Enter the elements of array: ";
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // count01(arr, n);

    // int arr[1000], n;
    // cout << "Enter the size of array: ";
    // cin >> n;
    // cout << "Enter the elements of array: ";
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // cout << "Maximum number is: " << maxInArray(arr, n);
    // cout << "Minimum number is: " << minInArray(arr, n);

    int arr[1000];
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    printReverseofArray(arr, n);
}
