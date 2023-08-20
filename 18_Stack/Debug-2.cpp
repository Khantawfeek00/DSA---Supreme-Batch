#include <bits/stdc++.h>
#include <stack>
#include <vector>
using namespace std;
/*
// Define a Node class
template <typename T>
class Node
{
public:
    T data;
    Node<T> *next;
    Node(T data)
    {
        this->data = data;
        next = NULL;
    }
};

// Define the Stack class
template <typename T>
class Stack
{
    Node<T> *head;
    int size;

public:
    Stack()
    {
        head = NULL;
        size = 0;
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return head == NULL;
    }

    void push(T element)
    {
        Node<T> *temp = new Node<T>(element);
        temp->next = head;
        head = temp;
        size++;
    }

    T pop()
    {
        if (isEmpty())
        {
            throw runtime_error("Stack is empty");
        }
        T data = head->data;
        head = head->next;
        size--;
        return data;
    }

    T top()
    {
        if (isEmpty())
        {
            throw runtime_error("Stack is empty");
        }
        return head->data;
    }
};

int main()
{
    // 4. Debug the code. Implement Stack using Linked List.
    // Create an instance of the Stack class with integers
    Stack<int> myStack;

    // Push elements onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Check the size of the stack
    cout << "Size of stack: " << myStack.getSize() << endl;

    // Check if the stack is empty
    if (myStack.isEmpty())
    {
        cout << "Stack is empty." << endl;
    }
    else
    {
        cout << "Stack is not empty." << endl;
    }

    // Access and print the top element
    cout << "Top element: " << myStack.top() << endl;

    // Pop elements from the stack
    cout << "Popping elements: ";
    while (!myStack.isEmpty())
    {
        cout << myStack.pop() << " ";
    }
    cout << endl;

    // Check the size of the stack again
    cout << "Size of stack: " << myStack.getSize() << endl;

    return 0;

}
*/

// 5. Debug the code.
void deleteMiddle(stack<int> &s, int k)
{
    stack<int> aux;
    int count = 0;

    while (!s.empty())
    {
        int num = s.top();
        s.pop();
        aux.push(num);
        count++;
        if (count == k - 1)
        {
            s.pop();
            break;
        }
    }

    while (!aux.empty())
    {
        int num = aux.top();
        aux.pop();
        s.push(num);
    }
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);

    // delete middle element
    int k = (s.size() + 1) / 2;
    deleteMiddle(s, k);

    // print remaining elements
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}