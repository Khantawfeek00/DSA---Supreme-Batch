#include <bits/stdc++.h>
using namespace std;

// int maxSegment(int rodLength, int x, int y, int z)
// {
//     if (rodLength == 0)
//         return 0;
//     if (rodLength < 0)
//         return INT_MIN;
//     int max1 = maxSegment(rodLength - x, x, y, z) + 1;
//     int max2 = maxSegment(rodLength - y, x, y, z) + 1;
//     int max3 = maxSegment(rodLength - z, x, y, z) + 1;
//     return max(max1, max(max2, max3));
// }

int maxSegment(int rodLength, int x, int y, int z)
{
    if (rodLength == 0)
        return 0;
    int a = INT_MIN, b = INT_MIN, c = INT_MIN;
    if (rodLength - x >= 0)
        a = maxSegment(rodLength - x, x, y, z) + 1;
    if (rodLength - y >= 0)
        b = maxSegment(rodLength - y, x, y, z) + 1;
    if (rodLength - z >= 0)
        c = maxSegment(rodLength - z, x, y, z) + 1;
    return max(a, max(b, c));
}

int main()
{
    int rodLength, x, y, z;
    cin >> rodLength >> x >> y >> z;
    cout << "Maximum Number of segment : ";
    int segments = maxSegment(rodLength, x, y, z);
    if (segments < 0)
        cout << 0 << endl;

    else
        cout << segments << endl;
}