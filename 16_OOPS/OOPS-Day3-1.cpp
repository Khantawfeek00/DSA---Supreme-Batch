#include <bits/stdc++.h>
using namespace std;

class World
{
public:
    World()
    {
        cout << "Inside the World Constructor" << endl;
    }

    void speak()
    {
        cout << "World is Speaking" << endl;
    }
};
class Animal : public World
{
public:
    Animal()
    {
        cout << "Inside the Animal Constructor" << endl;
    }
    Animal(int a, int b)
    {
        cout << "Sum = " << a + b << endl;
    }
    void speak()
    {
        cout << "Animal is Speaking" << endl;
    }
};

class Dog : public Animal
{
public:
    Dog()
    {
        Animal(1, 3);
        cout << "Inside the Dog Constructor" << endl;
    }
    // override
    void speak()
    {
        cout << "Dog is Barking" << endl;
    }

    void name()
    {
        cout << "MY name is Sheru" << endl;
    }
};

int main()
{
    // Dog d1;
    // Animal d1;
    // d1.speak();

    // Animal *a = new Animal();
    // a->speak();

    // Dog *d1 = new Dog();
    // d1->speak();

    // UpCasting
    //  Animal *a = new Dog();
    //  a->speak();
    //  a->name(); //Error

    // DownCasting
    //  Dog *d2 = (Dog *)new Animal();
    //  d2->speak();
    //  d2->name();

    // Now for Constructor
    // Animal *a = new Animal();
    // a->speak();

    // Dog *a = new Dog();
    // a->speak();

    // Animal *a = new Dog();
    // a->speak();

    // Dog *a = (Dog *)new Animal();
    // a->speak();

    // Dog *a = new Dog();
    // a->speak();

    // Animal* a=new Animal();
    // a->speak();

    // World *a = new Animal();
    // a->speak();

    // Dog *d = new Dog();
    // Dog d;
    // d.speak();
}