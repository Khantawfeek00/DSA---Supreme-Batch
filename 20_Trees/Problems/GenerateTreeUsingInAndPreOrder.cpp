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

int getPosi(int inorder[], int data, int inorderStart, int inorderEnd)
{

    for (int i = inorderStart; i <= inorderEnd; i++)
    {
        if (inorder[i] == data)
        {
            return i;
        }
    }
    return -1;
}
Node *buildTreeFromInOrderAndPreorder(int inorder[], int preorder[], int &size, int &preIndex, int inorderStart, int inorderEnd)
{
    // Base case
    if (preIndex >= size || inorderStart > inorderEnd)
    {
        return NULL;
    }

    // Create node
    int ele = preorder[preIndex++];

    Node *root = new Node(ele);

    // find Position in inorder array
    int pos = getPosi(inorder, ele, inorderStart, inorderEnd);

    // recursive call
    root->left = buildTreeFromInOrderAndPreorder(inorder, preorder, size, preIndex, inorderStart, pos - 1);
    root->right = buildTreeFromInOrderAndPreorder(inorder, preorder, size, preIndex, pos + 1, inorderEnd);

    return root;
}
Node *buildTree(int in[], int pre[], int n)
{
    int preIndex = 0;
    int inorderStart = 0;
    int inorderEnd = n - 1;
    return buildTreeFromInOrderAndPreorder(in, pre, n, preIndex, inorderStart, inorderEnd);
}

// Inorder Traversal
void inorderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorderTraversal(root->left);

    cout << root->data << " ";

    inorderTraversal(root->right);
}

int main()
{
    int inorder[] = {4, 2, 5, 1, 6, 3};
    int preorder[] = {1, 2, 4, 5, 3, 6};
    int n = 6;

    Node *root = buildTree(inorder, preorder, n);

    // You can now use the 'root' pointer to perform operations on the binary tree.
    // For example, you can traverse and print the tree in inorder.
    std::cout << "Inorder Traversal of the constructed tree:" << std::endl;
    inorderTraversal(root);

    // Don't forget to free the memory to avoid memory leaks.
    // Implement a function to delete the tree nodes to do this.

    return 0;
}