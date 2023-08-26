#include <bits/stdc++.h>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node *buildTree()
{
    int data;
    cout << "Enter the dataue of data- ";
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }

    // creating new Node
    Node *newNode = new Node(data);

    // creating left tree recursively
    cout << "Entering data for left part of : " << data << endl;
    newNode->left = buildTree();

    // creating right tree recursively
    cout << "Entering data for right part of : " << data << endl;
    newNode->right = buildTree();

    // returning node as root for current tree
    return newNode;
}

Node *lowestCommonAncestor(Node *root, Node *p, Node *q)
{

    // Base case
    if (root == NULL)
    {
        return NULL;
    }

    // check that node == p || node== q (data)
    if (root->data == p->data)
    {
        return p;
    }
    if (root->data == q->data)
    {
        return q;
    }

    // both node may be on left subtree
    Node *leftTree = lowestCommonAncestor(root->left, p, q);

    // both node may be on right subtree
    Node *rightTree = lowestCommonAncestor(root->right, p, q);

    // check that node is present on one the side based on that returning the dataue
    if (leftTree == NULL && rightTree == NULL)
    {
        return NULL;
    }
    else if (leftTree == NULL && rightTree != NULL)
    {
        return rightTree;
    }
    else if (leftTree != NULL && rightTree == NULL)
    {
        return leftTree;
    }
    else
    {
        return root;
    }
}

int main()
{
    // Build the binary tree
    Node *root = buildTree();

    int data1, data2;
    cout << "Enter two dataues to find their lowest common ancestor: ";
    cin >> data1 >> data2;

    Node *p = new Node(data1);
    Node *q = new Node(data2);

    Node *lca = lowestCommonAncestor(root, p, q);

    if (lca)
    {
        cout << "Lowest Common Ancestor of " << data1 << " and " << data2 << " is: " << lca->data << endl;
    }
    else
    {
        cout << "Lowest Common Ancestor not found for " << data1 << " and " << data2 << endl;
    }

    return 0;
}