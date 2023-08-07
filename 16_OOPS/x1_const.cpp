#include <bits/stdc++.h>
using namespace std;
class abc
{
    mutable int x;
    // int x;
    int *y;
    int z;

public:
    // initalization list

    abc(int x1, int y1, int z1 = 0) : x(x1), y(new int(y1)), z(z1)
    {
        cout << "initialization list" << endl;
    }
    abc()
    {
        x = 100;
        y = new int(20);
    }

    int getX()
    {
        return x;
    }
    int getX() const
    {
        // x = 100; // Error
        // x=100 // only works when it declared with mutable keyword
        // but do not use mutable keyword it is used for debugging in industry
        return x;
    }
    void setX(int x)
    {
        this->x = x;
    }
    int getY()
    {
        return *y;
    }
    void setY(int y)
    {
        *(this->y) = y;
    }
};
void print(const abc &a, int b = 100) // here b is default argument
{
    cout << a.getX() << endl;
}
int main()
{
    abc a;
    // cout << a.getX() << endl;

    // cout << a.getY() << endl;
    print(a);
}
int main2()
{
    /*
    const int x = 10; //x is constant
    {
        int x = 100;
        x = 1001;
        cout << x << endl;
    }
    // x = 1001; Error
    cout << x << endl;
    */

    // const int x = 100;
    // cout << x << endl;
    // // x = 1000; // Error
    // cout << x << endl;

    // 2. const with pointers
    // const int *a = new int(2); // const data with non-const pointer
    // int const *a = new int(2); // same as above
    // cout << *a << endl;
    // // *a = 100; //Error
    // int b = 100;
    // a = &b; // address can be change
    // cout << *a << endl;

    // const pointer with non-const data
    // int *const a = new int(2);
    // cout << *a << endl;
    // *a = 100;
    // int b = 100;
    // // a = &b; // Error
    // cout << *a << endl;

    // const pointer with const data
    const int *const a = new int(2);
    cout << *a << endl;
    // *a = 100;   //Error
    int b = 100;
    // a = &b;  //Error
    cout << *a << endl;
}