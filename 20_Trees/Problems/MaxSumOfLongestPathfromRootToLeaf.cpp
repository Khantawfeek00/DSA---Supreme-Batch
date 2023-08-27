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
/*
void Solve(Node *&root, pair<int, int> &maxSumLevel, pair<int, int> currSumLevel)
{
    if (root == NULL)
    {
        return;
    }

    currSumLevel.first += root->data;
    currSumLevel.second += 1;

    if (root->left == NULL && root->right == NULL)
    {
        if (currSumLevel.second > maxSumLevel.second)
        {
            maxSumLevel.first = currSumLevel.first;
            maxSumLevel.second = currSumLevel.second;
        }
        else if (currSumLevel.second == maxSumLevel.second)
        {
            maxSumLevel.first = max(maxSumLevel.first, currSumLevel.first);
            maxSumLevel.second = currSumLevel.second;
        }
        return;
    }
    Solve(root->left, maxSumLevel, currSumLevel);
    Solve(root->right, maxSumLevel, currSumLevel);
}
int sumOfLongRootToLeafPath(Node *root)
{
    pair<int, int> maxSumLevel = {0, 0};
    pair<int, int> currSumLevel = {0, 0};
    Solve(root, maxSumLevel, currSumLevel);
    return maxSumLevel.first;
}
*/

void Solve(Node *&root, int sum, int &maxSum, int len, int &maxLen)
{
    if (root == NULL)
    {
        if (len > maxLen)
        {
            maxSum = sum;
            maxLen = len;
        }
        else if (len == maxLen)
        {
            maxSum = max(maxSum, sum);
        }
        return;
    }

    sum += root->data;

    Solve(root->left, sum, maxSum, len + 1, maxLen);
    Solve(root->right, sum, maxSum, len + 1, maxLen);
}
int sumOfLongRootToLeafPath(Node *root)
{
    int sum = 0;
    int maxSum = INT_MIN;

    int len = 0;
    int maxLen = 0;
    Solve(root, sum, maxSum, len, maxLen);
    return maxSum;
}
int main()
{
    Node *root = buildTree();
    cout << "Sum of Longest Path from Root to leaf - " << sumOfLongRootToLeafPath(root);
    return 0;
}