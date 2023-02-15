#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    (n % 2 == 0) ? cout << "Even" : cout << "Odd";
}