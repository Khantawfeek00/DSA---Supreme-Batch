#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int candidate, count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (count == 0)
        {
            candidate = nums[i];
        }
        if (nums[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    /* Sure, the bug in the given code is that it does not check if the candidate element is actually the majority element. To fix the bug, we need to add a second pass through the array to count the occurrences of the candidate element and check if it appears more than n/2 times, where n is the size of the array.*/
    count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == candidate)
        {
            count++;
        }
    }
    if (count > nums.size() / 2)
    {
        return candidate;
    }
    else
    {
        return -1; // or any other value that indicates no majority element exists
    }
}

void moveNegative(int arr[], int n)
{
    // 2, -3, -1, 5, -4
    int i = 0, j = n - 1;
    while (i < j)
    {
        while (arr[i] < 0)
        { // swap when a positive element is encountered
            i++;
        }
        while (arr[j] > 0)
        { // swap when a negative element is encountered
            j--;
        }
        if (i < j)
        {                         // swap only when i is less than j
            swap(arr[i], arr[j]); // swap the elements
        }
    }
}

void printDuplicates(int arr[], int n)
{
    int freq[n + 1];
    memset(freq, 0, sizeof(freq)); // initialize the frequency array to 0
    bool flag = false;             // added a flag to check if there are no duplicate elements
    for (int i = 0; i <= n; i++)
    {
        freq[arr[i]]++;
        if (freq[arr[i]] == 2)
        {
            flag = true;
            cout << arr[i] << " ";
        }
    }
    if (!flag)
    {
        cout << "No duplicate elements";
    }
}

void rotate(vector<vector<int>> &matrix)
{
    int n = matrix.size();

    for (int i = 0; i < n / 2; i++)
    { // Fix 1: Only rotate the first half of rows
        for (int j = i; j < n - i - 1; j++)
        { // Fix 2: Update the column loop to n-i-1
            int temp = matrix[i][j];
            matrix[i][j] = matrix[n - j - 1][i];
            matrix[n - j - 1][i] = matrix[n - i - 1][n - j - 1];
            matrix[n - i - 1][n - j - 1] = matrix[j][n - i - 1];
            matrix[j][n - i - 1] = temp;
        }
    }
}

int main()
{
    // 1. This program declares an integer array of size 5 and initializes it with values 1, 2, 3, 4, and 5. Then, it attempts to print the elements of the array using a loop. However, there's an error in the loop that you need to debug. Can you find it and fix it?
    // int arr[5] = {1, 2, 3, 4, 5};
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // return 0;

    // 2. The above code uses the Boyer-Moore Voting Algorithm to find the majority element in the given vectorof integers. Majority element is that element which appears more than n/2 times. However, there is a bug in the code that causes it to return an incorrect result for some inputs. Your task is to identify and fix the bug.  Hint: Incomplete code.
    // vector<int> nums = {1, 2, 3, 2, 2, 4, 2};
    // cout << "The majority element is: " << majorityElement(nums) << endl;
    // return 0;

    // 3. This code tries to move all negative numbers to one side but have some errors, can you spot those errors. Hint: Incomplete conditions applied.
    // int n = 5;
    // int arr[n] = {2, -3, -1, 5, -4};
    // moveNegative(arr, n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // return 0;

    // 4. This code attempts to print elements(only once) which appear more than one time.Can you spot the error in the code:
    // int n = 6;
    // int arr[n] = {3, 2, 1, 2, 2, 3};
    // printDuplicates(arr, n);
    // return 0;

    // 5. This code attempts to rotate a matrix by 60 degrees. Debug it.
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotate(matrix);

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix.size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}