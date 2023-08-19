#include <bits/stdc++.h>
#include <stack>
#include <vector>
using namespace std;

class Solution
{
    class Car
    {
    public:
        int position;
        int speed;

        Car(int position, int speed)
        {
            this->position = position;
            this->speed = speed;
        }
    };

public:
    static bool comp(Car &a, Car &b)
    {
        return a.position < b.position;
    }

    int carFleet(int target, std::vector<int> &position, std::vector<int> &speed)
    {
        std::vector<Car> cars;
        for (int i = 0; i < speed.size(); i++)
        {
            Car obj(position[i], speed[i]);
            cars.push_back(obj);
        }

        sort(cars.begin(), cars.end(), comp);

        std::stack<float> s;
        for (auto car : cars)
        {
            float time = (target - car.position) / ((float)car.speed);
            while (!s.empty() && s.top() <= time)
            {
                s.pop();
            }
            s.push(time);
        }
        return s.size();
    }
};

int main()
{
    Solution solution;
    int target = 12;
    std::vector<int> position = {10, 8, 0, 5, 3};
    std::vector<int> speed = {2, 4, 1, 1, 3};

    int result = solution.carFleet(target, position, speed);
    std::cout << "Number of car fleets: " << result << std::endl;

    return 0;
}
