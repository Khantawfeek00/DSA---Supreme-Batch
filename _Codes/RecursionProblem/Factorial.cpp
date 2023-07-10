#include <bits/stdc++.h>
using namespace std;

long long int factorial(int N)
{
    // code here
    if (N <= 1)
        return 1;
    return N * factorial(N - 1);
}
int main()
{
    long long int n;
    cout << "Enter the size of array : ";
    cin >> n;
    cout << factorial(n);
}