#include <bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(int n)
{
    vector<bool> prime(n, true);
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p])
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    for (int p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}

int *foo()
{
    int *p = new int; // Fix
    *p = 10;
    return p;
}

int main()
{
    // 1. Debug the code.
    //  int n = 50;
    //  SieveOfEratosthenes(n);
    //  return 0;

    // 2. Debug the code. Why is the code crashing when trying to dereference a pointer?
    // int *p = new int;
    // *p = 42;
    // delete p;
    // return 0;

    // 3. Debug the code.Why is the code not returning the expected output ?
    // int *q = foo();
    // cout << *q << endl; // Expected output: 10, Actual output: some random value
    // return 0;

    // 4.Debug the code
    // int *p = new int;
    // *p = 10;
    // return 0;

    // int arr[5] = {1, 2, 3, 4, 5};
    // int *ptr = arr;
    // cout << "The value of the third element in arr is " << *(ptr + 2) << endl;
    // return 0;

    // array of Pointer
    // int *arr[3]; // array of pointers to int

    // int nums[3] = {1, 2, 3};

    // int *ptr = nums; // pointer to int(points to the forst element of nums)

    // assigning pointers to element in the array of pointers
    // arr[0] = &nums[0];
    // arr[1] = &nums[1];
    // arr[2] = &nums[2]; // accessing elements using array notation

    // cout << *arr[0] << endl;
    // cout << *arr[1] << endl;
    // cout << *arr[2] << endl;

    // accessing elements using pointer notation
    // cout << *ptr << endl;
    // cout << *(ptr + 1) << endl;
    // cout << *(ptr + 2) << endl;

    // int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // int(*ptr)[10] = &nums; // pointer to an array of 10 integers
    // accessing elements of the array using pointer notation
    // cout << (*ptr)[0] << endl;
    // cout << (*ptr)[1] << endl;
    // cout << (*ptr)[2] << endl;
}