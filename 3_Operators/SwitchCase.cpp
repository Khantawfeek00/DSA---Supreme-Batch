#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    //
    //     switch (n)
    //     {
    //     case -1:
    //         cout << "Babber";
    //         break;
    //     case 2*1+1+1:
    //         cout << "Babber";
    //         break;
    //     case 3:
    //         cout << "Suresh";
    //         break;

    //     default:
    //         cout << "Default";
    //         break;
    //     }

    switch (n)
    {
    case 1:
    case 5:
        cout << "Babber";
        break;

    case 2:
        cout << "Ramesh";
        break;
    default:
        cout << "Suresh";
        break;
    }
}

// int main()
// {
//     cout << "Hello World";
//     return -1;
//     cout << "Hello World";
// }