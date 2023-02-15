#include <iostream>
#include <cmath>
using namespace std;

//Division Method
// int binaryToDecimal(int n)
// {
//     int decimal = 0;
//     int i = 0;

//     while (n != 0)
//     {
//         decimal += (pow(2, i++) * (n % 10));
//         n = n /10;
//     }
//     return decimal;
// }

//Bitwise Method
// int binaryToDecimal(int n)
// {
//     int power = 1;
//     int decimal = 0;

//     while (n != 0)
//     {
//         decimal += power* (n &1);
//         n = n>>1;
//         power*=2;
//     }
//     return decimal;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int decimal = binaryToDecimal(n);
//     cout << decimal;
//     return 0;
// }


#include <iostream>
using namespace std;

int binaryToDecimal(int binary) {
    int decimal = 0, power = 1;
    while (binary != 0) {
        decimal += (binary & 1) * power;
        binary >>= 1;
        power *= 2;
    }

    
    return decimal;
}

int main() {
    int binary;
    cout << "Enter a binary number: ";
    cin >> binary;
    cout << binary << " in decimal is: " << binaryToDecimal(binary) << endl;
    return 0;
}

