#include <bits/stdc++.h>
using namespace std;

int x = 10; // Global Variable
int main()
{
    // x = 20;
    int x = 20; // local to main
    // cout << x << endl;   // local access
    // cout << ::x << endl; // global access

    {
        int x = 50;
        // cout << x << endl;
        ::x = 100;
        cout << ::x << endl; // access global
    }
}