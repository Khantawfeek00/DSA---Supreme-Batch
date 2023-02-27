#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

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
    int target;
    cout << "Enter Targeted Element : ";
    cin >> target;

    auto index1 = lower_bound(arr.begin(), arr.end(), target);
    auto index2 = upper_bound(arr.begin(), arr.end(), target);
    cout << "First Occurenece of " << target << " is found at " << index1 - arr.begin() << " th position";
    cout << "Last Occurenece of " << target << " is found at " << index2 - arr.begin() << " th position";

    return 0;
}