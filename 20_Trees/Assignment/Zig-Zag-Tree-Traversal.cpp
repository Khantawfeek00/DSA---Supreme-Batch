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
vector<vector<int>> zigzagLevelOrder(Node *root)
{
    if (root == NULL)
        return {};
    queue<Node *> q;
    q.push(root);
    vector<vector<int>> ans;
    bool flag = true;
    while (!q.empty())
    {
        int lvl = q.size();
        vector<int> inner(lvl);
        for (int i = 0; i < lvl; i++)
        {
            Node *temp = q.front();
            q.pop();

            if (flag == true)
                inner[i] = temp->data;
            else
                inner[lvl - i - 1] = temp->data;

            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }
        flag = !flag;
        ans.push_back(inner);
    }
    return ans;
}
int main()
{
    Node *root = buildTree();
    vector<vector<int>> zig = zigzagLevelOrder(root);
    for (auto ele : zig)
    {
        for (auto i : ele)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}