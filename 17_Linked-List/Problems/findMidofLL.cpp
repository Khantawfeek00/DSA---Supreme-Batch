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

// Submitted on GFG
// Tortoise Algorithm
int getMiddle(node *head)
{
    if (head == NULL)
    {
        cout << "LL is empty " << endl;
        return;
    }
    // Your code here
    node *slow = head;
    node *fast = head;

    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    if (fast->next != NULL)
    {
        return slow->next->data;
    }
    return slow->data;
}
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

int main()
{

    node *first = new node(1);
    node *second = new node(2);
    node *third = new node(3);
    node *fourth = new node(4);
    node *fifth = new node(5);
    // node *sixth = new node(6);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    // fifth->next = sixth;

    node *head = first;

    cout << "Middle Element - " << getMiddle(head);
}