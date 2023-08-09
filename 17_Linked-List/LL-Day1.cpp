#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node()
    {
        this->data = 0;
        this->next = NULL;
    }

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~node()
    {
        delete next;
    }
};

// printing linked list
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// inserting node at the tail of linkedlist with head node
void insertAtTail(node *&head, int data)
{
    // step:1 creating a node
    node *temp = head;

    // step:2 reaching to end of LL
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    // step:3
    node *newNode = new node(data);

    // step:4
    temp->next = newNode;
}

// inserting node at the tail of linkedlist with tail node
void insertAtTailwithTailptr(node *&head, node *&tail, int data)
{

    // step:1
    node *newNode = new node(data);

    // for first node
    if (head == NULL)
    {
        head = tail = newNode;
        return;
    }
    // step:4
    tail->next = newNode;

    tail = newNode;
}

// inserting node at the head of linkedlist
void insertAtHead(node *&head, node *&tail, int data)
{
    // step:1
    node *newNode = new node(data);
    if (head == NULL)
    {
        head = tail = newNode;
        return;
    }
    // step:2
    newNode->next = head;
    // step:3
    head = newNode;
}

int findLength(node *&head)
{
    int count = 0;
    node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}
void insertAtPosition(node *&head, node *&tail, int data, int position)
{
    node *newNode = new node(data);

    // insert at first index
    if (position == 0)
    {
        newNode->next = head;
        head = newNode;
        return;
    }

    int len = findLength(head);
    cout << "Length of LL - " << len << endl;
    // insert at last position
    if (position >= len)
    {
        tail->next = newNode;
        tail = newNode;
        return;
    }

    // if LL is empty
    if (head == NULL)
    {
        newNode->next = head;
        head = tail = newNode;
        return;
    }

    int index = 1;
    node *prev = head;
    while (prev != NULL && index < position)
    {
        prev = prev->next;
        index++;
    }

    node *curr = prev->next;
    newNode->next = curr;
    prev->next = newNode;
}

void deleteHead(node *&head)
{
    if (head == NULL)
    {
        cout << "LL is empty" << endl;
        return;
    }
    node *temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
}
void deleteTail(node *&head, node *&tail)
{
    if (head == NULL)
    {
        cout << "LL is empty" << endl;
        return;
    }
    node *prev = head;
    while (prev->next->next != NULL)
    {
        prev = prev->next;
    }
    prev->next = NULL;
    delete tail;
    tail = prev;
    cout << "Tail data is - " << tail->data << endl;
}
void deletePosition(node *&head, node *&tail, int position)
{
    if (head == NULL)
    {
        cout << "LL is empty " << endl;
        return;
    }

    if (position == 1)
    {
        deleteHead(head);
        return;
    }
    int len = findLength(head);
    if (position >= len)
    {
        deleteTail(head, tail);
        return;
    }
    int index = 1;
    node *temp = head;
    cout << "Printing - " << endl;
    while (index < position - 1)
    {
        temp = temp->next;
        index++;
    }
    node *curr = temp->next;
    temp->next = curr->next;
    curr->next = NULL;
    delete curr;
}
void deleteByData(node *&head, int d)
{
    if (head == NULL)
    {
        cout << "LL is empty" << endl;
        return;
    }
    if (head->data == d)
    {
        head = head->next;
        return;
    }
    node *temp = head;
    while (temp->next != NULL && temp->next->data != d)
    {
        temp = temp->next;
    }
    if (temp->next == NULL)
    {
        cout << "Node is not Present" << endl;
        return;
    }
    node *del = temp->next;
    temp->next = del->next;
    del->next = NULL;
    delete del;
}
int main()
{
    // node *first = new node(1);
    // node *second = new node(2);
    // node *third = new node(3);
    // node *fourth = new node(4);
    // node *fifth = new node(5);
    // node *sixth = new node(6);

    // first->next = second;
    // second->next = third;
    // third->next = fourth;
    // fourth->next = fifth;
    // fifth->next = sixth;

    // cout << "Printing linked list - " << endl;
    // print(first);

    // cout << first->data << endl;
    // cout << first->next->data << endl;
    // cout << first->next->next << endl;

    // node *head = new node(10);
    // insertAtTail(head, 20);
    // insertAtTail(head, 30);
    // insertAtTail(head, 40);
    // insertAtTail(head, 50);

    // node *head = NULL;
    // node *tail = NULL;
    // insertAtTailwithTailptr(head, tail, 20);
    // insertAtTailwithTailptr(head, tail, 30);
    // insertAtTailwithTailptr(head, tail, 40);
    // insertAtTailwithTailptr(head, tail, 50);

    node *head = NULL;
    node *tail = NULL;
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 50);

    // insertAtPosition(head, tail, 1, 1);
    // print(head);
    // cout << endl;
    // insertAtPosition(head, tail, 2, 2);
    // print(head);
    // cout << endl;
    // insertAtPosition(head, tail, 3, 3);
    // print(head);
    // cout << endl;
    // insertAtPosition(head, tail, 4, 4);
    // print(head);
    // cout << endl;
    // insertAtPosition(head, tail, 5, 5);
    // print(head);
    // cout << endl;
    // insertAtPosition(head, tail, 6, 6);
    // print(head);
    // cout << endl;
    // insertAtPosition(head, tail, 1000, 20);

    // print(head);

    // deleteHead(head);

    // deleteTail(head, tail);

    // deletePosition(head, tail, 1);
    // deletePosition(head, tail, 2);
    // deletePosition(head, tail, 3);
    // deletePosition(head, tail, 4);
    // deletePosition(head, tail, 5);

    print(head);

    deleteByData(head, 550);

    print(head);
}