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

bool Solve(Node *root, int &k, int node, int &ans)
{
    // Base Case
    if (root == NULL)
    {
        return false;
    }
    if (root->data == node)
    {
        return true;
    }
    bool left = Solve(root->left, k, node, ans);
    bool right = Solve(root->right, k, node, ans);

    if (left || right)
    {
        k--;
        if (k == 0)
        {
            ans = root->data;
        }
        return true;
    }
    return false;
}
int kthAncestor(Node *root, int k, int node)
{
    int ans = -1;
    Solve(root, k, node, ans);
    return ans;
}

int main()
{
    Node *root = buildTree();
    int k = 2;
    int node = 4;
    cout << "Kth Ancestor - " << kthAncestor(root, k, node);
    return 0;
}