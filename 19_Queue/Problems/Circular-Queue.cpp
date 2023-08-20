#include <bits/stdc++.h>
#include <vector>
#include <queue>
using namespace std;

class CircularQueue
{
private:
    int *arr;
    int front;
    int rear;
    int size;

public:
    CircularQueue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void push(int data)
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

    void pop()
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
            front = 0;
        }
        else
        {
            arr[front] = -1;
            front++;
        }
    }
};

int main()
{
    int size;
    std::cout << "Enter the size of the circular queue: ";
    std::cin >> size;

    CircularQueue cq(size);

    int choice;
    while (true)
    {
        std::cout << "\nCircular Queue Menu:" << std::endl;
        std::cout << "1. Push" << std::endl;
        std::cout << "2. Pop" << std::endl;
        std::cout << "3. Quit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int data;
            std::cout << "Enter the data to push: ";
            std::cin >> data;
            cq.push(data);
            break;
        }
        case 2:
            cq.pop();
            break;
        case 3:
            std::cout << "Exiting the program." << std::endl;
            return 0;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
            break;
        }
    }

    return 0;
}
