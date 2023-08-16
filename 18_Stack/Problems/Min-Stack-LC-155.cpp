#include <iostream>
#include <stack>
#include <vector>
using namespace std;
class MinStack
{
public:
    vector<pair<int, int>> arr;
    MinStack()
    {
    }

    void push(int val)
    {
        if (arr.empty())
        {
            arr.push_back({val, val});
            return;
        }
        int min = (val >= arr[arr.size() - 1].second) ? arr[arr.size() - 1].second : val;

        arr.push_back({val, min});
        return;
    }

    void pop()
    {
        if (arr.empty())
        {
            return;
        }
        arr.pop_back();
    }

    int top()
    {
        if (arr.empty())
        {
            return -1;
        }
        return arr[arr.size() - 1].first;
    }

    int getMin()
    {
        if (arr.empty())
        {
            return -1;
        }
        return arr[arr.size() - 1].second;
    }
};
int main()
{
    MinStack *obj = new MinStack();
    obj->push(10);
    obj->push(20);
    obj->push(30);
    obj->push(40);
    obj->pop();
    cout << "Top - " << obj->top() << endl;
    cout << "Min - " << obj->getMin() << endl;
    obj->pop();
    cout << "Min - " << obj->getMin() << endl;
}