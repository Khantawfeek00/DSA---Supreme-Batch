#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

Node *head;

/*Debug - 1 */
void insert(int x)
{
    Node *temp = new Node;
    temp->data = x;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        Node *current = head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = temp;
    }
}
/*Debug - 2 */
Node *middleNode(Node *head)
{
    Node *last = head;
    Node *first = head;

    while (first != NULL && first->next != NULL)
    {
        last = last->next;
        first = first->next->next;
    }

    return last;
}
bool hasCycle(ListNode *head)
{
    if (head == NULL)
        return false;
    ListNode *fast = head;
    ListNode *slow = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;

        if (fast == slow)
            return true;
    }

    return false;
}

void print()
{
    Node *temp = head;
    cout << "List: ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    head = NULL;
    insert(1);
    insert(2);
    insert(3);
    insert(5);
    insert(6);
    print();
    cout << "Middle element - " << middleNode(head)->data << endl;
    return 0;
}
