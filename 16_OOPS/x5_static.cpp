#include <bits/stdc++.h>
using namespace std;

class Animal
{
public:
    static int num;
    int a, b;
    static void print()
    {
        // cout << this->a << " " << this->b << endl;
        // cout << Animal::num << endl;
        // cout << "Hello ";
        cout << Animal::num << endl;
    }

    // with every non-static member function this pointer is passed which id hidden
    void print1()
    {
        // cout << this->a << " " << this->b << endl;
        // cout << Animal::num << endl;
        // cout << "Hello ";
        cout << Animal::num << endl;
    }
};
int Animal::num;

int main()
{
    Animal a;
    a.num = 100;
    a.print();
    Animal b;
    b.num = 200;
    b.print();

    Animal::print();
}