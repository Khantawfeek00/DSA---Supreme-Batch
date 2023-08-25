#include <bits/stdc++.h>
#include <vector>
#include <queue>
#include <deque>
using namespace std;
template <typename T>
class Node
{
public:
    T data;
    Node *next;

    Node(T val)
    {
        data = val;
        next = nullptr;
    }
};
template <typename T>
class Queue
{
    int capacity;
    int size;
    Node<T> *head;
    Node<T> *tail;

public:
    Queue()
    {
        size = 0;
        head = NULL;
        tail = NULL;
    }

    void enqueue(T data)
    {
        Node<T> *temp = new Node<T>(data);
        if (isEmpty())
        {
            head = temp;
            tail = head;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        if (size == 0)
        {
            return true;
        }
        return false;
    }

    T dequeue()
    {
        if (isEmpty())
        {
            return 0;
        }
        T data = head->data;
        head = head->next;
        size--;
        return data;
    }

    T front()
    {
        if (isEmpty())
        {
            return 0;
        }
        return head->data;
    }
};
int main()
{
    Queue<int> myQueue;

    myQueue.enqueue(1);
    myQueue.enqueue(2);
    myQueue.enqueue(3);

    cout << "Queue size: " << myQueue.getSize() << endl;
    cout << "Front element: " << myQueue.front() << endl;

    try
    {
        cout << "Dequeue: " << myQueue.dequeue() << endl;
    }
    catch (const runtime_error &e)
    {
        cout << "Error: " << e.what() << endl;
    }

    cout << "Queue size after dequeue: " << myQueue.getSize() << endl;

    return 0;
}