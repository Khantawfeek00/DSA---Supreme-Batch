#include <bits/stdc++.h>
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
/*Map Solution working but no recommended in interview if ask for map then tell otherwise not
node *isCircular(node *&head)
{
    map<node *, bool> mapi;
    node *temp = head;
    while (temp != NULL)
    {
        auto isPresent = mapi.find(temp);
        if (isPresent != mapi.end())
        {
            return temp;
        }
        mapi[temp] = true;
        temp = temp->next;
    }
    cout << "No loop is Present" << endl;
    return NULL;
}
*/

// returning start of loop
void startofLoop(node *&head)
{
    if (head == NULL)
    {
        cout << "LL is empty" << endl;
        return;
    }
    node *slow = head;
    node *fast = head;
    while (slow != NULL && fast != NULL)
    {
        slow = slow->next;
        if (fast->next == NULL)
        {
            cout << "NO LOOP exits" << endl;
            return;
        }
        fast = fast->next->next;
        if (slow == fast)
        {
            slow = head;
            break;
        }
    }
    if (fast == NULL || slow == NULL)
    {
        cout << "No LOOP is exits" << endl;
        return;
    }
    while (slow->next != fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }
    fast->next = NULL;
    cout << "Loop Removed" << endl;
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

    node *first = new node(10);
    node *second = new node(20);
    node *third = new node(30);
    node *fourth = new node(40);
    node *fifth = new node(50);
    node *sixth = new node(60);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = fourth;

    node *head = first;
    /*
    node *cir = isCircular(head);
    if (cir == NULL)
    {
        print(head);
    }
    else
    {
        cout << "Starting of loop is = " << cir->data << endl;
    }*/

    startofLoop(head);
    print(head);
}