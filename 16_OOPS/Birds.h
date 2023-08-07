#if !defined(BIRD_H)
#define BIRD_H
#include <iostream>
using namespace std;

class Bird
{
public:
    virtual void eat() = 0;
    virtual void fly() = 0;
    // classes that inherit this class has to implement this methods
};

class Sparrow : public Bird
{
public:
    void eat()
    {
        cout << "Sparrow is eating" << endl;
    }
    void fly()
    {
        cout << "Sparrow is flying" << endl;
    }
};
class Eagle : public Bird
{
public:
    void eat()
    {
        cout << "Eagle is eating" << endl;
    }
    void fly()
    {
        cout << "Eagle is flying" << endl;
    }
};
class Pigon : public Bird
{
public:
    void eat()
    {
        cout << "Pigon is eating" << endl;
    }
    void fly()
    {
        cout << "Pigon is flying" << endl;
    }
};

#endif // MACRO
