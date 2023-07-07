#include <iostream>
using namespace std;

int main()
{
    // wild pointer

    // case 1: to avoid this initializ with null ptr
    // int a = 10;
    // cout << a << endl;
    // int *ptr = &a;
    // it will give address to which it dont have to access
    // cout << ptr << endl;
    // undefined behaviour
    // cout << *ptr << endl;

    // case 2: delete pointer
    // if you delete mark with nullptr;
    // int *ptr = new int;
    // delete ptr;
    // undefined behaviour
    // cout << *ptr << endl;

    // case 3: pointer to non-existing variable
    // int *ptr = &x;
    // cout << *ptr << endl;

    // void Pointer
    // int a = 4;
    // void *ptr = &a;
    // int *intptr = static_cast<int *>(ptr);
    // cout << *intptr << endl;

    // int a = 13;
    // int *ptr = &a;
    // void *voidptr = ptr;
    // int *newPtr = static_cast<int *>(voidptr);
    // cout << *newPtr << endl;

    // static_cast
    // int a = 13;
    // cout << a << endl;
    // float f = static_cast<float>(a);
    // not compatible (runtime error)
    // string f = static_cast<string>(a);
    // cout << f << endl;
}