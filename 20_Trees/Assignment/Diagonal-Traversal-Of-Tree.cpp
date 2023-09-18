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

void solve(Node *root, int hd, map<int, vector<int>> &mp)
{
    if (root == NULL)
    {
        return;
    }

    mp[hd].push_back(root->data);

    solve(root->left, hd - 1, mp);
    solve(root->right, hd, mp);
}
vector<int> diagonal(Node *root)
{
    /* Slow Algo
   map<int,vector<int>> mp;
   int hd=0;
   solve(root,hd,mp);
   vector<int> ans;
   int lvl=0;
   for (auto it = mp.rbegin(); it != mp.rend(); ++it) {
        vector<int> diagonalValues = it->second;
        for (auto ele : diagonalValues) {
            ans.push_back(ele);
        }
    }
   return ans;
   */

    /*Fast algo*/
    vector<int> ans;

    if (root == NULL)
        return ans;

    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        while (temp != NULL)
        {
            ans.push_back(temp->data);

            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            temp = temp->right;
        }
    }
    return ans;
}
int main()
{
    Node *root = buildTree();
    vector<int> dia = diagonal(root);
    for (auto ele : dia)
    {
        cout << ele << " ";
    }
    return 0;
}