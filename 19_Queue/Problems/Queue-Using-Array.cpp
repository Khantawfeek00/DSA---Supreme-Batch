#include <bits/stdc++.h>
#include <vector>
#include <queue>
using namespace std;

class MyQueue
{
private:
    int *arr;
    int front;
    int rear;
    int size;

public:
    MyQueue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void push(int data)
    {
        if (rear == size)
        {
            cout << "Queue is full" << endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    void pop()
    {
        if (front == rear)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            arr[front] = -1;
            front++;
            if (front == rear)
            {
                front = rear = 0;
            }
        }
    }

    int getfront()
    {
        if (front == rear)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            return arr[front];
        }
    }

    bool isEmpty()
    {
        return front == rear;
    }

    int getSize()
    {
        return rear - front;
    }
};
int main()
{

    MyQueue que(10);

    que.push(10);
    que.push(20);
    que.push(30);
    que.push(40);
    que.push(50);
    que.push(60);
    que.push(70);
    que.push(80);
    que.push(90);

    cout << "Size of queue - " << que.getSize() << endl;

    que.pop();

    cout << "Size of queue - " << que.getSize() << endl;

    cout << "Front - " << que.getfront() << endl;

    if (que.isEmpty())
    {
        cout << "Empty " << endl;
    }
    else
    {
        cout << "Not Empty" << endl;
    }
}