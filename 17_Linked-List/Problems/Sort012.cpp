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

node *segregate(node *head)
{

    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *zerohead = new node(-1);
    node *zerotail = zerohead;
    node *onehead = new node(-1);
    node *onetail = onehead;
    node *twohead = new node(-1);
    node *twotail = twohead;

    node *curr = head;
    while (curr != NULL)
    {
        node *temp = curr;
        curr = curr->next;
        temp->next = NULL;
        if (temp->data == 0)
        {
            zerotail->next = temp;
            zerotail = temp;
        }
        else if (temp->data == 1)
        {
            onetail->next = temp;
            onetail = temp;
        }
        else if (temp->data == 2)
        {
            twotail->next = temp;
            twotail = temp;
        }
    }
    // Joining All nodes of zero ,one,two
    // deleting temp-head of zero,one,two
    node *temp1 = zerohead;
    node *temp2 = onehead;
    node *temp3 = twohead;
    zerohead = zerohead->next;
    onehead = onehead->next;
    twohead = twohead->next;
    temp1->next = NULL;
    temp2->next = NULL;
    temp3->next = NULL;
    delete temp1;
    delete temp2;
    delete temp3;
    if (zerohead != NULL)
    {
        if (onehead != NULL)
        {
            zerotail->next = onehead;
            onetail->next = twohead;
        }
        else
            zerotail->next = twohead;
        return zerohead;
    }
    else if (onehead != NULL)
    {
        onetail->next = twohead;
        return onehead;
    }
    else if (twohead != NULL)
    {
        return twohead;
    }
    return NULL;
}
int main()
{

    node *first = new node(1);
    node *second = new node(2);
    node *third = new node(2);
    node *fourth = new node(1);
    node *fifth = new node(2);
    node *sixth = new node(0);
    node *seventh = new node(2);
    node *eighth = new node(2);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eighth;

    node *head = first;

    cout << "Befor Sorting Duplicates - " << endl;
    print(head);

    head = segregate(head);

    cout << "After Sorting Duplicates - " << endl;
    print(head);
}