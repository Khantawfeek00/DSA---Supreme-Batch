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

vector<int> topView(Node *root)
{
    map<int, int> mp;
    queue<pair<int, Node *>> q;
    q.push({0, root});
    while (!q.empty())
    {
        pair<int, Node *> temp = q.front();
        q.pop();

        if (mp.find(temp.first) == mp.end())
        {
            mp[temp.first] = temp.second->data;
        }
        if (temp.second->left != NULL)
            q.push({(temp.first) - 1, temp.second->left});

        if (temp.second->right != NULL)
            q.push({(temp.first) + 1, temp.second->right});
    }
    vector<int> ans;
    for (auto ele : mp)
    {
        ans.push_back(ele.second);
    }
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
    vector<int> view = topView(root);
    for (auto ele : view)
    {
        cout << ele << " ";
    }
}