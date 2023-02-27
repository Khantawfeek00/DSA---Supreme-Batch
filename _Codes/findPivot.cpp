#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// I/P: 3 4 5 6 7 1 2
// O/P: pivot value=1
// int findPivotIndex(vector<int> &arr)
// {
//     int s = 0;
//     int e = arr.size() - 1;
//     int mid = s + (e - s) / 2;
//     if (arr[s] < arr[e])
//     {
//         return arr[s];
//     }
//     while (s < e)
//     {
//         if (arr[mid] >= arr[0])
//             s = mid + 1;
//         else
//             e = mid;
//         mid = s + (e - s) / 2;
//     }
//     return s;
// }

// I/P: 3 4 5 6 7 1 2
// O/P: pivot value=7
// int findPivotIndex(vector<int> &arr)
// {
//     int n = arr.size();
//     if(n==1){
//         return 0;
//     }
//     int s = 0;
//     int e = arr.size() - 1;
//     int mid = s + (e - s) / 2;
//     while (s <= e)
//     {
//         if (arr[mid] > arr[(mid + 1) % n])
//             return mid;
//         else if (arr[mid] < arr[abs(mid - 1) % n])
//             return abs(mid - 1) % n;
//         else if (arr[mid] >= arr[s])
//             s = mid + 1;
//         else
//             e = mid - 1;
//         mid = s + (e - s) / 2;
//     }
//     return -1;
// }

//OR
int findPivotIndex(vector<int> &arr)
{
    int n = arr.size();
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if(s==e)
            return s;
        if (arr[mid] > arr[(mid + 1) % n])
            return mid;
        else if (arr[mid] < arr[abs(mid - 1) % n])
            return abs(mid - 1) % n;
        else if (arr[mid] >= arr[s])
            s = mid + 1;
        else
            e = mid - 1;
        mid = s + (e - s) / 2;
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

    int peak = findPivotIndex(arr);
    cout << "Pivot Elemet in sorted rotated array is : " << arr[peak];
    return 0;
}