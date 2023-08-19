#include <iostream>
#include <stack>
#include <vector>
using namespace std;
class StockSpanner
{
public:
    stack<pair<int, int>> s;
    StockSpanner() {}

    int next(int price)
    {
        int span = 1;
        while (!s.empty() && s.top().first <= price)
        {
            span += s.top().second;
            s.pop();
        }
        s.push({price, span});
        return span;
    }
};

int main()
{
    StockSpanner *obj = new StockSpanner();

    // You can call the next method and print the result
    int prices[] = {100, 80, 60, 70, 60, 75, 85};
    int n = sizeof(prices) / sizeof(prices[0]);

    for (int i = 0; i < n; ++i)
    {
        int span = obj->next(prices[i]);
        cout << "Span for price " << prices[i] << " is " << span << endl;
    }

    delete obj; // Don't forget to free the allocated memory

    return 0;
}