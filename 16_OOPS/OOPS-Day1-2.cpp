#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
    // not access by const object
    const void walk()
    {
        cout << "Student is studying" << endl;
    }
    // access by const object
    void study() const
    {
        cout << "Student is studying" << endl;
    }
    const int playing()
    {
        // worked
        cout << "Student is playing" << endl;
        int i = 12;
        return i;
    }
};

void demo()
{
    static int count = 0;
    cout << "inside demo = " << count << endl;
    count++;
}

class animal
{
public:
    animal()
    {
        cout << "Inside the constructor" << endl;
    }
    ~animal()
    {
        cout << "Inside the destructor" << endl;
    }
    static void walking()
    {
        cout << "Static animal walking" << endl;
    }
};

class Test
{
public:
    int x;
    char ch;

public:
    // Initialization list
    Test(int a, char c) : x{a}, ch{c} {}
    // Test(int a) : x(a) {}//worked but larger data try to fit in small data type - data loss
};
int main()
{
    // const Student s; //with this only const member function can call
    // const Student s;
    // s.playing();
    // s.study();

    // Student s;
    // cout << s.playing() << endl;

    // static in c++
    // for (int i = 1; i <= 10; i++)
    // {
    //     demo();
    // }

    // non-static object
    // if (1)
    //     animal a;

    // static object
    // if (1)
    //     static animal a;
    // cout << "End of main function" << endl;

    // static member function
    // animal::walking();

    Test a(1000, 'T');
    cout << a.x << " " << a.ch << endl;
}