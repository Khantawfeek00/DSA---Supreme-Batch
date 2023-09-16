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
    cout << "Enter the dataue of data- ";
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

bool Solve(Node *root, int &target, int &currSum)
{
    if (root == NULL)
    {
        return false;
    }
    currSum += root->data;
    if (root->left == NULL && root->right == NULL)
    {
        if (target == currSum)
        {
            return true;
        }
        currSum -= root->data;
        return false;
    }
    bool ans = Solve(root->left, target, currSum) || Solve(root->right, target, currSum);
    currSum -= root->data;
    return ans;
}
bool hasPathSum(Node *root, int targetSum)
{
    int currSum = 0;
    return Solve(root, targetSum, currSum);
}
int main()
{
    Node *root = buildTree();

    int targetSum;
    cout << "Enter the target sum: ";
    cin >> targetSum;

    if (hasPathSum(root, targetSum))
    {
        cout << "Path is Present" << endl;
    }
    else
    {
        cout << "Path is Not Present" << endl;
    }

    return 0;
}