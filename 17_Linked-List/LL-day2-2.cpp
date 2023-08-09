#include <iostream>
using namespace std;

int main()
{
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
            delete next;
        }
    };
}