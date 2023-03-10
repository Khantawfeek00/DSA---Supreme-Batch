#include <iostream>
#include <string.h>
using namespace std;

void toLowerCase(char arr[])
{
    int n = strlen(arr);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 97 && arr[i] <= 122)
            arr[i] = arr[i] - 'a' + 'A';
    }
}
int main()
{
    char arr[4];
    cout << "Enter the string : ";
    cin.getline(arr, 30);
    toLowerCase(arr);
    cout << "LowerCase of String is : " << arr << endl;
}