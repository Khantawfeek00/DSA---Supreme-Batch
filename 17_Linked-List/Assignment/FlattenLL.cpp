#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    struct Node *next;
    struct Node *bottom;

    Node(int x)
    {
        data = x;
        next = NULL;
        bottom = NULL;
    }
};
// printing linked list
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->bottom;
    }
    cout << endl;
}

// Merging two Node at a time
Node *merge(Node *list1, Node *list2)
{
    Node *anshead = new Node(-1);
    Node *anstail = anshead;
    while (list1 != NULL && list2 != NULL)
    {
        if (list1->data <= list2->data)
        {
            Node *temp = list1;
            list1 = list1->bottom;
            anstail->bottom = temp;
            temp->bottom = NULL;
            anstail = temp;
        }
        else
        {
            Node *temp = list2;
            list2 = list2->bottom;
            anstail->bottom = temp;
            temp->bottom = NULL;
            anstail = temp;
        }
    }
    if (list1 != NULL)
    {
        anstail->bottom = list1;
        while (anstail->bottom != NULL)
        {
            anstail = anstail->bottom;
        }
    }
    if (list2 != NULL)
    {
        anstail->bottom = list2;
    }
    return anshead->bottom;
}

/*  While loop run till only one list is remaining and merging two list at a time*/
Node *flatten(Node *root)
{
    if (root == NULL || root->next == NULL)
    {
        return root;
    }
    while (root->next != NULL)
    {
        Node *first = root;
        Node *second = root->next;
        Node *forward = second->next;
        first->next = NULL;
        second->next = NULL;
        first = merge(first, second);
        root = first;
        root->next = forward;
    }
    return root;
}

int main()
{
    // Create the linked list nodes
    Node *list1 = new Node(5);
    list1->bottom = new Node(7);
    list1->bottom->bottom = new Node(8);

    Node *list2 = new Node(10);
    list2->bottom = new Node(20);

    Node *list3 = new Node(19);
    list3->bottom = new Node(22);
    list3->bottom->bottom = new Node(50);

    Node *list4 = new Node(28);
    list4->bottom = new Node(35);
    list4->bottom->bottom = new Node(40);
    list4->bottom->bottom->bottom = new Node(45);

    // Link the lists
    list1->next = list2;
    list2->next = list3;
    list3->next = list4;

    // Flatten the linked list
    Node *flattenedList = flatten(list1);

    // Print the flattened linked list
    cout << "Flattened Linked List:" << endl;
    print(flattenedList);

    return 0;
}
