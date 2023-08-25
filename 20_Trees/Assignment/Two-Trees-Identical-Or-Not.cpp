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

// Two Trees Are identical or not
bool isIdentical(Node *r1, Node *r2)
{
    if (r1 == NULL && r2 == NULL)
    {
        return true;
    }
    if ((r1 == NULL && r2 != NULL) || (r2 == NULL && r1 != NULL))
    {
        return false;
    }
    if (r1->data == r2->data)
    {
        return isIdentical(r1->left, r2->left) && isIdentical(r1->right, r2->right);
    }
    else
    {
        return false;
    }
}

int main()
{
    cout << "Crate First Tree - " << endl;
    Node *root1 = buildTree();
    cout << "Crate Second Tree - " << endl;
    Node *root2 = buildTree();
    if (isIdentical(root1, root2))
    {
        cout << "Both Trees Are Identical" << endl;
    }
    else
    {
        cout << "Both Trees Are Not Identical" << endl;
    }
    return 0;
}