#include <bits/stdc++.h>
#include <queue>
#include <map>
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
int D = 0;
int heightOfTree(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int lh = heightOfTree(root->left);

    int rh = heightOfTree(root->right);

    int currD = lh + rh;

    D = max(D, currD);

    return max(lh, rh) + 1;
}
int diameterOfBinaryTree(Node *root)
{
    heightOfTree(root);
    return D;
}

/*
Slow Code use above fast code
int heightOfTree(TreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }

    return max(heightOfTree(root->left), heightOfTree(root->right)) + 1;
}
int diameterOfBinaryTree(TreeNode *root)
{

    if (root == NULL)
    {
        return 0;
    }

    int ans1 = diameterOfBinaryTree(root->left);

    int ans2 = diameterOfBinaryTree(root->right);

    int ans3 = heightOfTree(root->left) + heightOfTree(root->right);

    return max(ans1, max(ans2, ans3));
}
*/
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

int main()
{
    Node *root = buildTree();
    cout << "Diameter of tree is : " << diameterOfBinaryTree(root);
}