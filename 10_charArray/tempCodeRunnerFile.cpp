#include <iostream>
#include <string.h>
using namespace std;

void toLowerCase(char arr[])
{
    int i = 0;
    while (arr[i] != '\0')
    {
        if (arr[i] >= 65 && arr[i] <= 92)
        {
            arr[i] = arr[i] - 'A' + 'a';
        }
        i++;
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