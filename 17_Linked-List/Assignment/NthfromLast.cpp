#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node()
    {
        this->data = 0;
        this->next = NULL;
    }

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~node()
    {
        // cout << "Value is Deleted" << endl;
        delete next;
    }
};
// printing linked list
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void solve(node *head, int &k, int &ans)
{
    if (head == NULL)
    {
        return;
    }
    solve(head->next, k, ans);
    if (k == 0)
    {
        ans = head->data;
    }
    k--;
}
int getNode(node *head, int positionFromTail)
{
    int ans = -1;
    solve(head, positionFromTail, ans);
    return ans;
}

int main()
{

    node *first1 = new node(1);
    node *second1 = new node(2);
    node *third1 = new node(5);
    node *fourth1 = new node(8);

    first1->next = second1;
    second1->next = third1;
    third1->next = fourth1;

    cout << "List 1 - " << endl;
    print(first1);

    int k = 2;
    // 0 based indexing
    cout << k << "th Data from last - " << getNode(first1, k);
}
