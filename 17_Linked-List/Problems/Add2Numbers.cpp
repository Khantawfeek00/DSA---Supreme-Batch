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

int solve(node *&l1, node *&l2, node *&anstail, int carry)
{
    if (l1 == NULL && l2 == NULL)
    {
        return carry;
    }
    int left, right;
    if (l1 != NULL)
    {
        left = l1->data;
    }
    else
        left = 0;
    if (l2 != NULL)
    {
        right = l2->data;
    }
    else
        right = 0;

    int data = left + right + carry;
    carry = data / 10;
    node *newNode = new node(data % 10);
    anstail->next = newNode;
    anstail = newNode;
    l1 = l1 != NULL ? l1->next : NULL;
    l2 = l2 != NULL ? l2->next : NULL;
    return solve(l1, l2, anstail, carry);
}
node *addTwoNumbers(node *l1, node *l2)
{
    /* Recursion solution
    node *ans = new node(-1);
    node *anstail = ans;
    int carry = 0;
    carry = solve(l1, l2, anstail, carry);
    if (carry != 0)
    {
        anstail->next = new node(carry % 10);
        carry = carry / 10;
        if (carry != 0)
            anstail->next = new node(carry % 10);
    }
    return ans->next;
    */

    //  without recursion
    node *ans = new node(-1);
    node *anstail = ans;
    int carry = 0;
    while (l1 != NULL || l2 != NULL)
    {

        int left, right;
        if (l1 != NULL)
        {
            left = l1->data;
        }
        else
            left = 0;
        if (l2 != NULL)
        {
            right = l2->data;
        }
        else
            right = 0;
        int data = left + right + carry;
        carry = data / 10;
        node *newNode = new node(data % 10);
        anstail->next = newNode;
        anstail = newNode;
        l1 = (l1 != NULL) ? l1->next : NULL;
        l2 = (l2 != NULL) ? l2->next : NULL;
    }
    if (carry != 0)
    {
        anstail->next = new node(carry % 10);
        carry = carry / 10;
        if (carry != 0)
            anstail->next = new node(carry % 10);
    }
    return ans->next;
}
int main()
{

    node *first1 = new node(1);
    node *second1 = new node(2);
    node *third1 = new node(7);
    node *fourth1 = new node(9);

    node *first2 = new node(2);
    node *second2 = new node(5);
    node *third2 = new node(5);

    first1->next = second1;
    second1->next = third1;
    third1->next = fourth1;

    first2->next = second2;
    second2->next = third2;
    // if Both the list are in correct order
    // then reverse both list and solve
    // after that reverse resultList to get proper order
    cout << "List 1 - " << endl;
    print(first1);

    cout << "List 2 - " << endl;
    print(first2);
    node *resulthead = addTwoNumbers(first1, first2);

    cout << "Added list - " << endl;
    print(resulthead);
}

/*
    GFG Submitted Solution
    public:
    struct Node* reverseList(struct Node* head){

        Node* curr=head;
        Node* forward=curr->next;
        Node* prev=NULL;
        while(curr!=NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;
    }
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* l1, struct Node* l2)
    {
         Recursion solution
        // node *ans = new node(-1);
        // node *anstail = ans;
        // int carry = 0;
        // carry = solve(l1, l2, anstail, carry);
        // if (carry != 0)
        // {
        //     anstail->next = new node(carry % 10);
        //     carry = carry / 10;
        //     if (carry != 0)
        //         anstail->next = new node(carry % 10);
        // }
        // return ans->next;


        //  without recursion
        l1=reverseList(l1);
        l2=reverseList(l2);
        Node *ans = new Node(-1);
        Node *anstail = ans;
        int carry = 0;
        while (l1 != NULL || l2 != NULL)
        {

            int left, right;
            if (l1 != NULL)
            {
                left = l1->data;
            }
            else
                left = 0;
            if (l2 != NULL)
            {
                right = l2->data;
            }
            else
                right = 0;
            int data = left + right + carry;
            carry = data / 10;
            Node *newNode = new Node(data % 10);
            anstail->next = newNode;
            anstail = newNode;
            l1 = (l1 != NULL) ? l1->next : NULL;
            l2 = (l2 != NULL) ? l2->next : NULL;
        }
        if (carry != 0)
        {
            anstail->next = new Node(carry % 10);
            carry = carry / 10;
            if (carry != 0)
                anstail->next = new Node(carry % 10);
        }

        ans= reverseList(ans->next);
        return ans;
    }
*/