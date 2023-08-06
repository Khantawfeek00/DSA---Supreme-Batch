#include <bits/stdc++.h>
using namespace std;
/*
class Maths
{

public:
    int sum(int a, int b)
    {
        return a + b;
    }
    void sum(long a, long b)
    {
        cout << "Sum = " << a + b << endl;
    }
    void sum(long a, int b)
    {
        cout << "Sum1 = " << a + b << endl;
    }
    int sum(int a, int b, int c)
    {
        return a + b + c;
    }
};
int main()
{
    // Maths m;
    // cout << m.sum(1, 3) << endl;

    // long a = 10;
    // int b = 12;
    // cout << m.sum(1, 3) << endl;
    // m.sum(a, b);
    // cout << "Sum == " << m.sum(a, b, 100) << endl;
}

*/

class Math
{

public:
    int num;

    void operator+(Math &object2)
    {
        int value1 = this->num;
        int value2 = object2.num;
        cout << value1 - value2 << endl;
    }
};

int main()
{
    Math m1, m2;
    m1.num = 10;
    m2.num = 100;
    (m1 + m2);
}