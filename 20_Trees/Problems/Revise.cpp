#include <iostream>
#include <queue>
#include <vector>
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
    cout << "Enter the data of node : ";
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }

    Node *temp = new Node(data);

    // creating left tree
    cout << "Enter the data for left node of " << data << endl;
    temp->left = buildTree();

    // creating right tree
    cout << "Enter the data for right node of " << data << endl;
    temp->right = buildTree();

    return temp;
}
void levelOrderPrint(Node *head)
{
    queue<Node *> q;
    q.push(head);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            if (q.empty())
            {
                return;
            }
            q.push(NULL);
            cout << endl;
            continue;
        }

        if (temp->left != NULL)
        {
            q.push(temp->left);
        }
        if (temp->right != NULL)
        {
            q.push(temp->right);
        }

        cout << temp->data << " ";
    }
}

void preorderTraversal(Node *head)
{

    if (head == NULL)
        return;

    cout << head->data << " ";

    // printing left tree
    preorderTraversal(head->left);

    // printing right tree
    preorderTraversal(head->right);
}
void postorderTraversal(Node *head)
{

    if (head == NULL)
        return;

    // printing left tree
    postorderTraversal(head->left);

    // printing right tree
    postorderTraversal(head->right);

    cout << head->data << " ";
}
void inorderTraversal(Node *head)
{

    if (head == NULL)
        return;

    // printing left tree
    inorderTraversal(head->left);

    cout << head->data << " ";

    // printing right tree
    inorderTraversal(head->right);
}

int heightOfTree(Node *head)
{
    if (head == NULL)
    {
        return 0;
    }
    return max(heightOfTree(head->left), heightOfTree(head->right)) + 1;
}
int diameterOfTree(Node *head)
{
    if (head == NULL)
    {
        return 0;
    }

    int ans1 = diameterOfTree(head->left);
    int ans2 = diameterOfTree(head->right);
    int ans3 = heightOfTree(head->left) + heightOfTree(head->right);

    return max(ans1, max(ans2, ans3));
}

bool balancedOrNot(Node *head)
{
    if (head == NULL)
    {
        return true;
    }

    int leftHeight = heightOfTree(head->left);
    int rightHeight = heightOfTree(head->right);

    bool ans = abs(leftHeight - rightHeight) <= 1;
    return ans && balancedOrNot(head->left) && balancedOrNot(head->right);
}

int main()
{
    Node *head = buildTree();
    cout << "Level order Traversal - " << endl;
    levelOrderPrint(head);

    cout << endl
         << "PreOrder Traversal - " << endl;
    preorderTraversal(head);

    cout << endl
         << "InOrder Traversal - " << endl;
    inorderTraversal(head);

    cout << endl
         << "PostOrder Traversal - " << endl;
    postorderTraversal(head);

    cout << endl
         << balancedOrNot(head) << endl;
}