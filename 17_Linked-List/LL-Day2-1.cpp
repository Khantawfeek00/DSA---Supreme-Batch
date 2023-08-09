#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;
    node()
    {
        this->data = 0;
        this->next = NULL;
        this->prev = NULL;
    }
    node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
    ~node()
    {
        cout << "Node with the value " << this->data << " is deleted " << endl;
        delete this->next;
        delete this->prev;
    }
};

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

int getLength(node *&head)
{
    int len = 0;
    node *temp = head;

    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

void insertAtHead(node *&head, node *&tail, int data)
{

    node *newNode = new node(data);
    // if LL is Empty
    if (head == NULL)
    {
        head = tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void insertAtTail(node *&head, node *&tail, int data)
{

    node *newNode = new node(data);
    // if LL is Empty
    if (head == NULL)
    {
        head = tail = newNode;
        return;
    }
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
}
void insertAtPosition(node *&head, node *&tail, int data, int position)
{
    node *newNode = new node(data);

    if (head == NULL)
    {
        head = tail = newNode;
        return;
    }
    if (position == 1)
    {
        insertAtHead(head, tail, data);
        return;
    }
    int len = getLength(head);
    if (position > len)
    {
        insertAtTail(head, tail, data);
        return;
    }
    int i = 1;
    node *temp = head;
    while (i < position - 1)
    {
        temp = temp->next;
        i++;
    }
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next->prev = newNode;
    temp->next = newNode;
}
void deleteHead(node *&head, node *&tail)
{
    if (head == NULL)
    {
        cout << "LL is empty" << endl;
        return;
    }
    if (head->next == NULL)
    {
        node *temp = head;
        head = tail = NULL;
        delete temp;
        return;
    }
    node *temp = head;
    head = head->next;
    head->prev = NULL;
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
    if (head->next == NULL)
    {
        node *temp = head;
        head = tail = NULL;
        delete temp;
        return;
    }
    node *temp = tail;
    tail = temp->prev;
    tail->next = NULL;
    temp->prev = NULL;
    delete temp;
}

void deleteFromPos(node *&head, node *&tail, int position)
{
    if (head == NULL)
    {
        cout << "LL is empty" << endl;
        return;
    }
    if (position == 1)
    {
        deleteHead(head, tail);
        return;
    }
    int len = getLength(head);
    if (position >= len)
    {
        deleteTail(head, tail);
        return;
    }

    int i = 1;
    node *temp = head;
    while (i < position - 1)
    {
        temp = temp->next;
        i++;
    }
    node *del = temp->next;
    temp->next = del->next;
    temp->next->prev = temp;
    del->next = NULL;
    del->prev = NULL;
    delete del;
}

int main()
{
    node *tail = NULL;
    node *head = new node(10);
    node *second = new node(20);
    node *third = new node(30);
    node *fourth = new node(40);

    head->next = second;

    second->next = third;
    second->prev = head;

    third->next = fourth;
    third->prev = second;

    fourth->prev = third;
    tail = fourth;
    print(head);

    // insertAtHead(head, tail, 100);
    // insertAtTail(head, tail, 999);

    // insertAtPosition(head, tail, 99, 1);
    // insertAtPosition(head, tail, 98, 2);
    // insertAtPosition(head, tail, 97, 3);
    // insertAtPosition(head, tail, 96, 4);
    // insertAtPosition(head, tail, 95, 5);
    // insertAtPosition(head, tail, 94, 6);

    // deleteHead(head, tail);
    // deleteHead(head, tail);

    // deleteTail(head, tail);
    // deleteTail(head, tail);

    deleteFromPos(head, tail, 4);
    // deleteFromPos(head, tail, 2);

    print(head);
}