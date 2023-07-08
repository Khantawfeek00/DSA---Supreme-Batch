#include <bits/stdc++.h>
using namespace std;

void util(int *p)
{
    // cout << p << endl;
    // cout << *p << endl;

    // p = p + 1;

    // cout << p << endl;
    // give garbage value bcz location is changed
    // cout << *p << endl;

    *p = *p + 1;
}

void solve(int **ptr)
{
    // no change in main
    //  ptr=ptr+1;

    // change address of p
    //  *ptr = *ptr + 1;

    **ptr = **ptr + 1;
}

// pass by reference
void ref(int &a)
{
    a++;
}

// pointer passby reference
void pref(int *p)
{
    *p = 1000;
}

void solvee(int *&p)
{
    p = p + 1;
}

int num;
int &method()
{
    return num;
}

int main()
{

    // multilevel Pointer
    // int a = 5;
    // int *p = &a;
    // int **q = &p;

    // cout << a << endl;
    // cout << &a << endl;
    // cout << p << endl;
    // cout << *p << endl;
    // cout << &p << endl;
    // cout << q << endl;
    // cout << &q << endl;
    // cout << *q << endl;
    // cout << **q << endl;

    // int ***newPtr = &q;
    // cout << newPtr << endl;
    // cout << &newPtr << endl;
    // cout << *newPtr << endl;
    // cout << **newPtr << endl;
    // cout << ***newPtr << endl;

    // Passing pointer to function
    // int a = 4;
    // int *p = &a;

    // cout << "Before" << endl;
    // cout << a << endl;
    // cout << p << endl;
    // cout << *p << endl
    //      << endl;

    // util(p);
    // cout << "After" << endl;
    // cout << a << endl;
    // cout << p << endl;
    // cout << *p << endl;

    // int x = 12;
    // int *p = &x;
    // int **q = &p;

    // cout << "Before" << endl;
    // cout << x << endl;
    // cout << p << endl;
    // cout << *p << endl
    //      << endl;
    // solve(q);

    // cout << "After" << endl;
    // cout << x << endl;
    // cout << p << endl;
    // cout << *p << endl;

    // int a = 4;
    // int *p = &a;
    // int **q = &p;
    // **q = *q + 1;
    // 'int*' to 'int' error
    // cout << **q << endl;

    // int a = 74;
    // int *p = &a;
    // int **q = p;
    // 'int*' to 'int**' Error
    // cout << **q << endl;

    // Reference Variable
    // Same memory location diffrent name
    // add entry in symbol table
    // int a = 120;
    // int &b = a;
    // int &q = b;
    // cout << a << endl;
    // cout << b << endl;
    // cout << q << endl;

    // int a = 44;
    // int &b = a;

    // cout << "Before" << endl;
    // cout << a << endl;
    // cout << b << endl;

    // b++;
    // cout << "After" << endl;
    // cout << a << endl;
    // cout << b << endl;

    // int p = 13;
    // cout << p << endl;
    // ref(p);
    // cout << p << endl;

    // pointer pass by reference
    // int a = 13;
    // cout << a << endl;
    // pref(&a);
    // cout << a << endl;

    // int a = 53;
    // int *p = &a;
    // cout << p << endl;
    // solvee(p);
    // cout << p << endl;

    // return by reference
    // method() = 10;
    // cout << num << endl;

    float a = 10.5;
    cout << ++a << endl;
}