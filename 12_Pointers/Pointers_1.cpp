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

    char a = '5';
    char *p = &a;
    cout << sizeof(*p); // gives sizeof value stored in that address (Complicated)
    cout << sizeof(&p); // archetecture depenedent //give size of address
    cout << sizeof(p);  // gives size of address
}