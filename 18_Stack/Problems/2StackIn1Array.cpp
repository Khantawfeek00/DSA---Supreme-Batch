#include <bits/stdc++.h>
using namespace std;

class Stack
{
private:
    int *arr;
    int size;
    int top1;
    int top2;

public:
    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;
    }

    // functions
    void push1(int data)
    {
        if (top2 - top1 > 1)
        {
            // space available
            top1++;
            arr[top1] = data;
        }
        else
        {
            // space is not available
            cout << "Stack overflow" << endl;
        }
    }
    void push2(int data)
    {
        if (top2 - top1 > 1)
        {
            // space available
            top2--;
            arr[top2] = data;
        }
        else
        {
            // space is not available
            cout << "Stack overflow" << endl;
        }
    }

    void pop1()
    {
        if (top1 == -1)
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            arr[top1--] = 0;
        }
    }
    void pop2()
    {
        if (top2 == size)
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            arr[top2++] = 0;
        }
    }
    int getTop1()
    {
        if (top1 == -1)
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            return arr[top1];
        }
        return -1;
    }
    int getTop2()
    {
        if (top2 == size)
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            return arr[top2];
        }
        return -1;
    }

    // number of valid element in stack
    int getSize1()
    {
        return top1 + 1;
    }
    int getSize2()
    {
        return top2 + 1;
    }

    bool isempty1()
    {
        return (top1 == -1) ? false : true;
    }
    bool isempty2()
    {
        return (top2 == size) ? false : true;
    }
};

int main()
{
    Stack s(10);

    s.push1(100);
    s.push1(200);
    s.push1(300);
    s.push2(400);
    s.push2(500);
    s.push1(100);
    s.push1(200);
    s.push1(300);
    s.push2(400);
    s.push2(500);
    s.push1(300);
    s.push2(400);
    s.push2(500);
    s.push1(100);
    s.push1(200);

    cout << "Stack 1 - " << endl;
    while (s.isempty1())
    {
        cout << s.getTop1() << " ";
        s.pop1();
    }
    cout << endl
         << "Stack 2 - " << endl;
    while (s.isempty2())
    {
        cout << s.getTop2() << " ";
        s.pop2();
    }
    cout << endl;
}