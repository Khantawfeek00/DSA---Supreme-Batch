#include <bits/stdc++.h>
using namespace std;

class A
{
private:
    int x;

    int getX() const
    {
        return this->x;
    }

public:
    A(int a) : x(a) {}

    void setX(int x)
    {
        this->x = x;
    }

    // using this class B can only see private D.M. and M.F.
    friend class B;
    friend void print(const A &a);
};

class B
{
public:
    void print(const A &a)
    {
        cout << a.getX() << endl;
        // a.x = 100; // Error
        cout << a.x << endl;
    }
};

void print(const A &a)
{
    cout << a.x << endl;
}

int main()
{
    A a(5);
    // B b;
    // b.print(a);

    print(a);
}