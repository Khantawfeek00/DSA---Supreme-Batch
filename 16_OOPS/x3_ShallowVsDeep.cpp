#include <bits/stdc++.h>
using namespace std;

class abc
{
public:
    int x;
    int *y;

    abc(int x1, int y1) : x(x1), y(new int(y1)) {}

    // default dumb copy constructor  //Shallow Copy
    // abc(const abc &obj)
    // {
    //     x = obj.x;
    //     y = obj.y;
    // }

    // our smart deep copy
    // abc(const abc &obj)
    // {
    //     x = obj.x;
    //     y = new int(*obj.y);
    // }

    // void print() const
    // {
    //     printf("X:%d\nPTR Y:%p\nContent of y (*y):%d\n\n", x, y, *y);
    // }
    // ~abc()
    // {
    //     delete y;
    // }
};

int main()
{
    //     abc a(1, 2);
    //     a.print();

    //     abc b = a; // here copy constructor is called by default
    //     a.print();

    //     *b.y = 20;

    //     cout << "printing a : " << endl;
    //     a.print();
    //     cout << "printing b : " << endl;
    //     b.print();

    // abc *a = new abc(1, 2);
    // abc b = *a;
    // delete a;
    // b.print();
    // return 0;

    abc a(10, 20);
    abc b = a;
    a.x = 100;
    cout << a.x << "  " << &(a.x) << endl;
    cout << b.x << "  " << &(b.x) << endl;
}