#include <iostream>
using namespace std;
int main()
{
    // code 1:
    //  int i = 0;
    //  i = i + 1;
    //  cout << i;
    //  /*print i \*///i = i + 1;
    //  cout << ++i;

    // code 2:
    //  short i=2300, j=4322;
    //  cout<<"i+j="<<(i+j);

    // code 3:
    //  float l, b;
    //  float P = 2*(l+b);
    //  printf("Perimeter=%f", P);

    // code 4:
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; ++i)
    // {
    //     for (int j = 0; j < n; ++j)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // code 5:
    // int n;
    // cin >> n;
    // bool isPrime = true;
    // for (int i = 2; i < n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         isPrime = false;
    //         break;
    //     }
    // }
    // if (isPrime)
    // {
    //     cout << "Prime" << endl;
    // }
    // else
    // {
    //     cout << "Not Prime" << endl;
    // }
    // return 0;

    // code 6:
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; ++i)
    // {
    //     for (int j = i + 1; j <= n; j++)
    //     {
    //         if (j == i + 1 || j == n || i == 0)
    //         {
    //             cout << j;
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    // code 7:
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i - 1; j++)
        {
            printf("  ");
        }
        for (int j = i; j < i; j++)
        {
            printf("%d ", j);
        }
        int ele = 2 * (n - i - 1);
        for (int j = 1; j <= i - 1; j++)
        {
            printf("%d ", ele--);
        }
        printf("\n");
    }
    return 0;
}