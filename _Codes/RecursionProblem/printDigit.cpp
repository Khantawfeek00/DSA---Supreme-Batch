#include <bits/stdc++.h>
using namespace std;

void printDigits(int n)
{
    if (n == 0)
        return;

    printDigits(n / 10);
    cout << n % 10 << " ";
    return;
}

void printDigitsReverse(int n)
{
    if (n == 0)
        return;

    cout << n % 10 << " ";
    return printDigitsReverse(n / 10);
}

int main()
{
    int n;
    cout << "Enter the number of stairs : ";
    cin >> n;
    cout << "Digits are : ";
    printDigits(n);
    cout << endl;
    printDigitsReverse(n);
}