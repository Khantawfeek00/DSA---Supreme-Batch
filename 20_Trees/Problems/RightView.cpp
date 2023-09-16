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

void rightViewHelper(Node *&root, int lvl, vector<int> &ans)
{
    if (root == NULL)
    {
        return;
    }

    if (lvl == ans.size())
    {
        ans.push_back(root->data);
    }

    rightViewHelper(root->right, lvl + 1, ans);
    rightViewHelper(root->left, lvl + 1, ans);
}
vector<int> rightView(Node *root)
{
    vector<int> ans;
    int lvl = 0;
    rightViewHelper(root, lvl, ans);
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
    vector<int> view = rightView(root);
    for (auto ele : view)
    {
        cout << ele << " ";
    }
}