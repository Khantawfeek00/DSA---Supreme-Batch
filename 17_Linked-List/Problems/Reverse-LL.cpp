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
/*
    node* reverseListHelper(node*& curr,node*& prev){
        //Base case
        if(curr==NULL){
            return prev;
        }
        node* forward=curr->next;
        curr->next=prev;

        //recursive call
        return reverseListHelper(forward,curr);

    }
    */
node *reverseList(node *head)
{

    /*
    if(head==NULL ||head->next==NULL){
        return head;
    }
    node *prev= NULL;
    node *curr= head;
    return reverseListHelper(curr,prev);
    */

    // without recursion
    node *curr = head;
    node *prev = NULL;
    while (curr != NULL)
    {
        node *forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
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

    node *head = first;
    print(head);

    head = reverseList(head);
    print(head);
}