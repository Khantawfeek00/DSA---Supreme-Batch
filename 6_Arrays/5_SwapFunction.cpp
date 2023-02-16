#include <iostream>
using namespace std;

void swapTwo(int a, int b)
{

    // Method 1 : Using temporary Variable
    // int temp = a;
    // a = b;
    // b = temp;

    // Method 2 : Using + and -
    // a = a + b;
    // b = a - b;
    // a = a - b;

    // Method 3 : Using xor
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    
    cout << "a = " << a << " b = " << b << endl;
}

int main()
{
    int a, b;
    cout << "Enter the value of a and b : ";
    cin >> a >> b;
    swapTwo(a, b);
}