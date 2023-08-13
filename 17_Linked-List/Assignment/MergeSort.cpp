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

// merging two sorted linked list
void merge(node *&list1, node *&list2, node *&anstail)
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
node *mergeTwoLists(node *&list1, node *&list2)
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
node *findMid(node *&head)
{
    node *slow = head;
    node *fast = head->next;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
node *sortList(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    // break LL in two halves using mid node
    node *mid = findMid(head);
    node *left = head;
    node *right = mid->next;
    mid->next = NULL;

    left = sortList(left);
    right = sortList(right);

    node *merged = mergeTwoLists(left, right);
    return merged;
}
int main()
{

    node *first1 = new node(4);
    node *second1 = new node(2);
    node *third1 = new node(31);
    node *fourth1 = new node(8);
    node *fifth1 = new node(2);
    node *sixth1 = new node(62);

    first1->next = second1;
    second1->next = third1;
    third1->next = fourth1;
    fourth1->next = fifth1;
    fifth1->next = sixth1;

    cout << "Before Merge Sort, List - " << endl;
    print(first1);

    first1 = sortList(first1);

    cout << "After Merge Sort, List  - " << endl;
    print(first1);
}
