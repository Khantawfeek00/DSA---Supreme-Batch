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
int decimalToBinary(int n)
{
    int binary = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = (n & 1);
        binary += (bit * pow(10, i++));
        n = n >> 1;
    }
    cout << binary << endl;
    return binary;
}

int main()
{
    int n;
    cin >> n;
    int binary = decimalToBinary(n);
    return 0;
}