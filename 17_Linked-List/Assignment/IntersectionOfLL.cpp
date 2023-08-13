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
node *getIntersectionNode(node *&headA, node *&headB)
{
    node *a = headA;
    node *b = headB;
    while (a->next != NULL && b->next != NULL)
    {
        if (a == b)
        {
            return a;
        }
        a = a->next;
        b = b->next;
    }
    // b LL is bigger  find diff
    if (a->next == NULL)
    {
        int diff = 0;
        while (b->next != NULL)
        {
            diff++;
            b = b->next;
        }
        a = headA;
        b = headB;
        while (diff--)
        {
            b = b->next;
        }
    }
    else
    { // a LL is bigger find diff
        int diff = 0;
        while (a->next != NULL)
        {
            diff++;
            a = a->next;
        }
        a = headA;
        b = headB;
        while (diff--)
        {
            a = a->next;
        }
    }
    // after headA and headB of same lenght
    while (a != NULL && b != NULL)
    {
        if (a == b)
        {
            return a;
        }
        a = a->next;
        b = b->next;
    }
    return NULL;
}
int main()
{

    node *first1 = new node(1);
    node *second1 = new node(2);
    node *third1 = new node(5);
    node *fourth1 = new node(8);
    node *fifth1 = new node(5);
    node *sixth1 = new node(8);

    first1->next = second1;
    second1->next = third1;
    third1->next = fourth1;
    fourth1->next = fifth1;
    fifth1->next = sixth1;

    node *first2 = new node(1);
    node *second2 = new node(4);
    node *third2 = new node(7);

    first2->next = second2;
    second2->next = third2;
    third2->next = second1;

    cout << "List 1 - " << endl;
    print(first1);

    cout << "List 2 - " << endl;
    print(first2);

    cout << "Intersection - " << getIntersectionNode(first1, first2)->data << endl;
}
