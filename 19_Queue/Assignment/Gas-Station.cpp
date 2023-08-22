#include <bits/stdc++.h>
#include <vector>
#include <queue>
#include <deque>
using namespace std;
int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
{
    /*
    // Method : 1 (Not Recommended for interview only explain logic)
    //using 2 loops
    //T.C.=O(n^2)
    int front=0;
    int rear=0;
    bool isLoop=false;
    int p=0;
    while(front<gas.size()){
        p=0;
        isLoop=false;
        while(front!=rear || isLoop==false){
            p+=gas[rear];
            if((p-cost[rear])>=0){
                p-=cost[rear];
            }
            else{
                break;
            }

            rear++;
            if(rear==gas.size()){
                isLoop=true;
                rear=0;
            }

        }
        if(front==rear && isLoop==true){
            return front;
        }
        front++;
        rear=front;
    }
    return -1;
    */

    /*
    //Method 2 (Not Recommended for interview only explain logic)
    int front=0;
    int rear=0;
    bool isLoop=false;
    int p=0;
    while(front<gas.size()){
        p=0;
        isLoop=false;
        while(front!=rear || isLoop==false){
            p+=gas[rear];
            if((p-cost[rear])>=0){
                p-=cost[rear];
            }
            else{
                rear++;
                if(front==rear){
                    return -1;
                }
                front=rear;
                break;
            }

            rear++;
            if(rear==gas.size()){
                isLoop=true;
                rear=0;
            }
            if (front == 0 && p < gas[0]) {
                return -1;
            }
        }
        if(front==rear && isLoop==true){
            return front;
        }
    }
    return -1;
    */

    // Method 3 (recommended but dont write directly in interview go step by step logic of method 1 then 2 then for 3 and code 3)
    int deficit = 0;
    int balance = 0;
    int start = 0;

    for (int i = 0; i < gas.size(); i++)
    {

        balance += gas[i] - cost[i];

        if (balance < 0)
        {
            deficit += balance;
            start = i + 1;
            balance = 0;
        }
    }

    if (balance + deficit >= 0)
    {
        return start;
    }
    else
    {
        return -1;
    }
}
#include <iostream>
#include <vector>

// Function to find the starting petrol station
int canCompleteCircuit(std::vector<int> &gas, std::vector<int> &cost);

int main()
{
    // Sample data: gas and cost vectors
    std::vector<int> gas = {4, 3, 5, 6, 2};
    std::vector<int> cost = {5, 2, 4, 3, 5};

    int startStation = canCompleteCircuit(gas, cost);

    if (startStation != -1)
    {
        std::cout << "Starting petrol station: " << startStation << std::endl;
    }
    else
    {
        std::cout << "Cannot complete the circuit." << std::endl;
    }

    return 0;
}
