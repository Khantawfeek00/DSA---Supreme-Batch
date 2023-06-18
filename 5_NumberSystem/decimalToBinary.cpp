#include <iostream>
#include <cmath>
using namespace std;

// First Method (Division Method)
//  int decimalToBinary(int n)
//  {
//      int binary = 0;
//      int i = 0;
//      while (n > 0)
//      {
//          int bit = n % 2;
//          n = n / 2;
//          binary = bit * pow(10, i) + binary;
//          i++;
//      }
//      cout << binary << endl;
//      return binary;
//  }

// Bitwise Method
// int decimalToBinary(int n)
// {
//     int binary = 0;
//     int i = 0;
//     while (n != 0)
//     {
//         int bit = (n & 1);
//         binary += (bit * pow(10, i++));
//         n = n >> 1;
//     }
//     cout << binary << endl;
//     return binary;
// }

// int decimalToBinaryN(int n)
// {
//     int binary = 0;
//     int i = 0;
//     while (n > 0)
//     {
//         int rem = n % 2;
//         binary = rem * pow(10, i++) + binary;
//         n /= 2;
//     }
//     return binary;
// }

void decimalToBinaryN(int n)
{

    for (int i = 31; i >= 0; i--)
    {
        // if (((n >> i) & 1))
        //     cout << "1";
        // else
        //     cout << "0";

        cout << ((n >> i) & 1);
    }
}

int main()
{
    int n;
    cin >> n;
    decimalToBinaryN(n);
    return 0;
}