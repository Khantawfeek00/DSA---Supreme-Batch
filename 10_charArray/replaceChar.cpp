#include <iostream>
#include <string.h>
using namespace std;

void replaceChar(char arr[], char replace)
{
    int i = 0;
    while (arr[i] != '\0')
    {
        if (arr[i] == ' ')
            arr[i] = replace;
        i++;
    }
}
int main()
{
    char arr[4];
    cout << "Enter the string : ";
    cin.getline(arr, 30);
    char ch;
    cout << "Enter the character : ";
    cin >> ch;
    replaceChar(arr, ch);
    cout << "Reverse of String is : " << arr << endl;
}