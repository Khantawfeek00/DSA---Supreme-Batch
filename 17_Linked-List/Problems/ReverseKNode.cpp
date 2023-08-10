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
/*  Leetcode Solution
    // Input: head = [1,2,3,4,5], k = 3
    // Output: [3,2,1,4,5]
    int getLength(ListNode* head){
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        return count;
    }
    ListNode* reverseK(ListNode* head,int k){
        if(k==1){
            return head;
        }
        if(head==NULL){
            return head;
        }
        int len=getLength(head);
        if(k>len){
            return head;
        }
        int i=0;
        ListNode * prev=NULL;
        ListNode * curr=head;
        ListNode * forward=curr->next;
        while(forward !=NULL && i<k){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
            i++;
        }

        if(forward!=NULL){
            head->next=reverseK(forward,k);
        }

        return prev;


    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        return reverseK(head,k);
    }
*/
node *reverseInK(node *head, int k)
{
    // Base case
    if (head == NULL)
    {
        return head;
    }

    node *forward = head->next;
    node *prev = NULL;
    node *curr = head;
    int i = 0;
    // reversing k nodes
    while (curr != NULL && i < k)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        i++;
    }
    // recursive call to reverse another k nodes and return head of those nodes
    head->next = reverseInK(forward, k);
    return prev;
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

    node *first = new node(1);
    node *second = new node(2);
    node *third = new node(3);
    node *fourth = new node(4);
    node *fifth = new node(5);
    node *sixth = new node(6);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    node *head = first;
    print(head);
    int k = 4;
    head = reverseInK(head, k);
    print(head);
}