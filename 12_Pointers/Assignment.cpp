#include <bits/stdc++.h>
using namespace std;

void changeSign(int *p)
{
    *p = (*p) * -1;
}

void fun(int a[])
{
    cout << a[0] << " ";
}

void square(int *p)
{
    int a = 10;
    p = &a;
    *p = (*p) * (*p);
}

void Q(int z)
{
    z += z;
    cout << z << " ";
}

void P(int *y)
{
    int x = *y + 2;
    Q(x);
    *y = x - 1;
    cout << x << " ";
}

int f(int x, int *py, int **ppz)
{
    int y, z;
    **ppz += 1;
    z = **ppz;
    *py += 2;
    y = *py;
    x += 3;
    return x + y + z;
}

void increment(int **p)
{
    (**p)++;
}

int main()
{
    // 1.
    // float f = 10.5;
    // float p = 2.5;
    // float *ptr = &f;
    // (*ptr)++;
    // *ptr = p;
    // cout << *ptr << " " << f << " " << p;

    // 2.
    // int a = 7;
    // int b = 17;
    // int *c = &b;
    // *c = 7;
    // cout << a << " " << b << endl;

    // 3.
    // error
    //  int *ptr = 0;
    // int *ptr = new int;
    // int a = 10;
    // *ptr = a;
    // cout << *ptr << endl;

    // 4. which of the following gives the memory address
    //   of variable 'b' pointed by pointer 'a' i.e.
    // int b = 10;
    // int *a = &b;
    // cout << a << endl;
    // cout << &b << endl;

    // 5.
    // char ch = 'a';
    // char *ptr = &ch;
    // ch++;
    // cout << *ptr << endl;

    // 6.
    // int a = 7;
    // int *c = &a;
    // c = c + 1;
    // cout << a << " " << *c << endl;

    // 7. assume the memory address of variable 'a' is 400(and an integer takes 4 bytes),what will be the output-
    // int a = 7;
    // int *c = &a;
    // c = c + 3;
    // cout << c << endl;

    // 8. assume Mem add of var 'a' is:200 and a double variable
    // is of size * bytes, what will be the output-
    // double a = 10.54;
    // double *d = &a;
    // d = d + 1;
    // cout << d << endl;

    // 9.Assume integer takes 4 bytes and integer pointer 8 bytes
    // int a[5];
    // int *c;
    // cout << sizeof(a) << " " << sizeof(c) << endl;

    // 10.
    // int a[] = {1, 2, 3, 4};
    // cout << *(a) << " " << *(a + 1);

    // 11.Assume that address of 0th index of array 'a'
    // is:200 what is the output-
    // int a[3] = {1, 2, 3};
    // cout << *(a + 2) << endl;

    // 12.
    // int a[] = {1, 2, 3, 4};
    // int *p = a++;
    // cout << *p << endl;

    // 13.
    // int arr[] = {4, 5, 6, 7};
    // int *p = (arr + 1);
    // cout << *arr + 9;

    // 14. Assume address of 0th index of array 'b' is 200
    // char b[] = "xyz";
    // char *c = &b[0];
    // cout << c << endl;

    // 15.
    // char s[] = "hello";
    // char *p = s;
    // cout << s[0] << " " << p[0];

    // 16.
    // char arr[20];
    // int i;
    // for (int i = 0; i < 10; i++)
    // {
    //     *(arr + i) = 65 + i;
    // }
    // *(arr + i) = 0;
    // cout<< arr;
    // return 0;

    // 17.
    // char *ptr;
    // char Str[] = "abcdefg";
    // ptr = Str;
    // ptr += 5;
    // cout << ptr;
    // return 0;

    // 18.
    // int number[5];
    // int *p;
    // p = number;
    // *p = 10;
    // p = &number[2];
    // *p = 20;
    // p--;
    // *p = 30;
    // p = number + 3;
    // *p = 40;
    // p = number;
    // *(p + 4) = 50;
    // for (int n = 0; n < 5; n++)
    // {
    //     cout << number[n] << ",";
    // }
    // return 0;

    // 19.
    // char st[] = "ABCD";
    // for (int i = 0; st[i] != '\0'; i++)
    // {
    //     cout << st[i] << *(st) + i << *(i + st) << i[st] << endl;
    // }

    // 20.
    // float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
    // float *ptr1 = &arr[0];
    // float *ptr2 = ptr1 + 3;
    // cout << *ptr2 << " ";
    // cout << ptr2 - ptr1;
    // return 0;

    // 21.
    // int a = 10;
    // changeSign(&a);
    // cout << a << endl;

    // 22.
    // int a[] = {1, 2, 3, 4};
    // fun(a + 1);
    // cout << a[0];

    // 23.
    // int a = 10;
    // square(&a);
    // cout << a << endl;

    // 24.
    // int x = 5;
    // P(&x);
    // cout << x;
    // return 0;

    // 25.
    // int a = 10;
    // int *p = &a;
    // int **q = &p;
    // int b = 20;
    // *q = &b;
    // (*p)++;
    // cout << a << " " << b << endl;

    // 26.
    // int c, *b, **a;
    // c = 4;
    // b = &c;
    // a = &b;
    // cout << f(c, b, a);
    // return 0;

    // int ***r, **q, *p, i = 8;
    // p = &i;
    // (*p)++;
    // q = &p;
    // (**q)++;
    // r = &q;
    // cout << *p << " " << **q << " " << ***r;
    // return 0;

    // 28.
    int num = 10;
    int *ptr = &num;
    increment(&ptr);
    cout << num << endl;
}
