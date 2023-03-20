#include <iostream>
using namespace std;

int solve(int *arr)
{
    cout << "size inside solve function : " << arr[0] << endl;
    return 0;
}

int main()
{
    // int a[] = {1, 2, 3, 4, 5, 6, 7};
    // cout << a << endl;
    // cout << &a << endl;
    // cout << &a[0] << endl;
    // cout << &a[1] << endl;

    // int *p = a;
    // cout << p << endl;
    // cout << &p << endl;

    // int *p = &a;
    // cout << 3 [a] << endl;
    // cout << *a << endl;
    // cout << *a + 1 << endl;

    // cout << a + 0 << endl;
    // cout << a + 1 << endl;6
    // cout << *(a + 1) + 2 << endl;

    // cout << a[3] << endl;  // *(a+3);
    // cout << 3 [a] << endl; //*(3+a);

    // int *p = a;
    // cout << a << endl;
    // cout << &p << endl;
    // // p = p + 1;
    // cout << p << endl;

    // char arr[10] = {'1', '2', '3', '4'};
    // // int *p = arr;
    // // cout << sizeof(arr) << endl;
    // // cout << sizeof(p) << endl;
    // char *p = &arr[0];
    // char *q = arr;
    // cout << arr << endl;
    // cout << p + 2 << endl;
    // cout << q << endl;

    // char ch = 'k';
    // char *ptr = &ch;
    // cout << ptr << endl;

    int arr[10] = {11, 2, 3, 4};
    cout << "Main = " << sizeof(arr) << endl;
    solve(arr);
}