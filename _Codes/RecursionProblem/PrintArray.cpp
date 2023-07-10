#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n, int i)
{
    // Base Case
    if (i >= n)
        return;

    // 1 case solve kardiya
    cout << arr[i] << " ";

    // baki recursion tu karle
    // return printArray(arr, n, i + 1);

    // it will not work bcz always 0 will pass
    //  after that it will increament so infinite loop
    // return printArray(arr, n, i++);

    // it will work
    return printArray(arr, n, ++i);
}

// void printArray(int arr[], int n)
// {
//     // Base Case
//     if (n == 0)
//         return;

//     // 1 case solve kardiya
//     cout << arr[0] << " ";

//     // baki recursion tu karle
//     return printArray(arr + 1, n - 1);
// }

int main()
{
    // int n;
    // cout<<"Enter the value of n: ";
    // cin>>n;
    int n = 5;
    int arr[5] = {10, 20, 30, 40, 50};
    int i = 0;
    printArray(arr, n, i);
    // printArray(arr, n);
}