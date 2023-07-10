#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n)
{
    // if(n>0 && (n==2 || n==1))
    //     return true;
    // if(n&1==1 || n==0)
    //     return false;
    // return isPowerOfTwo(n/2);

    if (n == 0)
        return false;
    return (n == 1) || (!(n & 1) && isPowerOfTwo(n >> 1));
}
int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    cout << isPowerOfTwo(n);
}