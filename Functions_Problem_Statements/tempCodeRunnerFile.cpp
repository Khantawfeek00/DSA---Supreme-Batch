#include <iostream>
using namespace std;

float areaOfCircle(int r)
{
    return 3.14 * r * r;
}

bool isEvenOrOdd(int n)
{
    if ((n & 1) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int Factorial(int n)
{
    int fact = 1;
    while (n >= 1)
    {
        fact = fact * n;
        n--;
    }
    return fact;
}

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    // 1. Write a function to display area of circle
    //  int r;
    //  cout << "Enter the radius of a circle : ";
    //  cin >> r;
    //  float area = areaOfCircle(r);
    //  cout << "Area of Circle = " << area;
    //  return 0;

    // 2.Find the number is Even or Odd;
    // int n;
    // cout << "Enter the value of n :";
    // cin >> n;
    // if (isEvenOrOdd(n))
    //     cout << "The number is Even";
    // else
    //     cout << "The number is Odd";

    // 3.Find Factorial of a number
    // int n;
    // cout << "Enter the value of n : ";
    // cin >> n;
    // int fact = Factorial(n);
    // cout << "Factorial of " << n << " is : " << fact;
    // return 0;

    // 4.Check Number is Prime or not
    // int n;
    // cout << "Enter the value of n :";
    // cin >> n;
    // if (isPrime(n))
    //     cout << "The number is Prime";
    // else
    //     cout << "The number is not Prime";

    // 5.Print all prime number from 1 to N
    int n;
    cout << "Enter the value of n :";
    cin >> n;
    cout << "Prime Numbers from 1 to " << n << " is : ";
    for (int i = 1; i <= n; i++)
    {
        if (isPrime(i))
            cout << i << " ";
    }
}