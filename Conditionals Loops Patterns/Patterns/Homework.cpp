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

    //Floyd' Triangle Pattern
    // int num=1;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout<<num++<<" ";
    //     }
    //     cout<<endl;
    // }
    // 7
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // 11 12 13 14 15
    // 16 17 18 19 20 21
    // 22 23 24 25 26 27 28
}