
#include <iostream>
#include <vector>
#include <limits.h>
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
        // cout << "dataue is Deleted" << endl;
        delete next;
    }
};
vector<int> nodesBetweenCriticalPoints(node *head)
{
    vector<int> ans = {-1, -1};
    node *prev = head;
    if (prev == NULL)
    {
        return ans;
    }
    node *curr = head->next;
    if (curr == NULL)
        return ans;
    node *next = head->next->next;
    if (next == NULL)
        return ans;

    int firstCP = -1;
    int lastCP = -1;
    int minDist = INT_MAX;
    int i = 0;

    while (next != NULL)
    {
        bool isCP = ((curr->data > prev->data && curr->data > next->data) || (curr->data < prev->data && curr->data < next->data)) ? true : false;

        if (isCP && firstCP == -1)
        {
            firstCP = i;
            lastCP = i;
        }
        else if (isCP)
        {
            minDist = min(minDist, i - lastCP);
            lastCP = i;
        }
        i++;
        prev = prev->next;
        curr = curr->next;
        next = next->next;
    }
    if (lastCP == firstCP)
    { // only one CP is found
        return ans;
    }
    else
    {
        ans[0] = minDist;
        ans[1] = lastCP - firstCP;
    }
    return ans;
}
int main()
{
    // Create a linked list
    node *head = new node(5);
    head->next = new node(3);
    head->next->next = new node(1);
    head->next->next->next = new node(2);
    head->next->next->next->next = new node(5);
    head->next->next->next->next->next = new node(1);
    head->next->next->next->next->next->next = new node(2);
    // Add more nodes as needed

    // Call the function and get the result
    vector<int> result = nodesBetweenCriticalPoints(head);

    // Print the result
    cout << "Minimum distance between critical points: " << result[0] << endl;
    cout << "Maximum distance between critical points: " << result[1] << endl;

    // Clean up the linked list memory
    while (head != nullptr)
    {
        node *temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}