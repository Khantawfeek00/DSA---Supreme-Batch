#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }

    // Solid Triangle
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // 5
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *

    // Hollo Rectangle
    // for (int i = 0; i < n; i++)
    // {
    //     if (i == 0 || i == n - 1)
    //     {
    //         for (int j = 0; j < 2 * n - 1; j++)
    //         {
    //             cout << "* ";
    //         }
    //     }
    //     else
    //     {
    //         cout << "* ";
    //         for (int j = 0; j < 2 * n - 3; j++)
    //         {
    //             cout << "  ";
    //         }
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // 5
    // * * * * * * * * *
    // *               *
    // *               *
    // *               *
    // * * * * * * * * *

    // OR

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<2*n-1;j++){
    //         if(i==0 || i==n-1 || j==0 || j==2*n-2){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }
    // 5
    // * * * * * * * * *
    // *               *
    // *               *
    // *               *
    // * * * * * * * * *

    // Half Pyramid
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // 5
    // *
    // * *
    // * * *
    // * * * *
    // * * * * *

    // Inverted Half Pyramid
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = n - i; j > 0; j--)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // 5
    // * * * * *
    // * * * *
    // * * *
    // * *
    // *

    // Numeriic Half Pyramid
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << j + 1;
    //     }
    //     cout << endl;
    // }
    // 5
    // 1
    // 12
    // 123
    // 1234
    // 12345

    // Inverted Numeric Half Pyramid
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << j + 1;
    //     }
    //     cout << endl;
    // }
    // 5
    // 12345
    // 1234
    // 123
    // 12
    // 1

    // Full Pyramid
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // 6
    //      *
    //     * *
    //    * * *
    //   * * * *
    //  * * * * *
    // * * * * * *

    // Inverted Full Pyramid
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // 5
    // * * * * *
    //  * * * *
    //   * * *
    //    * *
    //     *

    // Numeric Full Pyramid
    //     for (int i = 0; i < n; i++)
    //     {
    //         for (int j = 0; j < n - i - 1; j++)
    //         {
    //             cout << "  ";
    //         }
    //         int j = i;
    //         for (; j < 2 * i ; j++)
    //         {
    //             cout << j+1 << " ";
    //         }
    //         for (; j >= i; j--)
    //         {
    //             cout << j+1 << " ";
    //         }
    //         cout << endl;
    //     }
    //     5
    //         1
    //       2 3 2
    //     3 4 5 4 3
    //   4 5 6 7 6 5 4
    // 5 6 7 8 9 8 7 6 5

    // OR
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int j = i; j < 2 * i; j++)
    //     {
    //         cout << j + 1 << " ";
    //     }
    //     for (int j = 2 * i; j >= i; j--)
    //     {
    //         cout << j + 1 << " ";
    //     }
    //     cout << endl;
    // }

    // Numeric Hollow Full Pyramid
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "_";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (j == 0)
                cout << j+1;
            else if (j == 2 * i)
                cout << i + 1;
            else if (i == n - 1 && j%2==0)
                cout << j/2+1;
            else
                cout << " ";
        }
        cout << endl;
    }
}