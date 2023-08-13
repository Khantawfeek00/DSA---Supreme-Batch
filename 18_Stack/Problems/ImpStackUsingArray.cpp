#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int *arr;
    int size;
    int top;

    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top = -1;
    }

    // functions
    void push(int data)
    {
        if (size - top > 1)
        {
            // space available
            top++;
            arr[top] = data;
        }
        else
        {
            // space is not available
            cout << "Stack overflow" << endl;
        }
    }

    void pop()
    {
        if (this->top == -1)
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            arr[top--] = 0;
        }
    }
    int getTop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            return arr[top];
        }
        return -1;
    }

    // number of valid element in stack
    int getSize()
    {
        return top + 1;
    }

    bool isempty()
    {
        return (top == -1) ? false : true;
    }
};

int main()
{
    Stack s(10);

    s.push(100);
    s.push(200);
    s.push(300);
    s.push(400);
    s.push(500);

    while (s.isempty())
    {
        cout << s.getTop() << " ";
        s.pop();
    }
    cout << endl;
    cout << "Size of stack - " << s.getSize();
}