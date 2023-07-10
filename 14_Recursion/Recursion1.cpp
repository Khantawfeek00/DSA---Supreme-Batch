#include <iostream>
using namespace std;

int factorial(int n)
{
    cout << "Function call for value : " << n << endl;
    // Base condition
    if (n == 1)
        return 1;

    int chottiProblem = factorial(n - 1);
    int badiProblem = n * chottiProblem;
    return badiProblem;
}

void prinCount(int n)
{
    // Base Condition
    if (n == 0)
        return;

    // processing
    cout << n << " ";

    // recurrence relation
    prinCount(n - 1);
}

void printRCount(int n)
{
    if (n == 0)
    {
        return;
    }
    printRCount(n - 1);
    cout << n << " ";
}

void fibonacciSeries(int n)
{
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    return fibonacciSeries(n - 1) + fibonacciSeries(n - 2);
}

int main()
{
    // int n;
    // cout << "Enter the value of n : ";
    // cin >> n;
    // int ans = factorial(n);
    // cout << "Factorial of the number is: " << ans << endl;
    // return 0;

    // int n;
    // cout << "Enter the value of n : ";
    // cin >> n;
    // printCount(n);
    // return 0;

    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    printRCount(n);
    return 0;
}