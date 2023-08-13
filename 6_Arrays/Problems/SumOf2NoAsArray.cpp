#include <iostream>
#include <vector>
using namespace std;
void reverseArray(vector<int> &a)
{
    int i = 0;
    int j = a.size() - 1;
    while (i < j)
    {
        swap(a[i], a[j]);
        i++;
        j--;
    }
}
vector<int> findSum(vector<int> &a, vector<int> &b)
{
    if (a.size() == 0)
    {
        return b;
    }
    if (b.size() == 0)
    {
        return a;
    }
    int i = a.size() - 1;
    int j = b.size() - 1;
    vector<int> ans;
    int carry = 0;
    int data1 = 0, data2 = 0;
    while (i >= 0 || j >= 0)
    {
        if (i < 0)
        {
            data1 = 0;
        }
        else
        {
            data1 = a[i];
        }
        if (j < 0)
        {
            data2 = 0;
        }
        else
        {
            data2 = b[j];
        }
        int data = data1 + data2 + carry;
        carry = data / 10;
        ans.push_back(data % 10);
        i--;
        j--;
    }
    while (carry != 0)
    {
        ans.push_back(carry % 10);
        carry = carry / 10;
    }
    reverseArray(ans);
    return ans;
}

int main()
{
    vector<int> arr1 = {5, 6, 3, 9};
    vector<int> arr2 = {8, 4, 2};

    vector<int> ans = findSum(arr1, arr2);
    cout << "Sum - " << endl;
    for (auto ele : ans)
    {
        cout << ele << " ";
    }
    return 0;
}