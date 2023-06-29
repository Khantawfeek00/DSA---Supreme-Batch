
#include <bits/stdc++.h>
using namespace std;

// Problems on :
//  1.gfg: Allocate minimum number of pages
//  2.leetcode: 410. Split Array Largest Sum

// Similar Question:
// leetcode: 1011. Capacity To Ship Packages Within D Days

bool isPossibleSolution(int arr[], int N, int M, int sol)
{
    int c = 1;
    int pageSum = 0;
    if (M > N)
    {
        return false;
    }
    for (int i = 0; i < N; i++)
    {
        if (arr[i] > sol)
        {
            return false;
        }
        if (pageSum + arr[i] <= sol)
        {
            pageSum += arr[i];
        }
        else
        {
            c++;
            pageSum = arr[i];
            if (c > M)
            {
                return false;
            }
        }
    }
    return true;
}

// Function to find minimum number of pages.
int findPages(int A[], int N, int M)
{
    // code here
    int start = 0;
    int end = accumulate(A, A + N, 0);
    int sol = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        // cout<<"M = "<<mid<<endl;
        if (isPossibleSolution(A, N, M, mid))
        {
            // cout<<"Mid = "<<mid<<endl;
            sol = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    return sol;
}

int main()
{
    int arr[100000];
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    cout << "Enter the element of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int m;
    cout << "Enter the value of m: ";
    cin >> m;
    cout << findPages(arr, n, m);
}