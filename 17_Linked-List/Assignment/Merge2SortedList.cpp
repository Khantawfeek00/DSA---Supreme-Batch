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
void merge(node *list1, node *list2, node *&anstail)
{
    while (list1 != NULL && list2 != NULL)
    {
        if (list1->data <= list2->data)
        {
            node *temp = list1;
            list1 = list1->next;
            anstail->next = temp;
            anstail = temp;
        }
        else
        {
            node *temp = list2;
            list2 = list2->next;
            anstail->next = temp;
            anstail = temp;
        }
    }
    if (list1 != NULL)
    {
        anstail->next = list1;
        while (anstail != NULL)
        {
            anstail = anstail->next;
        }
    }
    if (list2 != NULL)
    {
        anstail->next = list2;
        while (anstail != NULL)
        {
            anstail = anstail->next;
        }
    }
}
node *mergeTwoLists(node *list1, node *list2)
{
    if (list1 == NULL)
    {
        return list2;
    }
    if (list2 == NULL)
    {
        return list1;
    }
    if (list1 == NULL && list2 == NULL)
    {
        return NULL;
    }
    node *anshead = new node(-1);
    node *anstail = anshead;
    merge(list1, list2, anstail);
    return anshead->next;
}
int main()
{

    node *first1 = new node(1);
    node *second1 = new node(2);
    node *third1 = new node(5);
    node *fourth1 = new node(8);

    first1->next = second1;
    second1->next = third1;
    third1->next = fourth1;

    node *first2 = new node(1);
    node *second2 = new node(4);
    node *third2 = new node(7);
    node *fourth2 = new node(12);

    first2->next = second2;
    second2->next = third2;
    third2->next = fourth2;

    cout << "List 1 - " << endl;
    print(first1);

    cout << "List 2 - " << endl;
    print(first2);

    node *resulthead = mergeTwoLists(first1, first2);

    cout << "After Merging - " << endl;
    print(resulthead);
}
