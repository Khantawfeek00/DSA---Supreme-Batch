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

bool isCircular(node *&head)
{
    // map<node *, bool> mapi;
    // node *temp = head;
    // while (temp != NULL)
    // {
    //     auto isPresent = mapi.find(temp);
    //     if (isPresent != mapi.end())
    //     {
    //         return true;
    //     }
    //     mapi[temp] = true;
    //     temp = temp->next;
    // }
    // return false;

    // using Tortoise Algorithm
    node *slow = head;
    node *fast = head->next;
    while (slow != NULL && fast != NULL)
    {
        if (slow == fast)
        {
            return true;
        }
        slow = slow->next;
        if (fast->next == NULL)
        {
            return false;
        }
        fast = fast->next->next;
    }
    return false;
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
    node *sixth = new node(6);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = first;

    node *head = first;
    cout << isCircular(head);
}