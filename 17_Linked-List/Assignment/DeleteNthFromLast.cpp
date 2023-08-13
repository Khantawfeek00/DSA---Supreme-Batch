#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *random;

    node(int _data)
    {
        data = _data;
        next = NULL;
        random = NULL;
    }
};
/*
node *reversewithCount(node *&head, int &n, int &i)
{
    if (head == NULL)
    {
        return NULL;
    }
    reversewithCount(head->next, n, i);
    if (i == n)
    {
        if (head->next != NULL)
        {
            head->next = head->next->next;
        }
    }
    i++;
    return head;
}
*/

int getLength(node *head)
{
    int count = 0;
    while (head != NULL)
    {
        head = head->next;
        count++;
    }
    return count;
}

node *removeNthFromEnd(node *head, int n)
{
    //     int i=0;
    //     if(n==getLength(head)){
    //         return head->next;
    //     }
    //     return reversewithCount(head,n,i);

    node *dummy = new node(-1);
    dummy->next = head;
    node *fast = dummy;
    node *slow = dummy;

    for (int i = 0; i <= n; i++)
    {
        fast = fast->next;
    }

    while (fast != nullptr)
    {
        fast = fast->next;
        slow = slow->next;
    }

    slow->next = slow->next->next;

    return dummy->next;
}

int main()
{
    // Create a sample linked list: 1 -> 2 -> 3 -> 4 -> 5
    node *head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);
    head->next->next->next->next = new node(5);

    int n = 2; // Remove the 2nd node from the end

    cout << "Original linked list: ";
    node *current = head;
    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;

    node *newHead = removeNthFromEnd(head, n);

    cout << "Linked list after remodata: ";
    current = newHead;
    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;

    // Clean up memory (not shown in original code)
    // ... (delete nodes and free memory)

    return 0;
}