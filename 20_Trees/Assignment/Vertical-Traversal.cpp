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
vector<vector<int>> verticalTraversal(Node *root)
{
    vector<vector<int>> ans;

    queue<pair<Node *, pair<int, int>>> q;
    q.push({root, {0, 0}});

    map<int, map<int, multiset<int>>> m; // col->{row,[x,y,z,....]}
    while (!q.empty())
    {
        auto front = q.front();
        q.pop();

        Node *node = front.first;
        auto cor = front.second;
        int row = cor.first;
        int col = cor.second;

        m[col][row].insert(node->data);

        if (node->left)
        {
            q.push({node->left, {row + 1, col - 1}});
        }
        if (node->right)
        {
            q.push({node->right, {row + 1, col + 1}});
        }
    }

    for (auto it : m)
    {
        auto colmap = it.second;
        vector<int> vLine;
        for (auto colmapit : colmap)
        {
            auto mset = colmapit.second;
            vLine.insert(vLine.end(), mset.begin(), mset.end());
        }
        ans.push_back(vLine);
    }
    return ans;
}
int main()
{
    Node *root = buildTree();
    vector<vector<int>> vertical = verticalTraversal(root);
    for (auto ele : vertical)
    {
        for (auto i : ele)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}