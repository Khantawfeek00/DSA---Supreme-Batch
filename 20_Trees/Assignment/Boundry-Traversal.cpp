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

vector<int> ans;
void addLeftTree(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return;
    }
    ans.push_back(root->data);
    if (root->left != NULL)
        addLeftTree(root->left);
    else
        addLeftTree(root->right);
}
void addRightTree(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return;
    }
    if (root->right != NULL)
        addRightTree(root->right);
    else
        addRightTree(root->left);

    ans.push_back(root->data);
}
void addLeaf(Node *root)
{

    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        ans.push_back(root->data);
    }
    addLeaf(root->left);
    addLeaf(root->right);
}
vector<int> boundary(Node *root)
{
    ans.clear();
    if (root == NULL)
    {
        return ans;
    }
    ans.push_back(root->data);
    addLeftTree(root->left);
    if (root->left != NULL || root->right != NULL)
    {
        // Don't add leaf nodes if the root is a leaf itself
        addLeaf(root);
    }
    addRightTree(root->right);

    return ans;
}
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
    vector<int> view = boundary(root);
    cout << "Boundry of the Tree : ";
    for (auto ele : view)
    {
        cout << ele << " ";
    }
}