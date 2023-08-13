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
node *rotateRight(node *&head, int k)
{

    /*
    int n=getLength(head);
    if(head==NULL || head->next==NULL || k==0 || k%n==0){
        return head;
    }
    head=reverseList(head);

    node * fast=head;
    node* slow=head;
    while(k%n>1){
        fast=fast->next;
        slow=slow->next;
        k--;
    }
    if(fast==NULL){
        return head;
    }
    fast=fast->next;
    slow->next=NULL;
    head=reverseList(head);
    slow=head;
    while(slow->next!=NULL){
        slow=slow->next;
    }
    fast=reverseList(fast);
    slow->next=fast;
    return head;
    */

    int n = getLength(head);
    if (head == NULL || head->next == NULL || k == 0 || k % n == 0)
    {
        return head;
    }
    node *temp = head;
    k = k % n;
    int newLastNodePos = n - k - 1;
    int i = 0;
    while (i < newLastNodePos)
    {
        temp = temp->next;
        i++;
    }
    node *nexthead = temp->next;
    temp->next = NULL;
    temp = nexthead;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = head;
    return nexthead;
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

    cout << "Before rotating List - " << endl;
    print(first1);

    int k = 2;
    first1 = rotateRight(first1, k);

    cout << "After rotating List " << endl;
    print(first1);
}
