#include <bits/stdc++.h>
using namespace std;
// can we make a constructor as a private - YES but we can not access it directly
// to access we have to use another class as a friend from that we can create and access the class members
class A
{

private:
    int x;

    A(int a) : x(a) {}

public:
    void setX(int a)
    {
        this->x = a;
    }
    int getX()
    {
        return this->x;
    }
    void print()
    {
        cout << "printing from A class - " << this->x << endl;
    }
    friend class BoxFactory;
};

class BoxFactory
{

    int count;

public:
    A createBox(int n)
    {
        count++;
        return A(n);
    }
};
int main()
{
    // A *a = new A(10);
    // // a->setX(10);
    // cout << a->getX() << endl;
    // a->print();

    BoxFactory b;
    A a = b.createBox(10);
    a.print();
}