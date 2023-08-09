#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;
    node()
    {
        this->data = 0;
        this->next = NULL;
        this->prev = NULL;
    }
    node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

int main()
{
}