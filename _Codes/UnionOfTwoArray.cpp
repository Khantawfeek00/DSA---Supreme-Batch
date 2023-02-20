#include <iostream>
#include <vector>
using namespace std;
// We can also use Set and Map with O(n) space and O(n)time
vector<int> uniques(vector<int> arr1, vector<int> arr2)
{
    vector<int> ans;
    for (int i = 0; i < arr1.size(); i++)
    {
        for (int j = 0; j < arr2.size(); j++)
        {
            if (arr1[i] == arr2[j])
            {
                arr2[j] = -1;
            }
        }
    }
    for (int i = 0; i < arr1.size(); i++)
    {
        if (arr1[i] != -1)
        {
            ans.push_back(arr1[i]);
        }
    }
    for (int i = 0; i < arr2.size(); i++)
    {
        if (arr2[i] != -1)
        {
            ans.push_back(arr2[i]);
        }
    }
    return ans;
}

int main()
{

    // Assume the input array have different Elements
    //  int arr[] = {1, 3, 5, 7, 9};
    //  int size1 = 5;
    //  int brr[] = {2, 4, 6, 8};
    //  int size2 = 4;

    // vector<int> ans;

    // for (int i = 0; i < size1; i++)
    // {
    //     ans.push_back(arr[i]);
    // }

    // for (int i = 0; i < size2; i++)
    // {
    //     ans.push_back(brr[i]);
    // }

    // cout<<"Printing the ans Array : ";
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout<<ans[i]<<" ";
    // }

    int n;
    cout << "Enter the size of vector1 :";
    cin >> n;
    vector<int> arr1(n);
    cout << "Enter the elements of vector1 :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    int m;
    cout << "Enter the size of vector2 :";
    cin >> m;
    vector<int> arr2(m);
    cout << "Enter the elements of vector2 :";
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    vector<int> ans = uniques(arr1, arr2);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}