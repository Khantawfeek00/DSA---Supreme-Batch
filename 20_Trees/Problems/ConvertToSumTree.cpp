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

int ConvertToSumTree(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftTreeSum = ConvertToSumTree(root->left);
    int rightTreeSum = ConvertToSumTree(root->right);
    root->data = leftTreeSum + rightTreeSum + root->data;
    return root->data;
}

int main()
{
    Node *root = buildTree();
    ConvertToSumTree(root);
    return 0;
}