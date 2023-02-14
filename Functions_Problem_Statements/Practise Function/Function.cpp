#include <iostream>
using namespace std;

// Order 1
//  int add(int a, int b)//declaration and definition
//  {
//      return a + b;
//  }
//  int main()
//  {
//      int a, b;
//      cout<<"Enter the value of a and b : ";
//      cin >> a >> b;
//      cout << "Sum = " << add(a, b);
//  }

// order 2
//  int add(int a, int b);//declaration
//  int main()
//  {
//      int a, b;
//      cout<<"Enter the value of a and b : ";
//      cin >> a >> b;
//      cout << "Sum = " << add(a, b);
//  }
//  int add(int a, int b)//definition
//  {
//      return a + b;
//  }

// finding max of 3
int findMax(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else if (b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

// counting from 1 to n
void count(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
}

// Grading
char Grading(int marks)
{
    if (marks >= 90)
        return 'A';
    else if (marks >= 80)
        return 'B';
    else if (marks >= 70)
        return 'C';
    else if (marks >= 60)
        return 'D';
    else
        return 'E';

    // Using Switch case;
    switch (marks / 10)
    {
    case 10:
        return 'A';
        break;
    case 9:
        return 'A';
        break;
    case 8:
        return 'B';
        break;
    case 7:
        return 'C';
        break;
    case 6:
        return 'D';
        break;
    case 5:
        return 'E';
        break;
    default:
        return 'E';
        break;
    }
}

// Sum of Even Number upto N
int sumOfN(int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + i;
    }
    return sum;
}

int sumOfEvenN(int n)
{
    int sum = 0;
    for (int i = 2; i <= n; i += 2)
    {
        sum = sum + i;
    }
    return sum;
}

int main()
{

    // max of 3;
    // int a,b,c;
    // cout<<"Enter the value of a :";
    // cin>>a;
    // cout<<"Enter the value of b :";
    // cin>>b;
    // cout<<"Enter the value of c :";
    // cin>>c;
    // int max=findMax(a,b,c);
    // cout<<max;
    // return 0;

    // int n;
    // cout<<"Enter the value of n: ";
    // cin>>n;
    // count(n);
    // return 0;

    // int n;
    // cout << "Enter the Marks: ";
    // cin >> n;
    // char grade = Grading(n);
    // cout << grade;
    // return 0;

    // int n;
    // cout << "Enter the value of n: ";
    // cin >> n;
    // int sum = sumOfN(n);
    // cout << "Sum = " << sum;
    // return 0;

    // int n;
    // cout << "Enter the value of n: ";
    // cin >> n;
    // int sum = sumOfEvenN(n);
    // cout << "Sum = " << sum;
    // return 0;
}