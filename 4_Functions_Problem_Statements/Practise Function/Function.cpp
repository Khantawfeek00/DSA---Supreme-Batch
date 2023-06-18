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
// OR
int findMaxOf(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)
            return a;
        else
            return c;
    }
    else if (b > c)
        return b;
    else
        return c;
}

// counting from 1 to n
void count(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
}
// OR
void count1ToN(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " ";
    }
    return;
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
    case 9:
        return 'A';
    case 8:
        return 'B';
    case 7:
        return 'C';
    case 6:
        return 'D';
    case 5:
        return 'E';
    default:
        return 'E';
    }
}
// OR
char getGrade(int m)
{

    // if (m >= 90)
    //     return 'A';
    // else if (m >= 80)
    //     return 'B';
    // else if (m >= 70)
    //     return 'C';
    // else if (m >= 60)
    //     return 'D';
    // else
    //     return 'E';

    switch (m / 10)
    {
    case 10:
    case 9:
        return 'A';
    case 8:
        return 'B';
    case 7:
        return 'C';
    case 6:
        return 'D';
    default:
        return 'E';
    }
}

// Sum of Number upto N
int sumOfN(int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + i;
    }
    return sum;
}
// OR
int sumN(int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += (i + 1);
    }
    return sum;
}

//  Sum of Even Number upto N
int sumOfEvenN(int n)
{
    int sum = 0;
    for (int i = 2; i <= n; i += 2)
    {
        sum = sum + i;
    }
    return sum;
}
// OR
int sumOfEvenUptoN(int n)
{
    int sum = 0;
    for (int i = 2; i <= n; i += 2)
    {
        sum += i;
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

    // Revise;
    // int a, b, c;
    // cin >> a >> b >> c;
    // cout << "Maximum number is : " << findMaxOf(a, b, c);

    // int n;
    // cin >> n;
    // count1ToN(n);

    // int marks;
    // cin >> marks;
    // cout << "Student Grade is : " << getGrade(marks);

    int n;
    cin >> n;
    // cout << "Sum of N numbers is : " << sumN(n) << endl;
    cout << "Sum of Even numbers upto N is : " << sumOfEvenUptoN(n);
}