#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // solid square
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // Hollow Solid square
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
    //             cout << "* ";
    //         else
    //             cout << "  ";
    //     }
    //     cout << endl;
    // }

    // Hollow Inverted half Pyramid
    //  for (int i = 0; i < n; i++)
    //  {
    //      for (int j = 0; j < n - i; j++)
    //      {
    //          if (j == 0 || i == 0 || j == n - i - 1)
    //          {
    //              cout << "*";
    //          }
    //          else
    //          {
    //              cout << " ";
    //          }
    //      }
    //      cout<<endl;
    //  }
    //  6
    //  ******
    //  *   *
    //  *  *
    //  * *
    //  **
    //  *

    // Hollo full Pyramid
    //  for(int i=0;i<n;i++){
    //      for(int j=0;j<n;j++){
    //          if(j<n-i-1){
    //              cout<<" ";
    //          }
    //          else if(j==n-i-1 || i==n-1 || j==n-1){
    //              cout<<"* ";
    //          }
    //          else{
    //              cout<<"  ";
    //          }
    //      }
    //      cout<<endl;
    //  }
    //  5
    //      *
    //     * *
    //    *   *
    //   *     *
    //  * * * * *

    // Numeric Hollow Half Pyramid
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         if (j == 0 || i == n - 1)
    //         {
    //             cout << j + 1<<" ";
    //         }
    //         else if (j == i)
    //         {
    //             cout << i + 1<<" ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }
    // 5
    // 1
    // 1 2
    // 1   3
    // 1     4
    // 1 2 3 4 5

    // Numeric Hollow Inverted Half Pyramid
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //         if (i == 0 || j == n - 1)
    //         {
    //             cout << j + 1 << " ";
    //         }
    //         else if (j == i)
    //         {
    //             cout << i + 1 << " ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }
    // 5
    // 1 2 3 4 5
    // 2     5
    // 3   5
    // 4 5
    // 5

    // Numeric Palindrome Equilateral Pyramid
    // for (int i = 0; i < n; i++)
    // {
    //     int temp = 1;
    //     int temp1=0;
    //     for (int j = 0; j < 2 * n - 1; j++)
    //     {
    //         if (j < n - i - 1)
    //         {
    //             cout << "  ";
    //         }
    //         else if (j < n)
    //         {
    //             cout << temp++ << " ";
    //             temp1=temp-1;
    //         }
    //         else if (j < n + i)
    //         {
    //             cout << --temp1 << " ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }
    // 9
    //                 1
    //               1 2 1
    //             1 2 3 2 1
    //           1 2 3 4 3 2 1
    //         1 2 3 4 5 4 3 2 1
    //       1 2 3 4 5 6 5 4 3 2 1
    //     1 2 3 4 5 6 7 6 5 4 3 2 1
    //   1 2 3 4 5 6 7 8 7 6 5 4 3 2 1
    // 1 2 3 4 5 6 7 8 9 8 7 6 5 4 3 2 1

    // Solid Half Diamond
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // 5
    // *
    // **
    // ***
    // ****
    // *****
    // ****
    // ***
    // **
    // *

    // Floyd' Triangle Pattern
    //  int num=1;
    //  for(int i=0;i<n;i++){
    //      for(int j=0;j<i+1;j++){
    //          cout<<num++<<" ";
    //      }
    //      cout<<endl;
    //  }
    //  7
    //  1
    //  2 3
    //  4 5 6
    //  7 8 9 10
    //  11 12 13 14 15
    //  16 17 18 19 20 21
    //  22 23 24 25 26 27 28

    // Butterfly Pattern
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < 2 * n; j++)
    //     {
    //         if (j < i + 1)
    //         {
    //             cout << "* ";
    //         }
    //         else if (j >= 2 * n - i - 1)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < 2 * n; j++)
    //     {
    //         if (j < n - i)
    //         {
    //             cout << "* ";
    //         }
    //         else if (j >= n + i)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }
    // 5
    // *                 *
    // * *             * *
    // * * *         * * *
    // * * * *     * * * *
    // * * * * * * * * * *
    // * * * * * * * * * *
    // * * * *     * * * *
    // * * *         * * *
    // * *             * *
    // *                 *

    // Fancy Pattern #1
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i + 3; j++)
    //     {
    //         cout << "*";
    //     }
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout << i + 1 << "*";
    //     }
    //     for (int j = 0; j < n - i + 2; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // 9
    // ************1************
    // ***********2*2***********
    // **********3*3*3**********
    // *********4*4*4*4*********
    // ********5*5*5*5*5********
    // *******6*6*6*6*6*6*******
    // ******7*7*7*7*7*7*7******
    // *****8*8*8*8*8*8*8*8*****
    // ****9*9*9*9*9*9*9*9*9****

    // Fancy Pattern #3
    // for (int i = 0; i < n; i++)
    // {
    //     if (i == 0)
    //     {
    //         cout << "*" << endl;
    //     }
    //     cout << "* ";
    //     int j = 0;
    //     for (; j < i + 1; j++)
    //     {
    //         cout << j + 1 << " ";
    //     }
    //     for (; j > 1; j--)
    //     {
    //         cout << j - 1 << " ";
    //     }
    //     cout << "*" << endl;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << "* ";
    //     int j = 0;
    //     for (; j < n - i -1; j++)
    //     {
    //         cout << j + 1 << " ";
    //     }
    //     for (; j > 1; j--)
    //     {
    //         cout << j - 1 << " ";
    //     }
    //     if(i!=n-1)
    //         cout << "*" << endl;
    // }
    // 3
    // *
    // * 1 *
    // * 1 2 1 *
    // * 1 2 3 2 1 *
    // * 1 2 1 *
    // * 1 *
    // *

    // Fancy Pattern #2
    // int num = 1;
    // int start = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     start = num;
    //     for (int j = 0; j < 2 * i + 1; j++)
    //     {
    //         if (j % 2 == 0)
    //         {
    //             cout << num++;
    //         }
    //         else
    //         {
    //             cout << "*";
    //         }
    //     }
    //     cout << endl;
    // }
    // int temp;
    // for (int i = 0; i < n; i++)
    // {
    //     temp = start;
    //     for (int j = 0; j < 2 * n - 2 * i - 1; j++)
    //     {
    //         if (j % 2 == 0)
    //         {
    //             cout << temp++;
    //         }
    //         else
    //         {
    //             cout << "*";
    //         }
    //     }
    //     start = start - (n - i - 1);
    //     cout << endl;
    // }
    // 4
    // 1
    // 2*3
    // 4*5*6
    // 7*8*9*10
    // 7*8*9*10
    // 4*5*6
    // 2*3
    // 1

    // Pascal's Traingle Pattern
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        int number = 1;
        for (int j = 0; j <=i; j++)
        {
            cout << number << " ";
            number = number * (i - j) / (j + 1);
        }
        cout << endl;
    }
    // 5
    //      1
    //     1 1
    //    1 2 1
    //   1 3 3 1
    //  1 4 6 4 1
}