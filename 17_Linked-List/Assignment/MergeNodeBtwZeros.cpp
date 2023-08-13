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
void merge(node *&head, node *&anstail)
{
    node *curr = head;
    while (curr != NULL)
    {
        int sum = 0;
        while (curr != NULL && curr->data != 0)
        {
            sum += curr->data;
            curr = curr->next;
        }
        node *newNode = new node(sum);
        anstail->next = newNode;
        anstail = newNode;
        curr = curr->next;
    }
}
node *mergeNodes(node *head)
{
    node *anshead = new node(-1);
    node *anstail = anshead;
    merge(head->next, anstail);
    return anshead->next;
}
int main()
{

    node *first1 = new node(0);
    node *second1 = new node(2);
    node *third1 = new node(0);
    node *fourth1 = new node(8);
    node *fifth1 = new node(2);
    node *sixth1 = new node(0);

    first1->next = second1;
    second1->next = third1;
    third1->next = fourth1;
    fourth1->next = fifth1;
    fifth1->next = sixth1;

    cout << "Before Merging List - " << endl;
    print(first1);

    first1 = mergeNodes(first1);

    cout << "After deleting List " << endl;
    print(first1);
}
