#include <bits/stdc++.h>
using namespace std;

// Encapsulation
class Animal
{
    /*by marking all data members private
    it achieves full encapsulation*/
private:
    string name;
    int weight;

protected:
    int number;

public:
    void setName(string name)
    {
        this->name = name;
    }

    string getName()
    {
        return this->name;
    }
    void eat()
    {
        cout << "Eating" << endl;
    }
};
// child class

class SuperAnimal
{

public:
    int num;
    string name;
};
/*
class Dog : public SuperAnimal
{
};
*/

/*
class Dog : private SuperAnimal
{
public:
    void print()
    {
        cout << this->num << endl;
    }
};
*/
/*
class Dog : protected SuperAnimal
{
public:
    void print()
    {
        cout << this->name << endl;
    }
};

*/

// class Dog : public SuperAnimal //protected
// class Dog : protected SuperAnimal//protected
class Dog : private SuperAnimal // private
{
public:
    void print()
    {
        cout << this->num << endl;
    }
};

/*Error
class Dog : public SuperAnimal
class Dog : protected SuperAnimal
class Dog : private SuperAnimal
{
public:
    void print()
    {
        cout << this->num << endl;
    }
};

*/
/*int main()
{
    // Animal a;
    // a.setName("tawfeek");
    // cout << a.getName() << endl;
    // a.eat();
    // Dog d1;
    // d1.eat();

    // Dog d1;
    // cout << d1.num;

    // Dog d1;
    // d1.print();
}

*/

class Car
{
public:
    string name;
    int weight;
    int age;

    void speedUp()
    {
        cout << "Speeding up" << endl;
    }
    void breakDown()
    {
        cout << "Breaking" << endl;
    }
};

// single level inheritence
class Scorpio : public Car
{
};

// Multi-level Inheritence
class Fruit
{
public:
    string name = "Mangoo";
};

class Mango : public Fruit
{
public:
    int weight = 122;
};

class Alphanso : public Mango
{
public:
    string type = "Sweet";
};

// Multiple Inheritence
class A
{

public:
    int name;
};

class B
{
public:
    int num;
    int name;
};

class C : public A,
          public B
{
public:
    int pincode;
};

// hierarchical
// Parent
class Car1
{
public:
    int name;
    void printSpeed()
    {
        cout << "Speeding" << endl;
    }
};
// child 1
class Scorpio1 : public Car1
{
};
// child 2
class Fortuner1 : public Car1
{
};
int main()
{
    // Scorpio babberWali;
    // babberWali.speedUp();

    // Alphanso a;
    // cout << a.name << " " << a.weight << " " << a.type << endl;

    C c;
    // cout << c.name << endl;
    // cout << c.num << endl;
    // cout << c.pincode << endl;

    // use scope resolution operator to prevent from diamond problem
    // cout << c.name << endl; //Error because of dupllicate variables - can be avoid with
    // cout << c.A::name << endl;
    // cout << c.B::name << endl;

    Scorpio1 s;
    s.printSpeed();

    Fortuner1 f;
    s.printSpeed();
}