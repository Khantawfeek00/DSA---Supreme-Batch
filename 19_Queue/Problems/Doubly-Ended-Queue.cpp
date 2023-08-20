#include <bits/stdc++.h>
#include <vector>
#include <queue>
using namespace std;

class Deque
{
private:
    int *arr;
    int front;
    int rear;
    int size;

public:
    Deque(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void pushRear(int data)
    {

        // if queue is full

        // single element

        // circular nature

        // normal queue

        if (front == 0 && rear == size - 1 || (rear == (front - 1)))
        {
            cout << "Queue is full" << endl;
        }
        else if (front == -1 && rear == -1)
        {
            front = 0;
            rear = 0;
            arr[rear] = data;
        }
        else if (rear = size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = data;
        }
        else
        {
            rear++;
            arr[rear] = data;
        }
    }

    void pushFront(int data)
    {
        if (front == 0 && rear == size - 1 || (rear == (front - 1)))
        {
            cout << "Queue is full" << endl;
        }
        else if (front == -1 && rear == -1)
        {
            front = 0;
            rear = 0;
            arr[rear] = data;
        }
        else if (front == 0 && rear != size - 1)
        {
            front = size - 1;
            arr[front] = data;
        }
        else
        {
            front--;
            arr[front] = data;
        }
    }

    void popFront()
    {

        // empty

        // single element

        // circular nature

        // normal flow

        if (front == -1)
        {
            cout << "Queue is empty " << endl;
        }
        else if (front == rear)
        {
            arr[rear] = -1;
            front = rear = -1;
        }
        else if (front == size - 1)
        {
            arr[front] = -1;
            front = 0;
        }
        else
        {
            arr[front] = -1;
            front++;
        }
    }
    void popRear()
    {

        // empty

        // single element

        // circular nature

        // normal flow

        if (front == -1)
        {
            cout << "Queue is empty " << endl;
        }
        else if (front == rear)
        {
            arr[rear] = -1;
            front = rear = -1;
        }
        else if (rear == 0)
        {
            arr[rear] = -1;
            rear = size - 1;
        }
        else
        {
            arr[rear] = -1;
            rear--;
        }
    }
    // H.W.
    int getFront()
    {
        if (front == -1)
        {
            return -1;
        }
        return arr[front];
    }
    int getRear()
    {
        if (front == -1)
        {
            return -1;
        }
        return arr[rear];
    }
    int getSize()
    {
        if (front > rear)
        {
            return rear + 1 + (size - front);
        }
        else
        {
            return rear - front + 1;
        }
    }
    int isEmpty()
    {
        return front == -1;
    }
};

int main()
{
    int size;
    cout << "Enter the size of the deque: ";
    cin >> size;

    Deque dq(size);

    int choice;
    int data;

    while (true)
    {
        cout << "\nDeque Operations:" << endl;
        cout << "1. Push to Rear" << endl;
        cout << "2. Push to Front" << endl;
        cout << "3. Pop from Front" << endl;
        cout << "4. Pop from Rear" << endl;
        cout << "5. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter data to push to rear: ";
            cin >> data;
            dq.pushRear(data);
            break;
        case 2:
            cout << "Enter data to push to front: ";
            cin >> data;
            dq.pushFront(data);
            break;
        case 3:
            dq.popFront();
            break;
        case 4:
            dq.popRear();
            break;
        case 5:
            cout << "Exiting program." << endl;
            exit(0);
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
