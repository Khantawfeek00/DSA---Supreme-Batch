#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *random;

    Node(int _val)
    {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

/*
     Node* helper0(Node* head,unordered_map<Node*,Node*>& mapping){
         if(head==NULL){
             return NULL;
         }
         Node* newNode=new Node(head->val);
         mapping[head]=newNode;
         newNode->next=helper(head->next,mapping);

         if(head->random!=NULL){
             newNode->random=mapping[head->random];
         }
         else{
             newNode->random=NULL;
         }
         return newNode;
     }
     */
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
Node *copyRandomList(Node *head)
{
    // mapping of old node with new node
    //  unordered_map<Node*,Node*> mapping;
    //  Node* newhead=helper0(head,mapping);
    //  return newhead;

    // without using map
    if (head == NULL)
    {
        return NULL;
    }

    // step 1:Clone nodes A->A'->B->B'....
    Node *it = head;
    while (it)
    {
        Node *clonedNode = new Node(it->val);
        clonedNode->next = it->next;
        it->next = clonedNode;
        it = clonedNode->next;
    }

    // step 2 :Assigning randoms of new node with the help of old node
    it = head;
    while (it)
    {
        Node *cloneNode = it->next;
        cloneNode->random = it->random != NULL ? it->random->next : NULL;
        it = cloneNode->next;
    }

    // step 3: detached A' from A
    it = head;
    Node *clonedhead = it->next;
    while (it)
    {
        Node *clonedNode = it->next;
        it->next = clonedNode->next;
        if (clonedNode->next)
        {
            clonedNode->next = clonedNode->next->next;
        }
        it = it->next;
    }
    return clonedhead;
}

int main()
{
    // Create the original linked list with random pointers
    Node *node1 = new Node(1);
    Node *node2 = new Node(2);
    Node *node3 = new Node(3);
    Node *node4 = new Node(4);
    Node *node5 = new Node(5);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    node1->random = node3;
    node2->random = node1;
    node3->random = node5;
    node4->random = node2;
    node5->random = node4;

    // Call the function to copy the random linked list
    Node *copiedHead = copyRandomList(node1);

    // Print the original and copied linked lists
    cout << "Original Linked List:" << endl;
    print(node1);

    cout << "\nCopied Linked List:" << endl;
    print(copiedHead);

    return 0;
}