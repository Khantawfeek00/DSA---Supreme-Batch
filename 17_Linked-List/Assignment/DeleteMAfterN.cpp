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

node *reverseList(node *head)
{
    node *prev = NULL;
    node *curr = head;
    node *forward = curr->next;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}
int getLength(node *&head)
{
    int count = 0;
    node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}
node *deleteN(node *&head, int N)
{
    if (head == NULL)
    {
        return NULL;
    }
    while (head != NULL && N--)
    {
        head = head->next;
    }
    return head;
}
node *linkdelete(node *head, int M, int N)
{
    node *temp = head;
    while (temp != NULL)
    {
        int i = 1;
        while (temp != NULL && i < M)
        {
            temp = temp->next;
            i++;
        }
        if (temp != NULL)
        {
            temp->next = deleteN(temp->next, N);
            temp = temp->next;
        }
    }
    return head;
}
int main()
{

    node *first1 = new node(1);
    node *second1 = new node(2);
    node *third1 = new node(5);
    node *fourth1 = new node(8);
    node *fifth1 = new node(2);
    node *sixth1 = new node(5);

    first1->next = second1;
    second1->next = third1;
    third1->next = fourth1;
    fourth1->next = fifth1;
    fifth1->next = sixth1;

    cout << "Before deleting List - " << endl;
    print(first1);

    int M = 2;
    int N = 1;
    first1 = linkdelete(first1, M, N);

    cout << "After deleting List " << endl;
    print(first1);
}
