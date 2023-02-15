#include <iostream>
#include <cmath>

using namespace std;
#define ull unsigned long long int

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

void printDigits(int n)
{
    cout << "Digits are : ";
    // print 527==> 7 2 7   
    // while (n != 0)
    // {
    //     cout << n % 10 << " ";
    //     n = n / 10;
    // }
    // return;


    // print 527==> 5 2 7  
    int len = (int)floor(log10(n)) + 1;
    int i = len - 1;
    while (n > 0)
    {
        int div = n / pow(10, i);
        cout << div << " ";
        n = n - (pow(10, i) * div);
        i--;
    }
}

int reverseDigit(int n)
{
    int rev = 0;
    while (n != 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    return rev;
}

int countSet(int n)
{
    int count = 0;
    while (n > 0)
    {
        if ((n & 1) == 1)
        {
            count++;
        }
        n = n >> 1;
    }
    return count;
}

int decToBinary(int n)
{
    for (int i = 31; i >= 0; i--)
    {
        int k = n >> i;
        if (k & 1)
            cout << "1";
        else
            cout << "0";
    }
}

float kmToMiles(int n)
{
    return n * 0.62137119;
}

int reverseInteger(int n)
{
    int rev = 0;
    while (n != 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    return rev;
}

float celToFarh(int n)
{
    return n * 33.8;
}

int setIthBit(int n, int k)
{
    if (((n >> k) & 1) == 1)
        return n;
    else
        return n + pow(2, k);

    // OR

    return (1 << k) | n;
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
    // int n;
    // cout << "Enter the value of n :";
    // cin >> n;
    // cout << "Prime Numbers from 1 to " << n << " is : ";
    // for (int i = 1; i <= n; i++)
    // {
    //     if (isPrime(i))
    //         cout << i << " ";
    // }

    // 6.Print all digits in an integer
    int n;
    cout << "Enter the value of n :";
    cin >> n;
    printDigits(n);
    return 0;

    // 7.Create a number using digits
    // int n;
    // cout << "Enter the value of n :";
    // cin >> n;
    // cout << "Reverse of a Number is : " << reverseDigit(n);
    // return 0;

    // 8.Print number of set bits (count 1 in binary form of digit)
    // int n;
    // cout << "Enter the value of n :";
    // cin >> n;
    // int noOfSetBits = countSet(n);
    // cout << "Number of Set bits are : " << noOfSetBits;

    // Print Binary equivalent of a decimal Number
    // int n;
    // cout << "Enter the value of n : ";
    // cin >> n;
    // decToBinary(n);
    // return 0;
    // OR
    // int n;
    // cout << "Enter the value of n : ";
    // cin >> n;
    // int binary = decToBinary(n);
    // cout << "Binary = " << binary;
    // return 0;

    // 10.Print binary Equivalent of a decimal Number
    // int n;
    // cout << "Enter the distance in KM :";
    // cin >> n;
    // float miles = kmToMiles(n);
    // cout << n << " KM = " << miles << " miles";
    // return 0;

    // 11. Reverse an Integer
    // int n;
    // cout << "Enter the value of n :";
    // cin >> n;
    // int reverse = reverseInteger(n);
    // cout << "Reverse = " << reverse;
    // return 0;

    // 12. Set ith bit
    // int n, i;
    // cout << "Enter the value of n :";
    // cin >> n;
    // cout << "Enter the value of k :";
    // cin >> i;
    // int afterSetIthBit = setIthBit(n, i);
    // cout << "After setting " << i << "th bit = " << afterSetIthBit;
    // return 0;

    // 13. Convert Cecius to Fahrenheit
    // int n;
    // cout << "Enter the Temperature in celcius :";
    // cin >> n;
    // float farh = celToFarh(n);
    // cout << "Temperature in Fahrenheit is : " << farh;
    // return 0;
}