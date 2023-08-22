#include <bits/stdc++.h>
#include <vector>
#include <queue>
#include <deque>
using namespace std;
struct petrolPump
{
    int petrol;
    int distance;
};
int tour(petrolPump p[], int n)
{
    // Same as Gas Station on Leetcode

    int remainingpetrol = 0;
    int petrolneeded = 0;
    int startStation = 0;

    for (int i = 0; i < n; i++)
    {
        remainingpetrol += p[i].petrol - p[i].distance;

        if (remainingpetrol < 0)
        {
            petrolneeded += remainingpetrol;
            remainingpetrol = 0;
            startStation = i + 1;
        }
    }

    if (petrolneeded + remainingpetrol >= 0)
    {
        return startStation;
    }
    else
    {
        return -1;
    }
}

int main()
{
    // Sample data: an array of petrol pumps
    petrolPump pumps[] = {
        {4, 6},
        {6, 5},
        {7, 3},
        {4, 5}};

    int n = sizeof(pumps) / sizeof(pumps[0]);

    int startStation = tour(pumps, n);

    if (startStation != -1)
    {
        std::cout << "Starting petrol station: " << startStation << std::endl;
    }
    else
    {
        std::cout << "No valid starting petrol station found." << std::endl;
    }

    return 0;
}