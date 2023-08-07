#include <bits/stdc++.h>
using namespace std;
#define PI 3.14155965

#define Maxx(x, y) (x > y ? x : y)

float areaOfCircle(float r)
{
    return PI * r * r;
}
void fun3()
{
    int x = 6;
    int b = 120;
    cout << Maxx(x, b) << endl;
}
int main()
{
    int r = 13.3;
    // cout << areaOfCircle(r);
    fun3();
    return 0;
}