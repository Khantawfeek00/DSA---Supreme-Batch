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
    node *curr = head;
    node *prev = NULL;
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

node *add1ToList(node *head)
{
    head = reverseList(head);
    node *ans = new node(-1);
    node *anstail = ans;
    int carry = 0;
    node *l1 = head;
    while (l1 != NULL)
    {

        int left, right;
        left = l1->data;
        if (l1 == head)
            right = 1;
        else
            right = 0;
        int data = left + right + carry;
        carry = data / 10;
        node *newNode = new node(data % 10);
        anstail->next = newNode;
        anstail = newNode;
        l1 = l1->next;
    }
    if (carry != 0)
    {
        anstail->next = new node(carry % 10);
        carry = carry / 10;
        if (carry != 0)
            anstail->next = new node(carry % 10);
    }
    ans = reverseList(ans->next);
    return ans;
}
int main()
{

    node *first1 = new node(9);
    node *second1 = new node(9);
    node *third1 = new node(9);
    node *fourth1 = new node(9);

    first1->next = second1;
    second1->next = third1;
    third1->next = fourth1;

    cout << "List - " << endl;
    print(first1);

    node *resulthead = add1ToList(first1);

    cout << "After Adding 1 to list - " << endl;
    print(resulthead);
}
