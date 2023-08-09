#include <bits/stdc++.h>
using namespace std;

class Vehicle
{
protected:
    string make;
    string model;
    int year;

public:
    Vehicle(string m, string md, int y)
    {
        make = m;
        model = md;
        year = y;
    }
};

class Car : public Vehicle
{
public:
    void getDetails()
    {
        cout << make << " " << model << " " << year << endl;
    }
};

class animal
{

public:
    string name;
};

int main()
{
    // Vehicle *v = new Vehicle("Toyota", "Camry", 2021);
    // Car c = (Car)v;
    // c.getDetails();
    // delete v;
    // return 0;
    animal a;
    cout << sizeof(a) << endl;
}