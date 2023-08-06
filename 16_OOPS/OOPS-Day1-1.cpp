#include <bits/stdc++.h>
using namespace std;
/*
// class Animal
// {
// };

class Student
{
    // size = 16 byte
    char b;
    long long a;


    // size = 8 byte
    char a;
    int b;


    // char name;
    // char place;
    // int a;
};

int main()
{
    // cout << "Size of Empty class = " << sizeof(Animal) << endl;  // = 1
    // cout << "Hello World";

    cout << "Size of class = " << sizeof(Student) << endl;
    return 0;
}
*/

class Animal
{

    // state or Properties
private:
    int weight;

public:
    int age;
    string name;

    // default constructor
    Animal()
    {
        this->age = 21;
        this->name = "Khan";
        cout << "Calling default Constructor" << endl;
    }

    // parameterized constructor
    Animal(int age, string name)
    {
        this->age = age;
        this->name = name;
        cout << "Calling Parameterized Constructor" << endl;
    }
    Animal(int age)
    {
        this->age = age;
        cout << "Calling Parameterized Constructor" << endl;
    }

    // copy constructor
    Animal(Animal &obj)
    {
        this->age = obj.age;
        this->name = obj.name;
        cout << "Inside the copy constructor" << endl;
    }

    // destructor
    ~Animal()
    {
        cout << "I am inside destructor" << endl;
    }

    int getWeight()
    {
        return weight;
    }
    void setWeight(int weight)
    {
        this->weight = weight;
    }
    // beahviours
    void eat()
    {
        cout << "Ujjwal is Eating" << endl;
    }

    void sleep()
    {
        cout << "Ujjwal is sleeping" << endl;
    }
};

void fool(const int &a)
{
    cout << &a << endl;
    cout << "Inside the fool method";
}
int main()
{
    // object creation
    // 1. Static
    // Animal ramesh;
    // ramesh.age = 21;
    // ramesh.name = "Ujjwal";
    // cout << "Age of ramesh = " << ramesh.age << endl;
    // cout << "Name of ramesh = " << ramesh.name << endl;

    // ramesh.eat();
    // ramesh.sleep();

    // use getters and setter to access private data member
    //  ramesh.setWeight(101);
    //  cout << "Weight of ramesh = " << ramesh.getWeight();

    //  2. Dynamic Memory
    // Animal *suresh = new Animal;
    // (*suresh).age = 13;
    // cout << (*suresh).age << endl;
    // (*suresh).eat();

    // cout << "Age of suresh = " << suresh->age << endl;

    // suresh->setWeight(23);
    // cout << "Weight of Suresh = " << suresh->getWeight() << endl;
    // suresh->sleep();
    // return 0;

    // Animal a(10, "Tawfeek");
    // cout << "Age - " << a.age << endl;
    // cout << "Name - " << a.name << endl;

    // Animal *a = new Animal(21, "Ujjwal");
    // Animal copy(*a);
    // Animal *a = new Animal(21);
    // cout << "Age - " << a->age << endl;
    // cout << "Name - " << a->name << endl;

    // copy constructor

    // Animal copy = a;
    // Animal copy(a);

    // Test destructor
    //  Animal a;
    //  a.age = 5;

    // Animal *a = new Animal(5);
    // calling destructor manually
    // delete a;

    // const variable
    // const int var = 5;
    // cout << var << endl;

    // const with pointers
    // int a = 5;
    // const int *p = &a;
    // cout << "a = " << a << endl;
    // cout << "*p = " << *p << endl;

    // a++;

    // cout << "a = " << a << endl;
    // cout << "*p = " << *p << endl;

    // When the const pointer variable point to the value:
    // cout << "a = " << a << endl;
    // int *const i = &a;
    // (*i)++;
    // cout << "a = " << a << endl;
    // cout << "*i = " << *i << endl;

    // When const pointer pointing to a const variable:
    // int x = 9;
    // const int *const i = &x;
    // *i = 10; // CTE Error
    // cout << "x = " << x << endl;
    // cout << "*i = " << *i << endl;

    // const int a = 4;
    // cout << &a << endl;
    // fool(a);
}