#include <iostream>
using namespace std;

int main()
{

    // Add integers from 1 to N and display the sum on console.
    //  int n;
    //  cin >> n;
    //  int8_t sum = 0;
    //  for (int i = 1; i <= n; ++i)
    //  {
    //      sum += i;
    //  }
    //  cout << (int)sum << endl;
    //  return 0;

    // Print full pyramid like an Equilateral Triangle
    int k, n;
    cout << "Enter the number of rows : ";
    cin >> n;
    cout << " ";
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n - i; j++)
            cout << " ";

        for (int j = 1, k = i - 1; j <= 2 * i - 1; j++, k--)
        {
            if (j==1 || j <= k)
                cout << j;
            else
                cout << k;
        }
        cout << endl;

        cout << " ";
    }
    return 0;
}