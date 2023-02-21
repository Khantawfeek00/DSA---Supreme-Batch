#include <iostream>
#include <vector>
#include <set>
using namespace std;
vector<int> commonElements(vector<int> a, vector<int> b, vector<int> c, int n1, int n2, int n3)
{
    // O(n^3)-Time //Edge test cases is not handled //Bad Code
    //  vector<int> arr;
    //  for(int i=0;i<n1;i++){
    //      for(int j=0;j<n2;j++){
    //          for(int k=0;k<n3;k++){
    //              if(a[i]==b[j] && b[j]==c[k]){
    //                  arr.push_back(a[i]);
    //                  break;
    //              }
    //          }
    //      }
    //  }
    //  return arr;

    // Using 3 Pointers and sets-(to Store unique values) --O(n1+n2+n3) Time --O(n1+n2+n3) Space
    int i = 0, j = 0, k = 0;
    vector<int> arr;
    set<int> sets;
    while (i < n1 && j < n2 && k < n3)
    {
        if (a[i] == b[j] && b[j] == c[k])
        {
            sets.insert(a[i]);
            i++;
            j++;
            k++;
        }
        else if (a[i] < b[j] && a[i] < c[k])
            i++;
        else if (b[j] < c[k])
            j++;
        else
            k++;
    }
    for (auto i : sets)
    {
        arr.push_back(i);
    }
    return arr;
}

int main()
{
    int n1, n2, n3;
    cout << "Enter the size of vector1 :";
    cin >> n1;
    cout << "Enter the size of vector2 :";
    cin >> n2;
    cout << "Enter the size of vector3 :";
    cin >> n3;
    vector<int> arr1(n1);
    vector<int> arr2(n2);
    vector<int> arr3(n3);
    cout << "Enter the elements of vector 1 :";
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter the elements of vector 2 :";
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }
    cout << "Enter the elements of vector 3 :";
    for (int i = 0; i < n3; i++)
    {
        cin >> arr3[i];
    }
    vector<int> ans = commonElements(arr1, arr2, arr3, n1, n2, n3);

    // Printing ans
    cout << "Common Elements : ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}