#include <bits/stdc++.h>
#include <stack>
#include <vector>
using namespace std;
// Repeat Question Not Understand
vector<double> getCollisionTimes(vector<vector<int>> &cars)
{
    vector<double> ans(cars.size(), -1);

    stack<int> s;

    for (int i = cars.size() - 1; i >= 0; i--)
    {

        // check if the car ahead of current car is faster ?
        while (!s.empty() && cars[s.top()][1] >= cars[i][1])
        {
            s.pop();
        }

        while (!s.empty())
        {
            double coliTime = (double)(cars[s.top()][0] - cars[i][0]) / (cars[i][1] - cars[s.top()][1]);
            if (ans[s.top()] == -1 || coliTime <= ans[s.top()])
            {
                ans[i] = coliTime;
                break;
            }
            else
            {
                s.pop();
            }
        }
        s.push(i);
    }
    return ans;
}
int main()
{
    // Sample input: a vector of vectors representing cars, where each car is represented by a pair of (position, speed).
    vector<vector<int>> cars = {{1, 2}, {2, 1}, {4, 3}, {7, 2}};

    vector<double> collisionTimes = getCollisionTimes(cars);

    // Output the collision times for each car.
    cout << "Collision Times: ";
    for (double time : collisionTimes)
    {
        cout << time << " ";
    }
    cout << endl;

    return 0;
}