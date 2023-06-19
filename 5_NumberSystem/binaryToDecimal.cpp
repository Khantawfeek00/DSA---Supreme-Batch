#include <iostream>
#include <cmath>
using namespace std;

// Division Method
//  int binaryToDecimal(int n)
//  {
//      int decimal = 0;
//      int i = 0;

//     while (n != 0)
//     {
//         decimal += (pow(2, i++) * (n % 10));
//         n = n /10;
//     }
//     return decimal;
// }

// Bitwise Method
// Don't know
int binaryToDecimal(int n)
{
    int decimal = 0;
    int base = 1;
    while (n > 0)
    {
        if (n & 1)
            decimal |= base;

        n >>= 1;
        base <<= 1;
    }

    return decimal;
}

// int main()
// {
//     int n;
//     cin >> n;
//     int decimal = binaryToDecimal(n);
//     cout << decimal;
//     return 0;
// }

// int binaryToDecimal(int binary)
// {
//     int decimal = 0, power = 1;
//     while (binary != 0)
//     {
//         decimal += (binary & 1) * power;
//         binary >>= 1;
//         power *= 2;
//     }

//     return decimal;
// }

// int binaryToDecimal(int n)
// {
//     int i = 0;
//     int dec = 0;
//     while (n > 0)
//     {
//         int rem = n % 10;
//         dec += rem * pow(2, i);
//         i++;
//         n = n / 10;
//     }
//     return dec;
// }

int main()
{
    int binary;
    cout << "Enter a binary number: ";
    cin >> binary;
    cout << binary << " in decimal is: " << binaryToDecimal(binary) << endl;
    return 0;
}
