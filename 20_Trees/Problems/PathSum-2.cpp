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

void Solve(TreeNode *root, int target, int currSum, vector<vector<int>> &ans, vector<int> &arr)
{

    // Base Case
    if (root == NULL)
    {
        return;
    }
    // leaf node
    if (root->left == NULL && root->right == NULL)
    {
        arr.push_back(root->val);
        currSum += root->val;
        if (target == currSum)
            ans.push_back(arr);
        arr.pop_back();
        return;
    }
    // include node
    arr.push_back(root->val);
    currSum += root->val;

    Solve(root->left, target, currSum, ans, arr);

    Solve(root->right, target, currSum, ans, arr);

    // backtrack
    arr.pop_back();
}
vector<vector<int>> pathSum(TreeNode *root, int targetSum)
{
    vector<vector<int>> ans;
    vector<int> arr;
    int CurrSum = 0;
    Solve(root, targetSum, CurrSum, ans, arr);
    return ans;
}
int main()
{
    TreeNode *root = buildTree();

    int targetSum;
    cout << "Enter the target sum: ";
    cin >> targetSum;

    vector<vector<int>> result = pathSum(root, targetSum);

    cout << "Root-to-leaf paths with sum " << targetSum << " are: " << endl;
    for (const vector<int> &path : result)
    {
        for (int val : path)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}