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

// height of the node
int heightOfTree(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return max(heightOfTree(root->left), heightOfTree(root->right)) + 1;
}
bool isBalanced(Node *root)
{

    // Base case
    if (root == NULL)
    {
        return true;
    }

    // 1 Case
    int leftTree = heightOfTree(root->left);
    int rightTree = heightOfTree(root->right);

    bool ans = abs(leftTree - rightTree) <= 1;

    // recursive call for all node
    return ans && isBalanced(root->left) && isBalanced(root->right);
}

int main()
{
    Node *root = buildTree();
    if (isBalanced(root))
    {
        cout << "Tree is Balanced" << endl;
    }
    else
    {
        cout << "Tree is not Balanced" << endl;
    }
    return 0;
}