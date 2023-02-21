#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int firstRepeated(vector<int> arr, int n)
{
    // code here
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(arr[i]==arr[j]){
    //             return i+1;
    //         }
    //     }
    // }
    // return -1;

    // Using Map
    unordered_map<int, int> hash;
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (hash[arr[i]] > 1)
            return i + 1;
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the size of vector :";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of vector :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "First Repeated Element is at position: " << firstRepeated(arr, n);
    return 0;
}