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

std::unordered_map<int, int> m;
void mapping(int inorder[], int n)
{
    for (int i = 0; i < n; i++)
    {
        m[inorder[i]] = i;
    }
}
Node *buildTreeFromInOrderAndPostorder(int inorder[], int postorder[], int size, int &postIndex, int inorderStart, int inorderEnd)
{
    // Base case
    if (postIndex < 0 || inorderStart > inorderEnd)
    {
        return NULL;
    }

    // Create node
    int ele = postorder[postIndex--];

    Node *root = new Node(ele);

    // find Position in inorder array
    int pos = m[ele];

    // recursive call
    root->right = buildTreeFromInOrderAndPostorder(inorder, postorder, size, postIndex, pos + 1, inorderEnd);
    root->left = buildTreeFromInOrderAndPostorder(inorder, postorder, size, postIndex, inorderStart, pos - 1);

    return root;
}
Node *buildTree(int in[], int post[], int n)
{
    mapping(in, n);
    int postIndex = n - 1;
    int inorderStart = 0;
    int inorderEnd = n - 1;
    return buildTreeFromInOrderAndPostorder(in, post, n, postIndex, inorderStart, inorderEnd);
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
    int postorder[] = {1, 2, 4, 5, 3, 6};
    int n = 6;

    Node *root = buildTree(inorder, postorder, n);

    // You can now use the 'root' pointer to perform operations on the binary tree.
    // For example, you can traverse and print the tree in inorder.
    std::cout << "Inorder Traversal of the constructed tree:" << std::endl;
    inorderTraversal(root);

    // Don't forget to free the memory to avoid memory leaks.
    // Implement a function to delete the tree nodes to do this.

    return 0;
}