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

int solve(Node *node)
{
    if (node == NULL)
    {
        return 0;
    }

    int lsum = solve(node->left);
    int rsum = solve(node->right);

    int ele = node->data;
    node->data = lsum + rsum;

    return ele + node->data;
}

void toSumTree(Node *node)
{
    solve(node);
}
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
int main()
{
    Node *root = buildTree();
    cout << "Before convert to Sum Tree- " << endl;
    LevelOrderTraversal(root);

    toSumTree(root);

    cout << "After convert to Sum Tree- " << endl;
    LevelOrderTraversal(root);
    return 0;
}