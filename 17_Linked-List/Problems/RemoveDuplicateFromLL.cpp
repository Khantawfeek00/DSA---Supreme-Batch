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
        // cout << "Value is Deleted" << endl;
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
node *removeDuplicates(node *head)
{

    if (head == NULL)
    {
        cout << "LL is empty" << endl;
        return head;
    }
    if (head->next == NULL)
    {
        cout << "LL has only one element" << endl;
        return head;
    }
    node *curr = head;
    node *forward = curr->next;
    while (curr != NULL && curr->next != NULL)
    {
        node *forward = curr->next;
        while (forward != NULL && curr->data == forward->data)
        {
            node *temp = forward;
            forward = forward->next;
            temp->next = NULL;
            delete temp;
        }
        curr->next = forward;
        curr = curr->next;
    }
    return head;
}

int main()
{

    node *first = new node(1);
    node *second = new node(2);
    node *third = new node(2);
    node *fourth = new node(2);
    node *fifth = new node(3);
    node *sixth = new node(3);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    node *head = first;

    cout << "Befor Removing Duplicates - " << endl;
    print(head);

    head = removeDuplicates(head);

    cout << "After Removing Duplicates - " << endl;
    print(head);
}