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
    cout << "Enter the value of data- ";
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

// InOrder Traversal
void InOrderTraversal(Node *root)
{
    // Base Condition
    if (root == NULL)
    {
        return;
    }

    // Going to left sub-tree
    InOrderTraversal(root->left);

    // printing data
    cout << root->data << " ";

    // Going to right sub-tree
    InOrderTraversal(root->right);
}

// PreOrder Traversal
void PreOrderTraversal(Node *root)
{
    // Base Condition
    if (root == NULL)
        return;

    // printing data
    cout << root->data << " ";

    // Going to left sub-tree
    PreOrderTraversal(root->left);

    // Going to right sub-tree
    PreOrderTraversal(root->right);
}

// PostOrder Traversal
void PostOrderTraversal(Node *root)
{
    // Base Condition
    if (root == NULL)
        return;

    // printing data
    cout << root->data << " ";

    // Going to left sub-tree
    PostOrderTraversal(root->left);

    // Going to right sub-tree
    PostOrderTraversal(root->right);
}

int main()
{
    Node *head = buildTree();
    cout << "In order Traversal - " << endl;
    InOrderTraversal(head);
    cout << endl;

    cout << "Pre order Traversal - " << endl;
    PreOrderTraversal(head);
    cout << endl;

    cout << "Post order Traversal - " << endl;
    PostOrderTraversal(head);
    cout << endl;

    return 0;
}