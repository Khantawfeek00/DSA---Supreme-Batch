#include <bits/stdc++.h>
using namespace std;

void countingPrint(int n)
{
    // Base condition
    if (n == 0)
        return;

    // recusive call
    countingPrint(n - 1);

    // Processing
    cout << n << " ";
}

void countingPrintR(int n)
{
    // Base condition
    if (n == 0)
        return;

    // Processing
    cout << n << " ";

    // recusive call
    countingPrintR(n - 1);
}
int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    cout << "InOrder : " << endl;
    countingPrint(n);
    cout << endl;
    cout << "Reverse : " << endl;
    countingPrintR(n);
}