#include <iostream>
#include <vector>
using namespace std;
vector<int> printIntersection(vector<int> arr1, vector<int> arr2)
{
    // Brute Force Approach
    vector<int> ans;
    for (int i = 0; i < arr1.size(); i++)
    {
        for (int j = 0; j < arr2.size(); j++)
        {
            if (arr1[i] == arr2[j])
            {
                arr2[j] = -1;
                ans.push_back(arr1[i]);
            }
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the size of Array1 : ";
    cin >> n;
    vector<int> arr1(n);
    cout << "Enter the elements of Array1 : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    int m;
    cout << "Enter the size of Array2 : ";
    cin >> m;
    vector<int> arr2(m);
    cout << "Enter the elements of Array2 : ";
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    vector<int> ans = printIntersection(arr1, arr2);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}