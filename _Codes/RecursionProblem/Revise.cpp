#include <bits/stdc++.h>
#include <limits.h>
using namespace std;

int powerOfTwo(int n)
{
    if (n == 0)
        return 1;
    return 2 * powerOfTwo(n - 1);
}

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

void counting(int n)
{
    // if (n == 0)
    //     return;
    // cout << n << " ";
    // counting(n - 1);

    if (n == 0)
        return;
    counting(n - 1);
    cout << n << " ";
}

int fibonacciNumber(int n)
{
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    return fibonacciNumber(n - 1) + fibonacciNumber(n - 2);
}

int climbStair(int n)
{
    if (n == 0 || n == 1)
        return 1;
    if (n == 2)
        return 2;

    return climbStair(n - 1) + climbStair(n - 2);
}

void printArray(int arr[], int n, int i)
{
    if (i >= n)
    {
        return;
    }
    cout << arr[i] << " ";
    printArray(arr, n, i + 1);
}

// int findMax(int arr[], int n, int &maxi)
// {
//     if (n == 1)
//     {
//         return arr[n - 1];
//     }
//     return max(arr[n - 1], findMax(arr, n - 1, maxi));
// }

void findMax(int arr[], int n, int i, int &maxi)
{
    if (i >= n)
    {
        return;
    }
    if (maxi < arr[i])
    {
        maxi = arr[i];
    }
    findMax(arr, n, i + 1, maxi);
}

bool isKey(string &str, int n, char key)
{
    if (n == 0)
    {
        return false;
    }
    return str[n - 1] == key ? true : isKey(str, n - 1, key);
}

int KeyIndex(string &str, int n, char key)
{
    if (!n)
        return -1;
    return str[n - 1] == key ? n - 1 : KeyIndex(str, n - 1, key);
}

void subseq(string &str, string output, int i)
{
    if (i >= str.length())
    {
        cout << output << endl;
        return;
    }

    subseq(str, output + str[i], i + 1);
    subseq(str, output, i + 1);
    return;
}
int main()
{
    // int n;
    // cout << "Enter the value of n: ";
    // cin >> n;
    // for (int i = 0; i < n; i++)
    //     cout << powerOfTwo(i) << endl;

    // cout << factorial(n) << endl;

    // counting(n);

    // cout << fibonacciNumber(n) << endl;
    // cout << climbStair(n) << endl;
    // int arr[] = {1, 2, 4, 5, 6, 3};
    // int n = 6;
    // printArray(arr, n, 0);
    // return 0;

    // int maxi = INT_MIN;
    // int i = 0;
    // cout << findMax(arr, n, maxi);
    // findMax(arr, n, i, maxi);
    // cout << "Maxi = " << maxi;

    // string str = "lovebabber";
    // char ch = 'b';
    // int n = str.length();
    // // cout << isKey(str, n, ch);
    // cout << KeyIndex(str, n, ch);

    string str = "abc";
    subseq(str, "", 0);
}