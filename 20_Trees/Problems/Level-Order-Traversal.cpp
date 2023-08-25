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

// Level Order Traversal
void LevelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        // store front node
        Node *temp = q.front();

        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
                q.push(NULL);
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
                q.push(temp->left);

            if (temp->right)
                q.push(temp->right);
        }
    }
}

// Level Order Traversal with return vector<vector<int>>
vector<vector<int>> levelOrder(TreeNode *&root)
{
    if (root == NULL)
        return {};
    vector<vector<int>> ans;
    queue<TreeNode *> que;
    que.push(root);
    int levelSize;
    while (!que.empty())
    {
        levelSize = que.size();
        vector<int> arr;
        for (int i = 0; i < levelSize; i++)
        {
            TreeNode *temp = que.front();
            que.pop();
            arr.push_back(temp->val);
            if (temp->left != NULL)
                que.push(temp->left);
            if (temp->right != NULL)
                que.push(temp->right);
        }
        ans.push_back(arr);
    }
    return ans;
}

int main()
{
    Node *head = buildTree();
    LevelOrderTraversal(head);
    return 0;
}