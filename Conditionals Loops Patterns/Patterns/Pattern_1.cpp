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
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         cout << "  ";
    //     }
    //     int j = i;
    //     for (; j < 2 * i; j++)
    //     {
    //         cout << j + 1 << " ";
    //     }
    //     for (; j >= i; j--)
    //     {
    //         cout << j + 1 << " ";
    //     }
    //     cout << endl;
    // }
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
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < 2 * i + 1; j++)
    //     {
    //         if (j == 0)
    //             cout << j + 1;
    //         else if (j == 2 * i)
    //             cout << i + 1;
    //         else if (i == n - 1 && j % 2 == 0)
    //             cout << j / 2 + 1;
    //         else
    //             cout << " ";
    //     }
    //     cout << endl;
    // }

    // Hollow Full Pyramid
    // for (int i = 0; i < n; i++)
    // {
    //     int k = 0;
    //     for (int j = 0; j < 2 * n - 1; j++)
    //     {
    //         if (j < n - i - 1)
    //         {
    //             cout << " ";
    //         }
    //         else if (k < 2 * i + 1)
    //         {
    //             if (k == 0 || k == 2 * i || i == n - 1)
    //                 cout << "*";
    //             else
    //                 cout << " ";
    //             k++;
    //         }
    //         else
    //             cout << " ";
    //     }
    //     cout << endl;
    // }
    // 5
    //     *
    //    * *
    //   *   *
    //  *     *
    // *********

    // Full Pyramid
    //  for (int i = 0; i < n; i++)
    //  {
    //      for (int j = 0; j < n; j++)
    //      {
    //          if (j < n - i - 1)
    //          {
    //              cout << " ";
    //          }
    //          else
    //          {
    //              cout << "* ";
    //          }
    //      }
    //      cout << endl;
    //  }
    //  5
    //      *
    //     * *
    //    * * *
    //   * * * *
    //  * * * * *

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (j<i)
    //         {
    //             cout << " ";
    //         }
    //         else
    //         {
    //             cout << "* ";
    //         }
    //     }
    //     cout << endl;
    // }
    // 5
    // * * * * *
    //  * * * *
    //   * * *
    //    * *
    //     *

    // Diamond Pattern
    //  for (int i = 0; i < n; i++)
    //  {
    //      for (int j = 0; j < n; j++)
    //      {
    //          if (j < n - i - 1)
    //          {
    //              cout << " ";
    //          }
    //          else
    //          {
    //              cout << "* ";
    //          }
    //      }
    //      cout << endl;
    //  }
    //  for (int i = 0; i < n; i++)
    //  {
    //      for (int j = 0; j < n; j++)
    //      {
    //          if (j < i)
    //          {
    //              cout << " ";
    //          }
    //          else
    //          {
    //              cout << "* ";
    //          }
    //      }
    //      cout << endl;
    //  }
    // 5
    //     *
    //    * *
    //   * * *
    //  * * * *
    // * * * * *
    // * * * * *
    //  * * * *
    //   * * *
    //    * *
    //     *

    // Hollow Diamond Pattern
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (j < n - i - 1)
    //         {
    //             cout << " ";
    //         }
    //         else
    //         {
    //             if (j == n-i-1 || j==n-1)
    //                 cout << "* ";
    //             else
    //                 cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (j < i)
    //         {
    //             cout << " ";
    //         }
    //         else
    //         {
    //             if (j == i || j==n-1)
    //                 cout << "* ";
    //             else
    //                 cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }
    //     5
    //     *
    //    * *
    //   *   *
    //  *     *
    // *       *
    // *       *
    //  *     *
    //   *   *
    //    * *
    //     *

    // Flipped Solid Diamond
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < 2*n; j++)
    //     {
    //         if(j<n-i || j>=n+i){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout << endl;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < 2*n; j++)
    //     {
    //         if(j<i+1 || j>=2*n-i-1){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout << endl;
    // }
    // 5
    // **********
    // ****  ****
    // ***    ***
    // **      **
    // *        *
    // *        *
    // **      **
    // ***    ***
    // ****  ****
    // **********

    // Fancy Pattern #1
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<2*i+1;j++){
    //         if(j%2==0)
    //             cout<<i+1;
    //         else
    //             cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<2*n-2*i-1;j++){
    //         if(j%2==0)
    //             cout<<n-i;
    //         else
    //             cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // 4
    // 1
    // 2*2
    // 3*3*3
    // 4*4*4*4
    // 4*4*4*4
    // 3*3*3
    // 2*2
    // 1

    // Alphabet Palindrome Pyramid
    // for(int i=0;i<n;i++){
    //     char a='A';
    //     char a1='A';
    //     for(int j=0;j<2*i+1;j++){
    //         if(j<=i){
    //             cout<<a<<" ";
    //             a++;
    //             a1=a-1;
    //         }
    //         else if(j>i){
    //             a1--;
    //             cout<<a1<<" ";
    //         }+
    //     }
    //     cout<<endl;
    // }
    // 5
    // A
    // A B A
    // A B C B A
    // A B C D C B A
    // A B C D E D C B A

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
}
