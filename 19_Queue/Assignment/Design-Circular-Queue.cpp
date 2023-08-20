#include <bits/stdc++.h>
#include <vector>
#include <queue>
using namespace std;
class MyCircularQueue
{
public:
    int *arr;
    int front;
    int rear;
    int size;
    MyCircularQueue(int k)
    {
        size = k;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    bool enQueue(int value)
    {
        if (front == 0 && rear == size - 1 || (rear == front - 1))
        {
            return false;
        }
        else if (front == -1 && rear == -1)
        {
            front = rear = 0;
            arr[rear] = value;
        }
        else if (front != 0 && rear == size - 1)
        {
            rear = 0;
            arr[rear] = value;
        }
        else
        {
            rear++;
            arr[rear] = value;
        }
        return true;
    }

    bool deQueue()
    {
        if (front == -1)
        {
            return false;
        }
        else if (front == rear)
        {
            front = rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            arr[front] = -1;
            front++;
        }
        return true;
    }

    int Front()
    {
        if (front == -1)
        {
            return -1;
        }
        return arr[front];
    }

    int Rear()
    {
        if (front == -1)
        {
            return -1;
        }
        return arr[rear];
    }

    bool isEmpty()
    {
        return front == -1;
    }

    bool isFull()
    {
        if (front == 0 && rear == size - 1 || (rear == front - 1))
        {
            return true;
        }
        return false;
    }
};
int main()
{
    // Create a circular queue with a maximum size of 5
    MyCircularQueue circularQueue(5);

    // Enqueue elements
    circularQueue.enQueue(1);
    circularQueue.enQueue(2);
    circularQueue.enQueue(3);
    circularQueue.enQueue(4);
    circularQueue.enQueue(5);

    // Try to enqueue when the queue is full
    if (circularQueue.enQueue(6))
    {
        std::cout << "Enqueue successful: 6\n";
    }
    else
    {
        std::cout << "Enqueue failed: 6 (Queue is full)\n";
    }

    // Display the front and rear elements
    std::cout << "Front element: " << circularQueue.Front() << std::endl;
    std::cout << "Rear element: " << circularQueue.Rear() << std::endl;

    // Dequeue elements
    circularQueue.deQueue();
    circularQueue.deQueue();

    // Display the front and rear elements after dequeuing
    std::cout << "Front element after dequeue: " << circularQueue.Front() << std::endl;
    std::cout << "Rear element after dequeue: " << circularQueue.Rear() << std::endl;

    // Check if the queue is empty or full
    if (circularQueue.isEmpty())
    {
        std::cout << "Queue is empty\n";
    }
    else
    {
        std::cout << "Queue is not empty\n";
    }

    if (circularQueue.isFull())
    {
        std::cout << "Queue is full\n";
    }
    else
    {
        std::cout << "Queue is not full\n";
    }

    return 0;
}
