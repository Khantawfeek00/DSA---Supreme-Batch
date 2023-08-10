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
/*Another ways:
Method: 1 - BY creating new Linked List and them Checking

Method: 2 - BY creating vector and copying data into it then check

Method: 3 - find middle then reverse rest list after middle and then check as follow

*/

node *middleNode(node *head)
{
    node *slow = head;
    node *fast = head;
    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
node *reversePart(node *head)
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
bool isPalindrome(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return true;
    }
    node *mid = middleNode(head);
    node *head2 = reversePart(mid->next);
    mid->next = head2;
    node *temp1 = head;
    node *temp2 = head2;
    while (temp2 != NULL)
    {
        if (temp1->data != temp2->data)
        {
            return false;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return true;
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

    // node *first = new node(1);
    // node *second = new node(2);
    // node *third = new node(3);
    // node *fourth = new node(4);
    // node *fifth = new node(5);
    // node *sixth = new node(6);

    node *first = new node(1);
    node *second = new node(2);
    node *third = new node(3);
    node *fourth = new node(3);
    node *fifth = new node(2);
    node *sixth = new node(1);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    node *head = first;
    print(head);

    if (isPalindrome(head))
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }
    print(head);
}