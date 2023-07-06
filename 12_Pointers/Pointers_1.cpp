#include <iostream>

using namespace std;

int main()
{
    // int x = 12;
    // cout << x << endl;
    // cout << &x << endl;

    // int x = 5, y = 5;
    // cout << &x << endl;
    // cout << &y << endl;

    // *Pointers
    // int a = 5;
    // int* ptr = &a;
    // cout << *ptr; //Printing Actual Value

    // int a = 5;
    // int* ptr = &a;
    // cout << &ptr;  //Printing address of the value

    // int a = 5;
    // cout << &a << endl;
    // int *p = &a;
    // cout << p << endl;
    // cout << &p << endl;

    // char a = '5';
    // char *p = &a;
    // cout << sizeof(*p); // gives sizeof value stored in that address (Complicated)
    // cout << sizeof(&p); // archetecture depenedent //give size of address
    // cout << sizeof(p);  // gives size of address

    // Copying the pointer
    int a = 5;
    int *p = &a;
    int *q = p;
    cout << "ptr = " << p << endl;
    cout << "dusraptr = " << q << endl;

    cout << a << endl;
    cout << &a << endl;
    cout << p << endl;
    cout << &p << endl;
    cout << q << endl;
    cout << &q << endl;
    cout << *p << endl;
    cout << *q << endl;
    cout << (*p + *q) << endl;
    cout << (*p) * 2 + (*q) * 3 << endl;
    cout << (*p / 2) - (*q) / 2 << endl;

    // Revise
    //  int a = 5, b = 5;
    //  cout << a << endl;
    //  cout << &a << endl;
    //  cout << &b << endl;

    // int a = 5;
    // cout << a << endl;
    // int *ptr = &a;

    // value of ptr
    // cout << ptr << endl;

    // value at address stored in ptr
    // cout << *ptr << endl;

    // address of ptr
    // cout << &ptr << endl;
}